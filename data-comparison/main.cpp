//Program: Comparison of Class Averages.

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std; 

	//function prototypes
void calculateAverage(ifstream& inp, double& courseAvg);
void printResult(ofstream& outp, char courseId,int groupNo, double avg);
void printHeading(ofstream& outp);

int main ()
{

   char courseId1;       //course ID for group 1 
   char courseId2;       //course ID for group 2 
   int numberOfCourses;
   double avg1;    //average for a course in group 1  
   double avg2;    //average for a course in group 2 
   double avgGroup1;     //average group 1
   double avgGroup2;     //average group 2

   ifstream group1; //input stream variable for group 1
   ifstream group2; //input stream variable for group 2
   ofstream outfile;    //output stream variable 
   

   group1.open("group1.txt");	
   group2.open("group2.txt");	

   if(!group1 || !group2)		
   {
      cout<<"Unable to open files."<<endl;
      return 1;
   }

   outfile.open("student.out");	
	
   outfile<<fixed<<showpoint;
   outfile<<setprecision(2); 

   avgGroup1 = 0.0;	
   avgGroup2 = 0.0;	

   numberOfCourses = 0;	

	//print heading
   printHeading(outfile);

   group1>>courseId1;		
   group2>>courseId2;

   while(group1 && group2)		
   {
	    if(courseId1 != courseId2)
	    {
	        cout<<"Data error: Course IDs do not match."<<endl;
	        cout<<"Program terminates."<<endl;
	        return 1;
	    }	
        else					
        {
            calculateAverage(group1, avg1); 
            calculateAverage(group2, avg2); 
            printResult(outfile,courseId1,1,avg1); 	
            printResult(outfile,courseId2,2,avg2); 	
            avgGroup1 = avgGroup1 + avg1;
            avgGroup2 = avgGroup2 + avg2;
            outfile<<endl;
            numberOfCourses++;	
        }

        group1>>courseId1;
        group2>>courseId2;		
   } // end while	

    if(group1 && !group2)	
        cout<<"Ran out of data for group 2 before group 1."   
            <<endl;
    else			
        if(!group1 && group2)
        cout<<"Ran out of data for group 1 before group 2."
            <<endl;
        else	
        {     
        outfile<<"Avg for group 1: " 
                <<avgGroup1 / numberOfCourses<<endl;
            outfile<<"Avg for group 2: " 
                <<avgGroup2 / numberOfCourses<<endl;
        }

    group1.close();			
    group2.close();		
    outfile.close();	

    return 0;
}

void calculateAverage(ifstream& inp, double& courseAvg)
{
   double totalScore = 0.0;	
   int numberOfStudent = 0;	
   int score;
  	
   inp>>score;	
   while(score != -999)
   {
	 totalScore = totalScore + score;
	 numberOfStudent++;		
	 inp>>score;		
   }//end while
   courseAvg = totalScore / numberOfStudent;
}//end calculate Average

/*void printResult(ofstream& outp, char courseID, int groupNo, double avg)
{
   if(groupNo == 1)
	   outp<<"   "<<courseID<<"    ";
   else
	   outp<<"        ";
   outp<<setw(8)<<groupNo<<setw(15)<<avg<<endl;
}//end printResult*/

void printResult(ofstream& outp, char courseId, int groupNo, double avg)
{
   int noOfSymbols;
   int count;

   if(groupNo == 1)
	  outp<<setw(3)<<courseId<<"    ";
   else
	   outp<<"       ";

   noOfSymbols = static_cast<int>(avg)/2;

   if(groupNo == 1)
     for(count = 1; count <= noOfSymbols; count++)
	     outp<<"*";
   else
     for(count = 1; count <= noOfSymbols; count++)
	     outp<<"#";
   outp<<endl;
}//end printResults

void printHeading(ofstream& outp)
{
   outp<<"Course         Course Average"<<endl;
   outp<<" ID    0   10   20   30   40   50   60   70"
       <<"   80   90   100"<<endl;
   outp<<"       |....|....|....|....|....|....|....|"
       <<"....|....|....|"<<endl;
}//end printHeading
