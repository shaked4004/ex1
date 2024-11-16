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
  printf("Please enter a number:\n");
  scanf("%d", &n);
  printf("Please enter a position:\n");
  scanf("%d", &p);

  int x1 = n >> p;
  x1 = x1 & 1;

  printf("The bit in position %d of number %d is: %d\n", p, n, x1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  
  printf("Please enter a number:\n");
  scanf("%d", &n);
  printf("Please enter a position:\n");
  scanf("%d", &p);

  int mask = 1 << p;
  n = n | mask;

  printf("Number with bit %d set to 1: %d\n", p, n);

  mask = 1 << p;
  mask = ~ mask;
  n = n & mask;
  printf("Number with bit %d set to 0: %d\n", p, n);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  printf("Please enter a number:\n");
  scanf("%d", &n); 
  printf("Please enter a position:\n");
  scanf("%d", &p);
  mask = 1 << p;
  n = mask ^ n;
  printf("Number with bit %d toggled: %d\n", p, n);


  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  printf("Please enter a number:\n");
  scanf("%d", &n); 
  n = ~n;
  n = n & 1;
  printf("%d\n", n);


  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  int n1 , n2;

  printf("Please enter the first number (octal):\n");
  scanf("%o", &n1);

  printf("Please enter the second number (octal):\n");
  scanf("%o", &n2);

  int n3 = n1 + n2;

  printf("The sum in hexadecimal: %X\n", n3);

  int d3 = (n3 >> 3) & 1;
  int d5 = (n3 >> 5) & 1;
  int d7 = (n3 >> 7) & 1;
  int d11 = (n3 >> 11) & 1;

  printf("The 3,5,7,11 bits are: %d%d%d%d\n", d3, d5, d7, d11);

  printf("Bye!\n");

  return 0;
}
