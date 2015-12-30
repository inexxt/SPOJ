#include <cstdio>
using namespace std;

int main()
{
    int x=0, y=0, t, a, k, n;
    scanf("%d", &t);
    while (t)
    {
        //////////////// Wczytujê
        scanf("%d", &n);
        while (n)
        {
            scanf("%d", &k);
            scanf("%d", &a);
            if (k==0) y+=a;
            if (k==1) y-=a;
            if (k==2) x-=a;
            if (k==3) x+=a;
            n--;
        }
        //////////////// Wypisujê
        if (x==0 && y==0) printf("studnia\n");
        else
        {
            if (y>0)
            {
                printf("%d %d\n", 0, y);
                if (x>0) printf("%d %d\n", 3, x);
                if (x<0) printf("%d %d\n", 2, -x);
            }

            if (y<0)
            {
                printf("%d %d\n", 1, -y);
                if (x>0) printf("%d %d\n", 3, x);
                if (x<0) printf("%d %d\n", 2, -x);
            }

            if (y==0)
            {
                if (x>0) printf("%d %d\n", 3, x);
                if (x<0) printf("%d %d\n", 2, -x);
            }
            x=0;
            y=0;
        }
        t--;
    }

    return 0;
}
