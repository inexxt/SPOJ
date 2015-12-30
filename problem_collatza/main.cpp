#include <cstdio>
using namespace std;

int main()
{
    int t, s, x1, x2, n=0;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &s);
        x1=s;
        while(x1!=1)
        {
            if (x1%2==0) x2=x1/2;
            else x2=3*x1+1;
            x1=x2;
            n++;
        }
        printf("%d\n", n);
        n=0;
        t--;
    }

    return 0;
}
