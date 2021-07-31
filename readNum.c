    /* File: readNum.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com */
    /* Description : */                                                  
    /* for instance of reading numeric values: integers, real numbers */
    /* then write down the read value */
    #include<stdio.h>
    int main ()
    {/* Dictionary */
      int a;
      float x;

      /* Algorithm */
      printf ("Example of reading and writing, type an integer value: ");
      scanf ("%d", &a); /* reading the value of a which is of type integer note that the variable name is written with &a*/
      printf ("Read value : %d \n", a);
     
      printf ("Type the value of a real number: ");
      scanf ("%f", &x); /*read the value of a type integertype*/
      printf ("Read value : %f \n", x);
     
    /* try typing : scanf("%d", a);and write down the value. What are the consequences?*/
    /* try typing : scanf("%f", x);and write down the value. What are the consequences?*/

    /*Competency Summary

    Recognize, understand and use reading instructions and input data formats.
    The data that has been inputted can be re-displayed in a different format, as long as it matches.
    Understand how data is stored and displayed. The same data can be displayed in different ways.
    Referring to the Halo World program, conclude why for Halo World no %d %f %c format is needed.*/
     
      return 0;
    }