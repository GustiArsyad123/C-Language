    /* File: combined.c*/
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description : */                                             
    /* Example of combining Boolean and Relational Operations */
    #include<stdio.h>
    int main ()

    {/* Dictionary */
      int money= 6000;
      int rain=0; /*it means rain is FALSE*/
      
      /* Program */
       printf ("money > 5000 and no rain: %d \n",  (money>5000) && (!rain));
     
       money= 6000;
       rain=1; /*it means rain is TRUE*/
       printf ("money > 5000 and no rain: %d \n",  (money>5000) && (!rain));
     
      return 0;
    }