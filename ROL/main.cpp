#include <stdio.h>

using namespace std;

int tab[101];
int tab2[101];

int n, k, t;

int main()
{
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &n);

        k=1;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &tab[i]);
        }

        for (int i=0; i<n; i++)
        {
            tab2[i]=tab[(i+k)%n];
        }

        for (int i=0; i<n; i++)
        {
            printf("%d ", tab2[i]);
        }
        printf("\n");
    t--;
    }
    return 0;
}
