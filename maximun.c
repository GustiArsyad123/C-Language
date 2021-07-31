    /* File: maximun.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/ 
    /* Finding the maximum value from a table containing 10 integer values */
    /************************/
    #include<stdio.h>
    int main ()
    {/* Dictionary : */
      int i;
      int Table[11]= { 10, 500 , 600 , 500, 300, 100, 30, 88, 99, 100, 900 };
      int max;

      /* Algorithm*/
      max = Table[0];
      for (i=1;i< 11; i++)  {
         if (Table[i]>max) {
            max=Table[i];
         }
      } 
      printf ("Max value= %d", max);  return 0;
    }