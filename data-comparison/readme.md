# PROGRAMMING EXAMPLE: DATA COMPARISON

* This programming example illustrates:
    * How to read data from more than one file in the same program
    * How to send output to a file
    * How to generate bar graphs
    * With the help of functions and parameter passing, how to use the same program segment on different (but similar) sets of data
    * How to use structured design to solve a problem and how to perform parameter passing

* We break the program in two parts. First we illustrate how to read data from more than one file and then we will show how to generate bar graphs.

* Two groups of students at a local university are enrolled in certain special courses during the summer semester. 
* The courses are offered for the first time and are taught by different teachers. 
* At the end of the semester, both groups are given the same tests for the same courses and their scores are recorded in separate files. 
* The data in each file is in the following form:

courseNo  score1, score2, ..., scoreN –999
courseNo  score1, score2, ..., scoreM –999
...

The output is of the form

Course# 	Group#	Course Average
   A		 1		    	80.50
		 	 2	    		82.75
   B 	     1 		    	78.00
  		     2           	75.35


Input: Because data for the two groups are recorded in separate files, input data appear in two separate files.

Output: As shown above.