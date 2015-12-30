#include <cstdio>

using namespace std;

int main()
{
    long long int i;
    int t, a[10]={0, 0, 0, 0, 2, 2, 2, 4, 2, 8}, b[10]={0, 1, 2, 6, 4, 0, 0, 0, 0, 0};
    scanf("%d", &t);
    while (t)
    {
        scanf("%lld", &i);
        if (i>9)
        printf("%d %d\n", 0, 0);
        else
        printf("%d %d\n", a[i], b[i]);
        t--;

    }
    return 0;
}
