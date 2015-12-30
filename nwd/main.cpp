#include <cstdio>

using namespace std;

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

int main()
{
    int a, b, t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d""%d", &a, &b);
        printf("%d\n", NWD(a, b));
        t--;
    }
    return 0;
}
