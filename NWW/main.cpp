#include <cstdio>
#include <cmath>

int NWD (int a, int b)
{
    int c;
    while (b != 0)
    {
          c = a % b;
          a = b;
          b = c;

    }
    return a;
}

int main ()
{
    int t, a , b, c, a1;
    scanf("%d" ,&t);
    while (t)
    {
        scanf("%d""%d" ,&a, &b);
        a1=a;
        c=NWD(a1, b);
        a1/=c;
        b/=c;
        b=b*a1*c;
        printf("%d\n", b);
        t--;
    }
	return 0;
}

