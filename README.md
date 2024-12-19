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
SHA-512 using the library functions provided by cryptopp libraries: <br/>
<img src="https://imgur.com/A4EqdnD.png" height="50%" width="50%" alt="steps"/>
<br />
<br />
print the HMAC on the screen in hexadecimal format, also store the HMAC output in the output file:  <br/>
<img src="https://imgur.com/ageIZvr.png" height="50%" width="50%" alt="steps"/>
<br />
<br />
the HMAC of the input messages is computed using openssl.the output HMAC computed is compared  with the HMAC computed 
using openssl for the same file with the same key to see if they are the same. ( the HMAC of the input message is  computed  using diff FOR different files)
)  : <br/>
<img src="https://imgur.com/Q6pmSGK.png" height="80%" width="80%" alt="steps"/>
 <img src="https://imgur.com/lFb8Slk.png" height="80%" width="80%" alt="steps"/>
 <img src="https://imgur.com/IO36B78.png" height="80%" width="80%" alt="steps"/>
<br />
<br />
The  CMAC (Cipher-based Message Authentication Code) is  computed using AES with 128 bits of the input message using the library functions provided by cryptopp.:  <br/>
<img src="https://imgur.com/jcFDyed.png" height="50%" width="50%" alt="steps"/>
 
<br />
<br />
the CMAC of an input message M is computed and printed on the screen in hexadecimal format:  <br/>
<img src="https://imgur.com/nNNpmPX.png" height="50%" width="50%" alt="steps"/>
<img src="https://imgur.com/WMO9d03.png" height="50%" width="50%" alt="steps"/>
<img src="https://imgur.com/VJJCEp7.png" height="50%" width="50%" alt="steps"/>
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
