#include <stdio.h>

int main()
{
    char str[100],*x;
    x=str;
    scanf("%s",str);
    while(x != '\0')x++;
    x--;
    while(x>=str)
    {
        printf("%c",*x);
        x--;
    }
    return 0;
}