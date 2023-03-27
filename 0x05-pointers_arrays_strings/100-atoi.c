#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string
 *
 * Return: integer value of string, or 0 if no digits are found
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int digit_found = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
        {
            digit_found = 1;
            result = result * 10 + (*s - '0');

            /* Check for overflow */
            if (result < 0)
            {
                if (sign == 1)
                    return 2147483647;
                else
                    return -2147483648;
            }
        }
        else if (digit_found)
            break;

        s++;
    }

    return (sign * result);
}
