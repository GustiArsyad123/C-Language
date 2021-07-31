/* File: tabel_2.c */
/* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/                                           
/* Defines an array and fills in its value from the input read */
/************************/
#include<stdio.h>
int main ()
{
 /* Dictionary */
  int Table [10];
  int i; 

  /* read the contents of the Tab */
  for (i=0; i<10; i++) {
     scanf ("%d", &Table[i]);
  }  
 
  /* write the contents of the tabs in a row to the right*/
  for (i=0; i<10; i++) {
     printf ("Tab[%d]= %d ;", i,  Table[i]);
  }
  printf ("\n");
  
  return 0;
}