/** lab17-04.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>

int main(void) {
   int opinion;

   printf("Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream: ");
   scanf("%d", &opinion);

   switch (opinion) {
   case 10:
      printf("Outstanding\n");
      break;
   case 9:     
   case 8:
      printf("Excellent\n");
      break;
   case 7:
   case 6:
      printf("Good\n");
      break;
   case 5:
      printf("Average\n");
      break;
   case 4:
   case 3:
      printf("Below Average\n");
      break;
   case 2:
   case 1:
      printf("Awful Average\n");
      break;
   case 0:
      printf("Horrible\n");
      break;
   default:
      printf("You did not enter a value between 0 and 10.\n");
      break;
   }
   return 0;
}