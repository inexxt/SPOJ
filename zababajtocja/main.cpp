#include <stdio.h>

using namespace std;

int tab[1003][1003];
int wsp[1003][2];
bool odw[1003];
int n, max, dl, poz, pop;

void DFS (int i)
{
    if ( (odw[i]==0) && (tab[i][pop]<=dl) )
    {
        if ( max < (wsp[i][0]) * (tab[i][1]) ) max=wsp[i][0]*tab[i][1];
        odw[i]=1;
        pop=i;
        for (int j=0; j<n; j++)
        {
            DFS(tab[i][j]);
        }
    }
}

int main()
{

   scanf("%d%d%d", &n, &poz, &dl);
   for (int i=0; i<n; i++)
   {
       scanf("%d%d", &wsp[i][0], &wsp[i][1]);
   }
   pop=0;
   for (int i=0; i<n; i++)
   {
       if (odw[i]==0) DFS(i);
   }
   printf("%d", max);
   return 0;
}
