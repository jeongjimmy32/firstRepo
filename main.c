#include <stdio.h>

#include "mathfunc.h"
#include "user.h"

int main(void) 
{
	printf("My first github program\n");

	int a, b;
    receive_user_input(&a, &b);
	printf("Sum = %d\n", adder(a, b));
	printf("Multiplication = %d\n", multiply(a, b));
	printf("Division = %d\n", divide(a, b));
	return 1;
}
