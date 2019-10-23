#include <iostream>
#include <iomanip>

using namespace std;

// Named Constants
    //Named constants – residential customers
const double rBillProcessingFee = 4.50;
const double rBasicServiceCost = 20.50;
const double rCostOfaPremiumChannel = 7.50;

    //Named constants – business customers
const double bBillProcessingFee = 15.00;
const double bBasicServiceCost = 75.00;
const double bBasicConnectionCost = 5.00;
const double bCostOfaPremiumChannel = 50.00;

int main()
{
    // Variables
    int   accountNumber;  
    char  customerType;    
    int   numberOfPremiumChannels; 
    int   numberOfBasicServiceConnections; 
    double amountDue;

    cout<<fixed<<showpoint;	
    cout<<setprecision(2);

    cout<<"This program computes a cable bill."<<endl;

    cout<<"Please enter account number: ";
    cin>>accountNumber;
    cout<<endl;

    cout<<"Enter customer type: R or r (Residential), "
        <<"B or b(Business):  ";	
    cin>> customerType;	
    cout<<endl;

    switch (customerType)
    {
    case 'r':
    case 'R':
        cout<<"Please enter the number of premium channels : ";
        cin>>numberOfPremiumChannels;
        cout<<endl;
        
        amountDue = rBillProcessingFee +  	
                    rBasicServiceCost +
 				    numberOfPremiumChannels * 
                    rCostOfaPremiumChannel;

        cout<<"Account number = "<<accountNumber<<endl;
        cout<<"Amount due = $"<<amountDue<<endl;
        break;
    case 'b':
    case 'B': 
        cout<<"Enter the number of basic service connections: ";
		cin>>numberOfBasicServiceConnections;
		cout<<endl;
		cout<<"Enter the number of premium channels: ";
	    cin>>numberOfPremiumChannels;
		cout<<endl;

        if(numberOfBasicServiceConnections <= 10)	
			amountDue = bBillProcessingFee + 
			 		    bBasicServiceCost +
 					    numberOfPremiumChannels *
 					    bCostOfaPremiumChannel;
		 else
			amountDue = bBillProcessingFee + 
 					    bBasicServiceCost +	 
		                (numberOfBasicServiceConnections -10)
					    * bBasicConnectionCost +
 					    numberOfPremiumChannels * 
 					    bCostOfaPremiumChannel;


        cout<<"Account number = "<<accountNumber<<endl;
		cout<<"Amount due = $"<<amountDue<<endl;	
		break;
    
    default:
        cout<<"Invalid customer type." <<endl;
    }

    return 0;
}