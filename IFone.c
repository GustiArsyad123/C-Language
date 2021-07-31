    /* File: IFone.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description : */                                             
    /* an example of using IF in one case
       reads integer value, writes value if positive */

    #include<stdio.h>
    int 
    main ()
    {
    /* Dictionary */
      int x;

      /* Algorithm */
      printf ("One-case IF example \n");
      printf ("Type an integer value: ");
      scanf ("%d", &x);
      if (x >= 6)
        {
          printf ("Positive a value %d \n", x);
        }
     /* if the value of a is not positive then the program does nothing */
      return 0;
    }