/*
  UB C Programming Unit 1 Lesson 2 Program 7
  Age in Days
  Max Gombos
*/
#include <stdio.h>

int main(void) {
  int ageYears;
  float ageDays;

  printf("Enter how old you are in years: ");
  scanf("%d", &ageYears);

  ageDays = ageYears*365.25;
  printf("Age in days: %.2f days", ageDays);
  return 0;
}