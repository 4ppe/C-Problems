# PROGRAMMING EXAMPLE: CHECKING ACCOUNT BALANCE

A local bank in your town is looking for someone to write a program that calculates a customer’s checking account balance at the end of each month. The data is stored in a file in the following form:

467343 23750.40
W 250.00
D 1200
W 75.00
I 120.74
.
.
.


* The first line of data shows the account number followed by the account balance at the beginning of the month. 
* Thereafter each line has two entries: the transaction code and the transaction amount. 
* The transaction code W or w means withdrawal, D or d means deposit, and I or i means interest paid by the bank. 
* The program updates the balance after each transaction. 
* During the month, if at any time the balance goes below $1000.00, a $25.00 service fee is charged. 
* The program prints the following information: account number, balance at the beginning of the month, balance at the end of the month, interest paid by the bank, total amount of deposit, number of deposits, total amount of withdrawal, number of withdrawals, and service charge if any. 

Input: 
	A file consisting of data in the above format.

Output: 
	The output is of the following form: 

Account Number: 467343
Beginning Balance: $23750.40
Ending Balance: $24611.49

Interest Paid: $366.24

Amount Deposited: $2230.50
Number of Deposits: 3

Amount Withdrawn: $1735.65
Number of Withdrawals: 6