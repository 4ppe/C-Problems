#include <iostream>
#include <iomanip>

using namespace std;

void getNumber(int& num);
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evencount);
void printResults(int zeroCount, int oddCount, int evenCount);



const int N = 20;   


int main()
{

    //variable declaration
    int counter; //Loop control variable 
    int number;  //Store the new number 
    int zeroCount;   //Store the number of zeros 
    int oddCount;    //Store the number of odd integers 
    int evenCount;   //Store the number of even integers  

    initialize(zeroCount, oddCount, evenCount);

    cout<<"Please enter "<<N<<" integers."
        <<endl;
    cout<<"The numbers you entered are--> "<<endl;

    for (counter = 1; counter <= N; counter++)									//Step 3
    {
	    getNumber(number);
	    classifyNumber(number,zeroCount,oddCount,evenCount);
    }// end for loop 

   cout<<endl;
   printResults(zeroCount,oddCount,evenCount);
   return 0;
}

void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
	  zeroCount = 0;
	  oddCount = 0;
	  evenCount = 0;
}

void getNumber(int& num)
{
    cin>>num;
}

void classifyNumber(int num, int& zeroCount, int& oddCount, int& evencount)
{

    switch (num%2)
    {
    case 0:
        evencount++;
        if (num==0)
        {
            zeroCount++;
        }
        break;
    case 1:
    case -1:
        oddCount++;
    }
}

void printResults(int zeroCount, int oddCount, int evenCount)
{
    cout<<"There are "<<evenCount<<" evens, "
	  <<"which also includes "<<zeroCount
       <<" zeros"<<endl;
    cout<<"Total number of odds are: " 
        <<oddCount<<endl;
}