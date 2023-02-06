/*
  UB C Programming Unit 1 Lesson 2 Program 7
  Age in Days
  Max Gombos
*/
#include <stdio.h> //imports input and output functions

int main(void) { //defines main variable
  int ageYears; //initializes variable as integer
  float ageDays; //initializes variable as float

  printf("This program allows you to enter your age in years as a whole number and convert your age to days.\n"); //instructions
  
  printf("Enter how old you are in years: ");
  //asks user to enter age
  scanf("%d", &ageYears);
  //accepts user input and formats as an integer

  ageDays = ageYears*365.25; //converts age to days
  printf("Age in days: %.2f days", ageDays); //prints age in days
  
  return 0;
}