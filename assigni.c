    /* File : assigni.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com */
    /* Fill in the variable i of type in with a value of 7 and write it down */
    #include<stdio.h>
     
    int main ()
    {/* Dictionary */
      int i;
     
      /* Algorithm */
      i = 7; /* now the variable i will be 7 */
      printf ("This is the value of i : %d \n", i);
     
      i = i+10; /* value of i plus 10, the result is stored back in i */
      printf ("This is the value of i : %d \n", i);
     
      return 0;
    }

    /*Competency Summary

    Understand the meaning and impact of “=” in C language, in an assignment.
    Understand the impact of executing “%d” and its relation to variable values, on the printf command in C language.
    Distinguishes the different meaning of the "=" in a declaration, compared to the "assignment" instruction.
    Understand that the result of the computation on the right hand side of the “=” sign will be stored in the variable on the left, on the instruction i = i + 1;.*/