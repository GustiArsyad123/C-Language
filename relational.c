    /* File: relational.c*/
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/                                     
    /* Example of comparison of numeric values */
    #include<stdio.h>
    int main ()
    {/* Dictionary */
      int X=10;
      int Y=15;

      /* Algorithm */
       printf ("Hasil X >= Y : %d \n",  X >= Y );
       printf ("Hasil X == Y : %d \n", X == Y ); /*operator kesamaan : ==*/
       printf ("Hasil X != Y : %d \n", X != Y); /*operator ke-tidak-samaan:!=*/
       printf ("Hasil X == X : %d \n", X == X ); /*operator kesamaan: ==*/
       printf ("Hasil X != X : %d \n",X != X); /*operator ke-tidak-samaan:!=*/
       printf ("Hasil X < Y  : %d \n",  X < Y);
       printf ("Hasil X > Y  : %d \n",  X > Y);
       printf ("Hasil X <= Y : %d \n",  X <= Y );
     
             
      return 0;
    }

    /*Competency Summary

Identify the relational operator that will be used to compare two values.*/