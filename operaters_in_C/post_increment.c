#include <stdio.h>

int main(void)
{
        int a = 4, b = 3;
        printf("%d", a+++b);
        /**
        * through token generation the equation looks as
        * (a ++ + b) >> (a++ + b)
        **/
        return (0);
}
