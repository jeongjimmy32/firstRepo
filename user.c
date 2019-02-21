#include <stdio.h>
#include "user.h"

void receive_user_input(int* a, int* b)
{
    printf("Enter 2 numbers: \n");
	scanf("%d", a);
	scanf("%d", b);
}