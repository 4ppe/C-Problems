#include <iostream>

using namespace std;

int main(){
    double baseSalary,noOfServiceYears,bonus,totalSale,additionalBonus,payCheck;

    cout<<"Enter your salary : ";
    cin>>baseSalary;

    cout<<endl<<"How long have you been in this store : ";
    cin>>noOfServiceYears;

    // Calculate bonus
    if(noOfServiceYears <= 5){
        bonus = 10 * noOfServiceYears;
    }else
    {
        bonus = 20 * noOfServiceYears;
    }
    
    cout<<endl<<"enter total sale : ";
    cin>>totalSale;

    // Calculate additionalBonus
    if (totalSale < 5000)
    {
        additionalBonus = 0;
    }
    if (totalSale >= 5000 && totalSale < 10000)
    {
        additionalBonus = totalSale * (0.03);
    }else
    {
        additionalBonus = totalSale * (0.06);
    }


    payCheck = baseSalary + bonus + additionalBonus;

    cout<<endl<<"your salary with bonuses is : "<<payCheck<<endl;
    
    
    


    return 0;
}