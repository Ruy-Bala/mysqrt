#include <stdio.h>
#include <stdlib.h>

int mysqrt (int);

int main (int argc, char *argv[]) {
	int a = 0;
	int X = 0;

	X = atoi(argv[1]);

	a = mysqrt(X);
	printf(":%d\n", a);
	return a;
}

int mysqrt (int X){
	int a = 0, A = 0;

	A = a * a;
	
	while (A <= X){
		a++;
		A = a * a;
	};

	a--;
	A = a * a;
	
	return a;
}
