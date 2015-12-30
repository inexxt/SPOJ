#include <stdio.h>
using namespace std;

int main()
{
    int i=0, licz=1;
    char tab[202], pom;
    int t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%s", &tab);
        pom=tab[0];
        while (tab[i]!=NULL)
        {
            i++;
            if (pom==tab[i]) licz++;
            else
            {
                if (licz==1) printf("%c", pom);
                if (licz==2) printf("%c%c", pom, pom);
                if (licz>2) printf("%c%d%", pom, licz);
                pom=tab[i];
                licz=1;
            }
        }
        printf("\n");
        i=0;
        while (tab[i]!=NULL)
        {
            tab[i]=NULL;
            i++;
        }
        licz=1;
        i=0;
        t--;
    }
    return 0;
}
