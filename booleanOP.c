    /* File: booleanOP.c*/
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/
    /* Examples of boolean algebra calculations, pay attention to how to write
       AND and OR and NOT*/
    /************************/
    #include<stdio.h>
    int main ()
    {/* Dictionary */
      int TRUE=1;
      int FALSE=0;

      /* Algorithm  */
       printf ("This value TRUE AND TRUE  : %d \n",  TRUE && TRUE );
       printf ("This value TRUE OR FALSE  : %d \n",  TRUE || FALSE);
       printf ("This value FALSE AND TRUE  : %d \n",  FALSE && TRUE );
       printf ("This value FALSE OR FALSE  : %d \n",  FALSE || FALSE );
       printf ("This value NOT TRUE  : %d \n", !TRUE);
       printf ("This value NOT FALSE  : %d \n", !FALSE );
       
      return 0;
    }

    /*Competency Summary

Understand how boolean operations are performed on boolean variables which in C language are represented as integers. The value "false" is represented by 0, while "true" is not 0.*/