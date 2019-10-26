//Cable company billing program
#include <iostream>
#include <iomanip>
using namespace std;

	//named constants; residential customers
const double rBillProcessingFee = 4.50;
const double rBasicServiceCost = 20.50;
const double rCostOfAPremiumChannel = 7.50;

	//named constants; business customers
const double bBillProcessingFee = 15.00;
const double bBasicServiceCost = 75.00;
const double bBasicConnectionCost = 5.00;
const double bCostOfAPremiumChannel = 50.00;

double residential();  //Function prototype
double business();    //Function prototype

int main()
{
	//declare variables
   int   accountNumber;
   char  customerType;
   double amountDue;

   cout<<fixed<<showpoint;
   cout<<setprecision(2);

   cout<<"This program computes a cable bill."
       <<endl;	
   cout<<"Enter account number: ";
   cin>>accountNumber;
   cout<<endl;

   cout<<"Enter customer type: R, r "
       <<"(Residential), B, b (Business): "; 
   cin>>customerType;	

   switch(customerType)	
   {
	case 'r':			
	case 'R': amountDue = residential(); 
		    cout<<"Account number = "
                 <<accountNumber<<endl; 
		    cout<<"Amount due = $"
                 <<amountDue<<endl;   
		    break;
	case 'b':		
	case 'B': amountDue = business(); 
		    cout<<"Account number = "
                 <<accountNumber<<endl; 
		    cout<<"Amount due = $"
 	             <<amountDue<<endl;  
		    break;
	default: cout<<"Invalid customer type."
                 <<endl;			
   }

   return 0;
}

double residential ()
{
   int   noOfPChannels;
   double bAmount;

   cout<<"Enter the number of premium "
       <<"channels used : ";  	
   cin>>noOfPChannels;			

   bAmount= rBillProcessingFee + 
		   rBasicServiceCost +	
            noOfPChannels * 				
		   rCostOfAPremiumChannel; 

   return bAmount;				
}

double business()
{
   int  noOfBasicServiceConnections;
   int  noOfPChannels;
   double bAmount;

 	cout<<"Enter the number of basic "
 	    <<"service connections: "; 	
    cin>>noOfBasicServiceConnections;	
	
   cout<<"Enter the number of premium "
       <<"channels used :";	   	
   cin>>noOfPChannels;

   if(noOfBasicServiceConnections <= 10)
	  bAmount = bBillProcessingFee +      
                 bBasicServiceCost +
                 noOfPChannels *  
                 bCostOfAPremiumChannel;
   else
	  bAmount = bBillProcessingFee +           
                 bBasicServiceCost +
	            (noOfBasicServiceConnections -10) * 
          		 bBasicConnectionCost +
                 noOfPChannels *  
                 bCostOfAPremiumChannel;

   return bAmount;	
}