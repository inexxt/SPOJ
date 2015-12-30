#include <cstdio>

using namespace std;

int main()
{
    int n, t;
    long int s, m, a;
    scanf("%d", &t);
    while(t)
    {
        s=0;
        scanf("%d""%ld" ,&n, &m);
        while(n)
        {
            scanf("%ld", &a);
            s+=24*60*60/a;
            n--;
        }
        if (s % m == 0) s=s/m;
        else s=s/m + 1;
        printf ("%ld\n", s);
        t--;
    }
    return 0;
}
