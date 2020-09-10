//Author: kmj5614@psu.edu Karthik Madhav Jain
//Collaborator: mmm7378@psu.edu Marquis Mcmillan
//Collaborator: drr5348@psu.edu Daniela Rigazio
//Collaborator: ckv5108@psu.edu Chinmay Vibhute
//Section: 003
//Breakout room number:


#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

float grade;
char* letter_grade;

int main(void){
  char *gradechar = readline("Enter your CMPSC 131 grade: ");
  grade = atof(gradechar);
  if(grade >= 93.00){letter_grade = "A";}
  else if (grade >= 90.00){letter_grade = "A-";}
  else if (grade >= 87.00){letter_grade = "B+";}
  else if (grade >= 83.00){letter_grade = "B";}
  else if (grade >= 80.00){letter_grade = "B-";}
  else if (grade >= 77.00){letter_grade = "C+";}
  else if (grade >= 70.00){letter_grade = "C";}
  else if (grade >= 60.00){letter_grade = "D";}
  else if (grade < 60.00){letter_grade = "F";}
  
  printf("\nYour letter grade for CMPSC 131 is %s.\n",letter_grade);
}