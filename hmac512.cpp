// CEG 6750 sample code
/**
Course Number- CEG 4750/6750      
Course Title- Information Security
Name - Mariamwit Filfile 
UID - U00865436
Prof.’s  Name- Meilin Liu 
Date- 4/10/2024
Project Name - Programming Project 3 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>
#include <cryptopp/filters.h>
#include <cryptopp/sha.h>
#include <cryptopp/hmac.h>
#include <algorithm> 
#include <cctype>    

using namespace CryptoPP;

std::string calculateHMAC(const std::string& key, const std::string& message) {
    HMAC<SHA512> hmac((const byte*)key.data(), key.size());

    std::string mac;
    StringSource(message, true, new HashFilter(hmac, new HexEncoder(new StringSink(mac))));

    
    std::transform(mac.begin(), mac.end(), mac.begin(),
                   [](unsigned char c) { return std::tolower(c); });

    return mac;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <input_file> <output_hmac_file> <key>";
        return 1;
    }

    const std::string inputFilename = argv[1];
    const std::string outputHmacFilename = argv[2];
    const std::string key = argv[3];

    std::ifstream inputFile(inputFilename, std::ios::binary);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file.\n";
        return 1;
    }

    std::string message((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    std::string hmac = calculateHMAC(key, message);

    
    std::cout << "HMAC-SHA512(" << inputFilename << ")= " << hmac << std::endl;

    
    std::ofstream outputFile(outputHmacFilename, std::ios::trunc);
    if (!outputFile) {
        std::cerr << "Error: Unable to open output HMAC file.\n";
        return 1;
    }

    
     outputFile << "HMAC-SHA512(" << inputFilename << ")= " << hmac << "\n"; 
    outputFile.close();

    return 0;
}
