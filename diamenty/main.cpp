#include <stdio.h>

int n, l, j, p, k=0, licz, pomv, pomw;

struct diament
{
    float vw;
    int kol;
};

diament tab[100*1000];

void INSERT (int a, int m)
{
    j=licz;
    while(j>=m)
    {
        tab[j+1]=tab[j];
        --j;
    }
    tab[m].vw=a;
    return;
}

void BIN(int a, int k)
{
    if ( (a==tab[(p+k)/2].vw) || (p+1==k) )
    {
        INSERT(a, (p+k)/2+1);
        return;
    }
    else
    {
        if (a<tab[(p+k)/2].vw)
        {
            k=(p+k)/2;
            BIN(p, k);
        }
        else
        {
            p=(p+k)/2;
            BIN(p, k);
        }
    }
}
using namespace std;

int main()
{
    scanf("%d%d", &n, &l);
    for (int i=1; i<n+1; ++i)
    {
        ++licz;
        tab[i].kol=i;
        scanf("%d%d", &pomv, &pomw);
        tab[i].vw=float(pomv)/pomw;
        BIN(tab[i].vw, licz);
    }
    //for (int i=n-l+1; i<n+1; ++i)
    for (int i=1; i<n+1; ++i)
    {
        printf("%d %d\n", tab[i].kol, tab[i].vw);
    }
    return 0;
}
