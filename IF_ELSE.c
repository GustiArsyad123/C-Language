    /* File: IF_ELSE.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description : */                                 
    /* example of using IF in two complementary cases kasus */
    /*Read a value,
     write 'The value of a is positive, the value of a', if a >=0
     'The value of a is negative, the value of a', if a < 0  */
    
    #include<stdio.h>
    int main ()
    {
    /* Dictionary */
      int x;

      /* Program */
      printf ("Two-case IF example \n");
      printf ("Type an integer value :");
      scanf ("%d", &x);
      if (x >= 0)
        {
          printf ("Positive x valuef %d \n", x);
        }
      else /* x< 0 */
        {
          printf ("Nilai x negatif %d \n", x);
        }
      return 0;
    }

    /*Competency Summary

    Recognize the difference between the if (...) {....} conditional instructions described earlier and the if (...) {....} else { .... } conditional instructions described in this section.
    Understand the "sequential" execution of an if (...) {....} else { .... } instruction.*/