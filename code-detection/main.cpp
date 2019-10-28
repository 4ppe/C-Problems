#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int maxCodeSize = 250;
void readCode(ifstream& inFile, int list[], int& lenght, bool& lenCodeOk);
void compareCode(ifstream& inFile, ofstream& outFile,  int list[], int length);

int main(){

    int codeArray[maxCodeSize];     //array to store 
						            //the secret code
    int codeLength;  	    //variable to store the
   				            //length of the secret code
    bool lengthCodeOk; //variable to indicate if
				        //the length of the secret code 
				        //is less than or equal to 250

    string inputFile;   //variable to store the name
				         //of the input file
    string outputFile;  //variable to store the name
				        //of the output file
    ifstream incode;  //input file stream variable
    ofstream outcode; //output file stream variable

    cout<<"Please enter the input file name :-> ";
    cin>>inputFile;

    incode.open(inputFile);

    if(!incode)
    {   
        cout<<"Input file does not exist"<<endl;
        return 0;
    }

    cout<<"Please enter the output file name :-> ";
    cin>>outputFile;
    outcode.open(outputFile);

    readCode(incode, codeArray, codeLength, lengthCodeOk);

    if(lengthCodeOk)
   	    compareCode(incode, outcode, codeArray, codeLength);
    else
        cout<<"Length of the secret code must be <= "         
            <<maxCodeSize<<endl;

    incode.close();
    outcode.close();

   return 0;

}

void readCode(ifstream& inFile, int list[], int& lenght, bool& lenCodeOk)
{
    lenCodeOk = true;
    int count;
    inFile>>lenght; //get the length of the secret code

    if (lenght > maxCodeSize)
    {   
        lenCodeOk = false;
        return;
    }

    for ( count = 0; count < lenght; count++)
    {   
        inFile>>list[count];   // Get the secret code

    }
}

void compareCode(ifstream& inFile, ofstream& outFile,  int list[], int length)
{
    int length2;
    int digit;
    bool codeOk = true;
    int count;

    inFile>>length2;

    if(length2 != length)
    {
        cout<<"The original code and its copy are not of"
 	        <<" the same length."<<endl;
     return;
    }

    outFile<<"Code Digit    Code Digit Copy"<<endl;

    for (count = 0; count < length2; count++)
    {
        inFile>>digit;
        outFile<<setw(7)<<list[count]<<setw(18)<<digit;
        if (digit != list[count])
        {
            codeOk = false;
            outFile<<"          code digit not the same"<<endl;
        }
        else
        {
            outFile<<endl;
        }
    }
    if(codeOk)
	    outFile<<"Message transmitted OK."<<endl;
    else
	    outFile<<"Error in transmission. Retransmit!!"<<endl;

}