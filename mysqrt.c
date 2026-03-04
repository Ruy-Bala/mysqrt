 #include <stdio.h>
 #include <stdlib.h>
 
 int mysqrt (int);
 
 int main (int argc, char *argv[]) {
      int a = 0;
      int A = 0;
      int X = 0;

     X = atoi(argv[1]);

     a = mysqrt(X);
     A = a * a;
     printf(":%d :%d\n", a, A);
     return a;
}