#include <stdio.h>

#include "adder.h"
#include "user.h"

int main(void) 
{
	printf("My first github program\n");

	int a, b;
    receive_user_input(&a, &b);
	printf("Sum = %d\n", adder(a, b));
	return 1;
}
