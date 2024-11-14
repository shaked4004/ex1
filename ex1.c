/******************
Name: Shaked iudcowski      
ID: 212488548
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int n,p;
  scanf("%d", &n);
  scanf("%d", &p);

  n = n >> p;
  n = n & 1;

  printf("The number is: %d", n);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  scanf("%d", &n);
  scanf("%d", &p);

  int mask = 1 << p;
  n = n | mask;
  printf("The number is: %d", n);





  scanf("%d", &n);
  scanf("%d", &p);

  int mask = 1 << p;
  mask = ~ mask ;
  n = n & mask;
  printf("The number is: %d", n);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");

  return 0;
}
