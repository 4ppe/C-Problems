#include <iostream>

using namespace std;

double larger(double x, double y);

int main()
{   
    int max,num;
    int counter = 0;
    cout<<"Please enter 10 numbers --> ";
    cin>>num;

    max = num;
    
    while (counter <9)
    {   
        cin>>num;
        max = larger(max,num);
        counter++;
    }
    
    cout<<"The largest number is "<<max<<endl;

}

double larger(double x , double y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}