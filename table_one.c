    /* File: table_one.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/
    /* Defines an array and fills in its values */
    /************************/
    #include<stdio.h>
    int main ()
     {/* Dictionary : */
  
      int Table [5] = {1, 2, 3, 4, 5}; /* Tab[0]=1; Tab[1]=2; . .. Tab[4]=5 */
      float TabX[3]= {1.5, 3.5E2, 9.99};
      char Tabchar[4]= {'1', '2', '@', 'Z'};
     
      int i; /* for table index iteration */
     /* write the contents of the tabs in a row to the right*/
     for (i=0; i<5; i++) {
         printf ("Tab[%d]= %d ;", i,  Table[i]);
     }
     printf ("\n");
      
     /* Practice: write down the value of TabX and TabChar */
      
      return 0;
    }

    /*Competency Summary

    Knowing the definition of a table, its use is simple to store multiple values.
    Know how to declare and initialize tables, and write them down.*?