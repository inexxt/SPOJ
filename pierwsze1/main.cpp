#include <stdio.h>
using namespace std;

bool numbersTable[100000];
int max=0, t;
int tab[100000];

int main()
{
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        scanf("%d", &tab[t]);
        if (tab[t]>max) max=tab[t];
    }
    for (int i = 2; i*i <= max; i++ )
    {
            if (numbersTable[i] == true) continue;
            for (int j = 2 * i ; j <= max; j += i) numbersTable[j] = true;
    }
    for (int i=0; i<t; i++)
    {
        if (numbersTable[tab[t]]==true) printf("NIE\n");
        else printf("TAK\n");
    }
    return 0;
}
