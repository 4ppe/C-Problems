#include <iostream>

using namespace std;

int main(){
    int previous1; 	// Variable to store the first 
				    // Fibonacci number
    int previous2; 	// Variable to store the second 
				    // Fibonacci number
    int current;   	// Variable to store the
				    // current Fibonacci number
    int nthFibonacci; 	// Variable to store the
				        // desired Fibonacci number

    cout<<"Please enter the first two Fibonacci numbers ->  ";
    cin>>previous1>>previous2;

    cout<<"\nThe first two Fibonacci numbers are "<<previous1<<" and "<<previous2<<endl;

    cout<<"Please enter the desired fibonacci number to be determined : ";
    cin>>nthFibonacci;

    for (int i = 3; i <= nthFibonacci; i++)
    {
        current = previous1 + previous2;
        previous1 = previous2;
        previous2 = current;
    }
    
    cout<<endl<<"The "<<nthFibonacci<<"th Fibonacci number is : "<<current<<endl;

    return 0;
}