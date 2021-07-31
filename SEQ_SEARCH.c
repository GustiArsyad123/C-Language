    /* File: SEQSEARCH.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/ 
    /* Specifies the position where the table element is X */

    #include<stdio.h>
    int main ()
    {
      /* Dictionary : */
      int i;
      int Table[11]= { 10, 500 , 600 , 500, 300, 100, 30, 88, 99, 100, 900 };
      int X=10; /* index where Tab[max] is maximum */
     
      /* The simplest sequential search algorithm AND */
      /* program stops at index I where value is found */
      i=0;
      while ( (Table[i]!=X) && (i<9) ){
        i++;
      } /* Table[i] == X or i==9 */
      if (Table[i]==X) {
        printf("index value X = %d", i); 
      } else {
        printf("Value not found"); 
      } return 0;
    }