#include <cstdio>
#include <iostream>

int main()
{
    int a, d=1;
    long int b, c;
    scanf("%d",&a);
    for (int i=0; i<a; i++)
    {
        scanf("%ld%ld", &b, &c);
        d=1;
        for (int j=0; j<c; j++)
        {
            b=b%10;
            b*=d;
            d=b%10;
        }
        printf("%d\n", d);
    }
    return 0;
}
