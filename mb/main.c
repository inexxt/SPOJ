#include "mb.h"
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

int NWW (int a, int b)
{
    int c, a1;
        a1=a;
        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;

        }
        a1/=a;
        b/=a;
        a=b*a1*a;
	return a;
}

