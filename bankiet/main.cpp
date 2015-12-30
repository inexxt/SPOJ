#include <stdio.h>

using namespace std;

int tab[300004];
bool odw[300004];

void DFS ( int i)
{
    if (odw[i]==0)
    {
         odw[i]=1;
         DFS(tab[i]);
    }
}


int main()
{
   int n, licz=0;
   scanf("%d", &n);
   for (int i=1; i<n+1; i++)
   {
       scanf("%d", &tab[i]);
   }
   for (int i=1; i<n+1; i++)
   {
       if (odw[i]==0)
       {
        DFS(i);
        licz++;
       }
   }
   printf("%d\n", licz);

   return 0;
}
