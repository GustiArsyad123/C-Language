    /*File : arithmetic.c
    Author : Gusti Arsyad, email suriv27121994@gmail.com
    Arithmetic operations on integers and real numbers:
    Write down the sum, multiplication, division, modulo
     two integer variables*/

    #include<stdio.h>
    int 
    main ()
    {/* Dictionary */
      int x=10;
      int y=15;

      /* Algorithm */
      printf ("This value y / x  : %d \n", y/x );
      printf ("This value x mod  y  : %d \n", x%y );
      printf ("This value x + y  : %d \n", x+y );
      printf ("This value x - y  : %d \n", x-y );
      printf ("This value x * y  : %d \n", x*y );
      printf ("This value x / y  : %d \n", x/y );
      
     
    /* compare with real number division operation */
     float a=10, b=15;
     printf ("This value a / b  : %5.2f \n", a/b );
     printf ("This value b / a  : %5.2f \n", b/a );
     
      return 0;
    }
    
    /*Competency Summary

Familiarize yourself with arithmetic operations in C, and the {+, *, / mod} operators and their calculation order.*/