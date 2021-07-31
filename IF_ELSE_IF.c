    /* File: IF_ELSE_IF.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description : */                                             
    /* example of using IF three cases */
    /* Reading a value, 
       write 'The value of a is positive , the value of a', if a > 0 
       'Value Zero , value a', if a = 0 
       'The value of a is negative , the value of a', if a < 0 */

    #include<stdio.h>
    int main ()
    {
    /* Dictionary  */
      int x;

      /* Program */
      printf ("Three-case IF example \n");
      printf ("Type an integer value:");
      scanf ("%d", &x);
      if (x > 0)
        {
          printf ("Positive x value: %d \n", x);
        }
      else if (x == 0)
        {
          printf ("value of zero: %d \n", x);
        }
      else /* x < 0 */
        {
          printf ("A negative value: %d \n", x);
        }
      return 0;
    }