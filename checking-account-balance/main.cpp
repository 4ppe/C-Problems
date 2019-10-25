//*******************************************************
// Program -- Checking Account Balance. 
// This program calculates a customer’s checking account 
// balance at the end of the month.  
//*******************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const double minimumBalance = 1000.00;
const double serviceCharge = 25.00;


int main()
{
    // Declare and initialize variables
    int accNumber;
    double beginningBalance;
    double accountBalance;
    
    double amountDeposited = 0.0;
    int numberOfDeposits = 0;
    double amountWithdrawn = 0.0;
    int numberOfWithdrawals = 0;
    
    double interestPaid = 0.0;
    
    char transactionCode;
    double transactionAmount;

    bool isServiceCharged = false;

    ifstream infile;
    ofstream outfile;

    infile.open("Ch5_money.txt");

    if(!infile)
    {
        cout<<"Cannot open input file"<<endl;
	    cout<<"Program terminates!!!"<<endl;
	    return 1;
    }
    
    outfile.open("a:Ch5_money.out");

    outfile<<fixed<<showpoint;
    outfile<<setprecision(2);	

    cout<<"Processing data"<<endl;

    infile>>accNumber>>beginningBalance;
  
    accountBalance = beginningBalance;	

    infile>>transactionCode>>transactionAmount;
    
    while (infile)
    {
        switch (transactionCode)
        {
            case 'D':
            case 'd':   accountBalance = accountBalance 
                                    + transactionAmount;
                        amountDeposited = amountDeposited 
                                + transactionAmount;
                        numberOfDeposits++;
                break;
            case 'I': 
            case 'i':   accountBalance = accountBalance 
                                + transactionAmount;
                        interestPaid = interestPaid 
                                + transactionAmount;
                break;
            case 'W': 
            case 'w':   accountBalance = accountBalance 
                                - transactionAmount;
                        amountWithdrawn = amountWithdrawn 
                                + transactionAmount;
                        numberOfWithdrawals++;

                if((accountBalance < minimumBalance) && (!isServiceCharged))
                {
                accountBalance = accountBalance - serviceCharge;
                isServiceCharged = true;
                }
                break;

            default: cout<<"Invalid transaction code" 
                         <<endl;
        
        }//end switch
        infile>> transactionCode>>transactionAmount;
    }//end while

    //Output Results	
    outfile<<"Account Number: "<<accNumber<<endl;
    outfile<<"Beginning Balance: $" 
            <<beginningBalance<<endl;
    outfile<<"Ending Balance: $"<<accountBalance
            <<endl<<endl;
    outfile<<"Interest Paid: $"<<interestPaid 
            <<endl<<endl;
    outfile<<"Amount Deposited: $" 
            <<amountDeposited<<endl;
    outfile<<"Number of Deposits: "<<numberOfDeposits
            <<endl<<endl;
    outfile<<"Amount Withdrawn: $" 
            <<amountWithdrawn<<endl;
    outfile<<"Number of Withdrawals: " 
            <<numberOfWithdrawals 
            <<endl<<endl;

    if(isServiceCharged)
	 outfile<<"Service Charge: $" 
            <<serviceCharge<<endl;
	
  return 0;
}