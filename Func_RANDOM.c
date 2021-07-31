    /* File: Func_RANDOM.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/ 
    /* Use the standard library to generate random numbers */
    /************************/
    #include<stdio.h>
    #include<stdlib.h> 
    /************************/
    /************************/
    int main() {
       const int MIN=1; 
       const int MAX=150; 
       /* The program will generate 10 random numbers between MIN to MAX  */ 
        for(int i = 0; i<10; i++) 
            printf(" %d ", rand()%MAX + MIN); 
      return 0;
    }