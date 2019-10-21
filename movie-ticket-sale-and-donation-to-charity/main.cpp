#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // Variables
    string movieName;
    int noOfAdultTicketsSold,noOfChildTicketsSold;
    double grossAmount,adultTicketPrice,childTicketPrice;
    double percentDonation,amountDonated,netSaleAmount;


    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Please enter movie name : "<<flush;
    getline(cin,movieName);
    cout<<endl;

    cout<<"Please enter number of adult tickets sold : "<<flush;
    cin>>noOfAdultTicketsSold;
    cout<<endl;
    
    cout<<"Please enter number of child tickets sold : "<<flush;
    cin>>noOfChildTicketsSold;
    cout<<endl;

    cout<<"Please enter the price of an adult ticket : "<<flush;
    cin>>adultTicketPrice;
    cout<<endl;

    cout<<"Please enter the price of a child ticket : "<<flush;
    cin>>childTicketPrice;
    cout<<endl;

    cout<<"Enter the percentage of donation: "<<flush;
    cin>>percentDonation;
    cout<<endl;

    grossAmount =   (adultTicketPrice * noOfAdultTicketsSold) +
                    (childTicketPrice * noOfChildTicketsSold);

    amountDonated = grossAmount * percentDonation / 100;

    netSaleAmount = grossAmount - amountDonated;


    // Output results
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
        <<"-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

    cout<<setfill('.')<<left<<setw(35)<<"Movie Name: "
    <<right<<" "<<movieName<<endl;

    cout<<left<<setw(35)<<"Number of Tickets Sold: "
        <<setfill(' ')<<right<<setw(10)
        <<noOfAdultTicketsSold + noOfChildTicketsSold
        <<endl;

    cout<<setfill('.')<<left<<setw(35)<<"Gross Amount: "
        <<setfill(' ')<<right<<" $"
        <<setw(8)<<grossAmount<<endl;

    cout<<setfill('.')<<left<<setw(35)<<" Percentage of Gross Amount Donated: "
        <<setfill(' ')<<right<<setw(8)<<percentDonation<<"%"<<endl;

    cout<<setfill('.')<<left<<setw(35)<<"Amount Donated: "
        <<setfill(' ')<<right<<" $"
        <<setw(8)<<amountDonated<<endl;

    cout<<setfill('.')<<left<<setw(35)<<"Net Sale: "
        <<setfill(' ')<<right<<" $"
        <<setw(8)<<netSaleAmount<<endl;


  return 0;
}