    /* File: konstanta.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com */
    /* Description : */       
    /* Defines constants of type int, float, and char  */
    
    #include<stdio.h>
    #define FALSE 0
    #define ZERO 0
    #define ONE 1
    #define pi 3.1415
    int main ()
    {/* Dictionary */
      const int max=3;
      const float param =2.5;
      const char cc = 65 ;
      const char cA = 'A' ;
     
     /* algorithm */
      printf ("PI  = %6.2f\n", pi);
      printf ("ZERO  = %d\n", ZERO);
      printf ("ONE  = %d\n", ONE);
      printf ("FALSE  = %d\n", FALSE);
      printf ("Max  = %d\n", max);
      printf ("param  = %f\n", param);
      printf ("cc  = %c\n", cc);
      printf ("cA  = %c\n", cA);
      printf ("3\n"); /*without using a name, not recommended*/
      return 0;
    }

    /*Competency Summary

    Understand the meaning of constants, and distinguish between constants and variables.
    Apply various ways of defining constants, and write down the results.*/