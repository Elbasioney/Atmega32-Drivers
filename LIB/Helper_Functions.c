
#include "Helper_Functions.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

void tostring(u8 str[], u16 num)
{
    int i, rem, len = 0, n , j , temp_len = 4 ;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (j = 0; j < temp_len; j++)
    {
        str[j] = ' ' ;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[temp_len] = '\0';
    
}

