    /* File: FADD.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/ 
    /* A function that adds A+B */
    #include<stdio.h>
     
    int add (int A, int B) {
      /* a function named add that accepts two integers namely A and B */
      /* and sends the sum A+B */
      return(A+B);
    }
     
    int inkremen (int A) {
      /* Sends the value of a plus 1; notice that the value of a is NOT CHANGED*/
      return (A+1);
    }
    /************************/
    int main() {
      int x=35;
      int y=55;
      /* use/recall add function */
      printf("The sum of x+y = %d\n", add(x,y)); 
      printf("The sum of 10+20 = %d\n", add(10,20));
      
      /* incremental function usage/call */
      printf("value of x   : %d\n", x);
      printf("value of y   : %d\n", y);
      printf("value of x  after add 1 : %d\n", inkremen(x));
      printf("value of 10  after 1 : %d\n", inkremen(10));
     
      return 0;
    }