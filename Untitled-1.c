#include <stdio.h>
void main()
{
    int a,b,c;
    a = b = 3;
    c = (a * 4,b++,a*=2,a * b);
    printf("%d,%d,%d",a,b,c);
}