/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, tot;
  float avg;

  printf("Enter the First subject mark:");
  scanf("%d", &mark1);

  printf("Enter the Second subject mark:");
  scanf("%d", &mark2);
  tot = mark1 + mark2;
  avg = (float)tot / 2;

  printf("Average of the two marks is:%.2f", avg);

  return 0;
}
