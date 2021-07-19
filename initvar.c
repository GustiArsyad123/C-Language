
/* File : initvar.c */
/* Author : Gusti Arsyad, email suriv27121994@gmail.com */
/*Fill in the variable i of type in with a value of 7 and write it down*/

#include<stdio.h>
int main ()
{/* Dictionary */
  int i = 7; /* declaration and initialization of variable i value with 7 */
  int i_multiplication = 7*2; /*meaning the computer will calculate 7x2 (the result is 14) and will store the value 14 in my value variable.*/
  int duck=10; /*I have 10 ducks */
  float large=2.5*2; /* My land area is 2.5 hectares */
  float around= 2*3.14*5.5; /* the circumference of a circle whose radius is 5.5. cm */

    /* Algorithm */
  printf ("this is the value of i : %d \n", i); /*to observe the impact of initialization*/
  printf ("this is the value of i_multiplication : %d \n", i_multiplication); /*to observe the impact of initialization*/
  printf ("this is the value of bebek : %d \n", duck); /*to observe the impact of initialization*/
  printf ("this is the value of luas : %d \n", large); /*to observe the impact of initialization*/
  printf ("this is the value of keliling : %d \n", around); /*to observe the impact of initialization*/
  return 0;
}

/*Competency Summary

    Understand variable names and how to introduce them to the program.
    Understand the meaning and impact of the construction “=” in C language, in a variable declaration.
    Understand the impact of executing “%d” and its relation to variable values, on the printf command in C language.*/