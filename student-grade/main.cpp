
//Program to calculate average test score.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    //Declare variables;
	ifstream inFile;  //input file stream variable
	ofstream outFile; //output file stream variable

    int test1, test2, test3, test4, test5;  // variables
 				                            // to read five test scores

    double average;	    // variable to store average 
				        // test score
    char studentId;     // variable to store 
				        // student ID

    inFile.open("test.txt"); 
	outFile.open("testavg.out");

    outFile<<fixed<<showpoint;
	outFile<<setprecision(2);

    cout<<"Processing data"<<endl;
	inFile>>studentId;
	outFile<<"Student ID: "<<studentId
           <<endl;
	inFile>>test1>>test2>>test3
          >>test4>>test5;

    outFile<<"Test scores: "<<setw(4)<<test1
		    <<setw(4)<<test2<<setw(4)<<test3
		    <<setw(4)<<test4
 		    <<setw(4)<<test5<<endl;
	average = static_cast<double>(test1+test2+test3+
    			    test4+test5)/5.0;
	outFile<<"Average test score: "<<setw(6)
 		 <<average<<endl;

	inFile.close();
	outFile.close();
	return 0;
}