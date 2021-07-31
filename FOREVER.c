    /* File: FOREVER.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/                                             
    /* Continuous loop, will often be used for programs waiting for events */
    /************************/
    #include<stdio.h>
    int main ()
    {/* Dictionary : */
     
    /* Program */
      printf("The program will loop, end with Ctrl-c "); 
      while (1) /* or for (;;) */
        {     printf ("Waiting ^c....\n");
               /* the program will continue to run, until it is interrupted*/
               /* the way to interrupt is to press the [Ctrl] key and the "c" key at the same time*/
        }
      return 0;
    }