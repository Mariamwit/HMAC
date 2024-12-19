# HMAC
<h1> HMAC (Keyed-hash Message Authentication Code) using SHA-512  </h1>



<h2>Description</h2>
 This project implements HMAC (Keyed-hash Message Authentication Code) using SHA-512 as the building block. It then computes the  CMAC (Cipher-based Message Authentication Code) using AES with 128 bits of the input message using the library functions provided by cryptopp. After computing the CMAC of an input message M, it is printed on the screen in hexadecimal format,  the CMAC output is also stored in 
the output file. The program takes three arguments: an input file name, an output CMAC file, and a key.  
<br />


<h2>Languages and Utilities Used</h2>

- <b>SHA-512 using the library functions provided by cryptopp libraries</b> 
- <b>Cryptography</b>
- <b>openssl</b>
- <b> CMAC (Cipher-based Message Authentication Code) using AES</b>

<h2>Environments Used </h2>

- <b>Putty</b> 

<h2>Program walk-through:</h2>

<p align="center">
User1 types a message and sends it: <br/>
<img src="[https://imgur.com/A4EqdnD" height="50%" width="50%" alt="Encrypted messaging app steps"/>
<br />
<br />
The message is encrypted using User2's public key:  <br/>
<img src="https://i.imgur.com/9tiKgZv.png" height="80%" width="80%" alt="Encrypted messaging app steps"/>
<br />
<br />
The encrypted message is sent to the server: <br/>
<img src="https://i.imgur.com/aVNyeSX.png" height="80%" width="80%" alt="Encrypted messaging app steps"/>
<br />
<br />
The user2 recieves the encrypted message and decryptes it using its private key:  <br/>
<img src="https://i.imgur.com/z1gnwMy.png" height="80%" width="80%" alt="Encrypted messaging app steps"/>
<br />
<br />
The decrypted message is displayed in user2's chat window:  <br/>
<img src="https://i.imgur.com/hsQOHbT.png" height="80%" width="80%" alt="Encrypted messaging app steps"/>
<br />
<br />


<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
