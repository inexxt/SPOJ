#include <cstdio>

using namespace std;

int main()
{
    int t, i, i2;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &i);
        i2=i-1;
        int a[i];
        while (i2+1)
        {
            scanf("%d", &a[i2]);
            i2--;
        }
        while (i2<i-1)
        {
            printf("%d\n", a[i2]);
            i2++;
        }
        t--;

    }
    return 0;
}
