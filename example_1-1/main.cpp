#include <iostream>

using namespace std;

int main(){
    double lenght,width,perimeter,area;
    
    cout << "Length of the rectangle : ";
    cin>>lenght;
    
    cout <<endl<< "Width of the rectangle : ";
    cin>>width;

    perimeter = ( 2 * ( lenght + width ));
    area = lenght * width;
    
    cout<<endl<<"perimeter of the rectangle : "<<perimeter<<endl;
    cout<<"area of the rectangle : "<<area<<endl;

    return 0;
}

