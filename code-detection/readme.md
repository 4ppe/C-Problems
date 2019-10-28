# PROGRAMMING EXAMPLE: CODE DETECTION

* When a message is transmitted in secret code over a transmission channel, it is usually transmitted as a sequence of bits, that is, 0s and 1s. 
* Due to noise in the transmission channel, the transmitted message may become corrupted. 
* The message received at the destination is not the same as the message transmitted; some of the bits may have been changed. 
* There are several techniques to check the validity of the transmitted message at the destination. 
* One technique is to transmit the same message twice. At the destination, both copies of the message are compared bit by bit. 
* If the corresponding bits are the same, the message received is error-free.
* We write a program to check if the message received at the destination is error free. 
* For simplicity, we assume that the secret code representing the message is a sequence of digits (0 to 9) and the maximum length of the message is 250 digits. 
* Also, the first number in the message is the length of the message. 
* If the secret code is

	- 7 9 2 7 8 3 5 6	 

	- then the message is 7 digits long.  Also, the message is transmitted twice. 
* The above message is transmitted as

	- 7 9 2 7 8 3 5 6 7 9 2 7 8 3 5 6

Input: A file containing the secret code and its copy.

Output: The secret code, its copy, and a message if the received code is error free in the following form: 

Code Digit	----------- Code Digit Copy

 	  9		 	  	  9
 	  2		 		  2
 	  7		 		  7
 	  8		 		  8
 	  3		 		  3
 	  5		 		  5
   	  6		 		  6

Message transmitted OK.