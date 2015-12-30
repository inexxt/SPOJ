#include <stdio.h>
#include <set>
#include <cmath>
using namespace std;

set <int> zbp;
set <int>::iterator it;

int main()
{
    int t, max=0;
    scanf("%d", &t);
    int tab[t];
    for (int i=0; i<t; i++)
    {
        scanf("%d", &tab[i]);
        if (tab[i]>max) max=tab[i];
    }

    for (int i=2; i<max; i++)
    {
        zbp.insert(i);
    }

    for (it = zbp.begin(); (*it)*(*it)!=zbp.end(); it++)
    {
        if (*it == 1) continue;
        x=zbp.find(it);
        for (int j = 2 ; x!=zbp.end(); j++)
        {
            y=*it;
            zbp.earse(y*j);
            x=zbp.find(j*y);
        }
    }
    for (int i=0; i<t; i++)
    {
        if (zbp.find(tab[i])!=zbp.end()) printf("TAK")
        else printf("NIE");
    }
    return 0;
}
