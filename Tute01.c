/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1,sub2;//sub is short for subjects
  float avg=0;//avg for average

  printf("Enter marks for subject 1 = ");//prompt
  scanf("%f",&sub1);//catching the value

  printf("Enter marks for subject 2 = ");//prompt
  scanf("%f",&sub2);//reading the value
  
  avg=(sub1+sub2)/2.0;

  printf("Average = %.2f",avg);
  return 0;
}

