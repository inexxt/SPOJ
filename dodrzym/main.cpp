#include <stdio.h>

using namespace std;

int tab[1001];
int t, n;

int main()
{
    int t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &n);

        for (int i=1; i<=n; i++)
        {
            scanf("%d", &tab[i]);

        }
        while (n)
        {
            printf("%d ", tab[n]);
            n--;
        }
        printf("\n");
    	t--;
    }
    return 0;
}
