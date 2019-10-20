#include <iostream>
using namespace std;


//named constants
const int Halfdollar = 50;
const int Quarter  = 25;
const int Dime = 10;
const int Nickel = 5;

int main()
{
	//declare variable
    int change;


    cout<<"Enter change in cents: ";   
    cin>>change;       	
    cout<<endl;
    cout<<"The change you entered is "<<change<<endl;	

    cout<<"The number of half-dollars to be returned "
        <<"are "<<change / Halfdollar<<endl;	
    change = change % Halfdollar;

    cout<<"The number of quarters to be returned are "
        <<change / Quarter<<endl;	
    change = change % Quarter;
    
    cout<<"The number of dimes to be returned are "
        <<change / Dime<<endl;			        
    change = change % Dime; 			        

    cout<<"The number of nickels to be returned are "
        <<change / Nickel<<endl;			       
    change = change % Nickel; 			       

    cout<<"The number of pennies to be returned are "
        <<change<<endl; 				       
    return 0;
}