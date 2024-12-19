
// CEG 6750 
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
#include <sstream>
#include <iomanip>
#include <cryptopp/hex.h>
#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/cmac.h>

using namespace CryptoPP;
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc != 4)
    {
        cout << "Usage: " << argv[0] << " input_file output_cmac_file key" << endl;
        return 1;
    }

    
    string input_file = argv[1];
    string output_cmac_file = argv[2];
    string key_str = argv[3];

    
    byte key[AES::DEFAULT_KEYLENGTH];
    StringSource(key_str, true, new HexDecoder(new ArraySink(key, AES::DEFAULT_KEYLENGTH)));

    
    string data;
    ifstream input(input_file, ios::binary);
    stringstream buffer;
    buffer << input.rdbuf();
    data = buffer.str();

    
    CMAC<AES> cmac;
    cmac.SetKey(key, AES::DEFAULT_KEYLENGTH);
    cmac.Update((const byte*)data.data(), data.size());
    byte mac[AES::BLOCKSIZE];
    cmac.Final(mac);

    
    stringstream cmac_stream;
    cmac_stream << hex << setfill('0');
    for (int i = 0; i < AES::BLOCKSIZE; i++)
    {
        cmac_stream << setw(2) << (int)mac[i];
    }
    string cmac_hex = cmac_stream.str();

   
    cout << "CMAC(" << input_file << ")= " << cmac_hex << endl;

    
    ofstream output(output_cmac_file);
    if (!output)
    {
        cerr << "Error: Cannot open output CMAC file for writing." << endl;
        return 1;
    }
    output << "CMAC(" << input_file << ")= " << cmac_hex << endl;

    return 0;
}
