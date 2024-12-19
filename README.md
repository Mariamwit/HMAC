# HMAC
<h1> Encrypted Messaging </h1>



<h2>Description</h2>
Project consists of a simple encrypted messaging application that allows users to communicate securely. It has end-to-end encryption to make sure that messages can only be read by the reciever. The application includes server and client with a graphical user interface (GUI) to send and recieve messages.
<br />


<h2>Languages and Utilities Used</h2>

- <b>Python</b> 
- <b>Cryptography</b>

<h2>Environments Used </h2>

- <b>Windows 11</b> 

<h2>Program walk-through:</h2>

<p align="center">
User1 types a message and sends it: <br/>
<img src="https://i.imgur.com/o9zkfJ2.png" height="80%" width="80%" alt="Encrypted messaging app steps"/>
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
