#include <cstdio>

using namespace std;

int main()
{
    int t=0, a=0, b=0, s=0;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d",&a);
        while (a)
        {
            scanf("%d",&b);
            s+=b;
            a--;
        }
        printf ("%d\n", s);
        s=0;
    t--;
    }
    return 0;
}
