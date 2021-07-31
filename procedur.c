    /* File: procedur.c */
    /* Author : Gusti Arsyad, email suriv27121994@gmail.com*/
    /* Description :*/                
    /* Example of the main program and procedure for exchanging 2 values ​​buah */
    /************************/
    #include<stdio.h>
     
    void plus1 (int* a) {
      /* prosedur menambahkan 1 ke parameter a */
      /* "*a" artinya isi dari lokasi yang ditunjuk oleh a */
      int temp;
      *a= *a + 1; 
    }
     
    void plusd (int* a, int d) {
      /* prosedur menambahkan d ke parameter a */
      /* nilai a akan diubah, sedangkan nilai d tidak diubah */
      int temp;
      *a= *a + d; 
    }
     
    void swap (int* a, int* b) {
      /* prosedur menukar nilai dua buah variabel a dan b */
      /* "*a" artinya isi dari lokasi yang ditunjuk oleh a*/
      int temp; /* variabel lokal */
     
      /* algoritma */
      temp= (*a); *a= (*b); *b=temp;
    }
     
    int main() {
      int i=9;
      int x=10;
      int y=25;
      int d=7;
     
      plus1(&i); /* perhatikan saat pemanggilan &i */ 
      printf("nilai i+1: %d\n", i);
     
      i=8;
      plusd(&i,d ); /* perhatikan saat pemanggilan &i dan d */ 
      printf("nilai i+7: %d\n", i);
     
      plusd(&d,3 ); /* perhatikan saat pemanggilan &i */ 
      printf("nilai d+3: %d\n", d);
     
      printf("nilai x dan y : %d, %d\n", x,y);
      swap (&x, &y);
      printf("nilai x dan y setelah swap : %d, %d\n", x,y);
      return 0;
    }