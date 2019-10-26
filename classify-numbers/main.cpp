#include <iostream>

using namespace std;

int main(){
    // Variables
    int number;	    //variable to store the number read
    int zeros = 0;		//variable to store the zero count
    int evens = 0;		//variable to store the even count
    int odds = 0;		//variable to store the odd count

    cout<<"Please enter 20 number"<<endl<<"->> : ";
    for (size_t i = 0; i < 20; i++)
    {
        cin>>number;

        if (number == 0)
        {
            zeros++;
            evens++;
        }
        else
        {
            switch (number%2)
            {
            case 0:
                evens++;    
                break;
            case 1:
            case -1:
                odds++;
                break;
            } 
        }  
    }

    cout<<"There are "<<evens<<" evens, "
	    <<"which also includes "<<zeros
        <<" zeros"<<endl;	
    cout<<"Total number of odds are: "<<odds<<endl;
}