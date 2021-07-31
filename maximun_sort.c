    /* File: maximun_sort.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/ 
    /* Sort the table elements with the maximum sort method */

    #include<stdio.h>
    int main ()
    {
      /* Dictionary : */
      int i;
      int Table[11]= { 10, 500 , 600 , 500, 300, 100, 30, 88, 99, 100, 900 };
      int maximun; /* index where Tab[max] is maximum */
      int k, temp; /* working variable */

      /* Maximum sort algorithm decreases, the smallest index contains the largest value*/
      for (i=0; i<11; i++ ){
      /* specify max index, where Tab[max] is maximum */
      /* untuk index tabel i..11 */
         maximun = i;
         for (k= i+1 ;k< 11; k++)  {
            if (Table[k]> Table[maximun]) {
               maximun=k;
            }
         } 
     
        /* Tukar nilai Tab[max] dengan tab[i] */
        temp= Table[i];
        Table[i]= Table[maximun];
        Table[maximun] = temp;
      }
      for (i=0;i<11;i++) {
         printf (" %d ; ", Table[i]);
      }
      return 0;
    }