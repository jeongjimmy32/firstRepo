#include <stdio.h>
#include "user.h"


/**
 * @brief A function to recieve 2 integer inputs from user
 * 
 * @param a 
 * @param b 
 */
void receive_user_input(int* a, int* b)
{
    printf("Enter 2 numbers: \n");
	scanf("%d", a);
	scanf("%d", b);
}