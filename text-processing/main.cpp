#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);

int main()
{
		//Step 1; Declare variables
	int 	lineCount;
	int		letterCount[26];
	char  	ch;
	ifstream 	infile; 
	ofstream	outfile;

	infile.open("textin.txt");
	
	if(!infile)
	{
	   cout<<"Cannot open input file."<<endl;
	   return 1;
    }

	outfile.open("textout.out");

	initialize(lineCount, letterCount);

	infile.get(ch);	
	while(infile)
	{
		copyText(infile,outfile,ch,letterCount);
		lineCount++;
		infile.get(ch);	
	}
	writeTotal(outfile,lineCount,letterCount);	
	infile.close();	
	outfile.close();
	return 0;
}

void initialize(int& lc, int list[])
{
	int j;
	lc = 0;

	for(j = 0; j < 26; j++)
	{
 	    list[j] = 0;
	}
}

void writeTotal(ofstream& outtext, int lc, int list[])
{
    int index;

    outtext<<"The number of lines = "<<lc<<endl;
    for(index = 0; index < 26; index++)
	{
		outtext<<static_cast<char>(index+65)<<" count = "<<list[index]<<endl;
	}
}

void characterCount(char ch, int list[])
{
	int index;

	ch = toupper(ch); 				
    index = static_cast<int>(ch) - 65; 	
	if(0 <= index && index < 26)  
    	list[index]++;
}
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
	while(ch != '\n')
	{
	  outtext<<ch;	
	  characterCount(ch,list); 	
					
	  intext.get(ch);	
	}
	outtext<<ch;
}
