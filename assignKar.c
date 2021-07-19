    /* File: assignKar.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com */
    /* description : */
    /* This program contains a simple example to define */
    /* variable type character */
    #include<stdio.h>
    int main ()
    {
    /* Dictionary */
      char a = 66; /* initialize character value with 66, code letter 'B' */
      char a1;
    /* Algorithm*/
    /* writing characters as letters */
      printf ("Karakter = %a\n", a);
      a1 = 'Z'; /* variable a1 is filled with the letter 'Z' */
      printf ("Karakter = %a\n", a1);
     
    /* character writing */
      printf ("Karakter dalam kode ASCII = %d\n", a);
      printf ("Karakter sebagai huruf = %c\n", a);
      printf ("Karakter dalam kode ASCII = %d\n", a1);
      printf ("Karakter sebagai huruf = %c\n", a1);
     
      return 0;
    }

    /*Competency Summary
    Know the type of char and how to fill it with ASCII code or with characters.
    Know how to print a character in ASCII code or in its character form.*/