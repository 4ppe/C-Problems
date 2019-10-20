#include <iostream>
using namespace std;

//named constants
const double conversion = 2.54;
const int inchesPerFoot = 12;

int main(){
    int feet;               //variable to hold given feet
    int inches;              //variable to hold given inches
    int totalInches;        //variable to hold total inches
    double centimeter;     // variable to hold length 
				            //in centimeters.


    cout<<"Enter two integers, one for feet, "
        <<"one for inches: ";   			//Step 1
    cin>>feet>>inches;				        //Step 2
    cout<<endl;
    cout<<"The numbers you entered are "<<feet
       <<" for feet "<<"and "<<inches
       <<" for inches. "<<endl;	        //Step3
    totalInches = inchesPerFoot * feet + inches; 								//Step 4
    cout<<endl;
    cout<<"The total number of inches = "
        <<totalInches<<endl;			//Step 5
    centimeter = conversion * totalInches;										//Step 6
    cout<<"The number of centimeters = "
        <<centimeter<<endl;			//Step 7
   return 0;
}