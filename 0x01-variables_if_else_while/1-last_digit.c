#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n and check its last digit
 *
 * Return: 0
 */
int main(void)
{
        int n;

        /* seed the random number generator */
        srand(time(0));

        /* generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
        n = rand() - RAND_MAX / 2;

        /* check if the last digit is greater than 5 */
        if ((n % 10) > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
        }

        /* check if the last digit is less than 6 and not 0 */
        else if ((n % 10) < 6 && (n % 10) != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
        }

        /* if the last digit is 0 */
        else
        {
                printf("Last digit of %d is %d and is 0\n", n, n % 10);
        }

        return (0);
}
