    /* File: Increment.c*/
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /*  Description : */                                               
    /* Effects of operator ++ */
    
    #include<stdio.h>
    int main ()
    {/* Dictionary */
      int i;

      /* Algorithm */
      i = 5;
      printf ("Value i :%d %d\n", i, i++);
      i = 3;
      printf ("%d\n", ++i); /* before printing, the value of i is added by 1*/
     
      return 0;
    }