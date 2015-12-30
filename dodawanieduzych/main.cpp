#include <stdio.h>
using namespace std;

int i=0, i2=0, pom=0, j;
char tab[1003];
char tab2[1003];
int tab3[1003];

int main()
{

    int t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%s%s", &tab, &tab2);
        while (tab[i]!=NULL)
        {
            i++;
        }
        while (tab2[i2]!=NULL)
        {
            i2++;
        }
        if (i>=i2)
        {
            while (i+1)
            {
                if (i2<0) i2=48;
                tab3[j]=( int(tab[i]+48)+int(tab2[i2]+48) + pom ) % 10;
                pom=int(tab[i]+48)+int(tab2[i2]+48) - ( int(tab[i]+48)+int(tab2[i2]+48) ) % 10;
                i--;
                i2--;
                j++;
            }
        }
        else
        {
            while (i2+1)
            {
                if (i<0) i=1003;
                tab3[j]=( tab[i]+tab2[i2] + pom ) % 10;
                pom=tab[i]+tab2[i2] - ( tab[i]+tab2[i2] ) % 10;
                i--;
                i2--;
                j++;
            }
        }
        while(j+1)
        {
            printf("%d", tab3[j]);
            j--;
        }
    t--;
    }
    return 0;
}
