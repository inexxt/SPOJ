#include <stdio.h>


using namespace std;

int tabn[1000][1000][2], n, l, r, s, rx, ry;

int liczenie (int l, int rx, int ry)
{
    if (l-1==0)
    {
        if (tabn[rx][ry][2]!=1)
        {
            tabn[rx][ry][2]=1;
            s+=tabn[rx][ry][1];
        }

        if (tabn[rx+1][ry][2]!=1)
        {
            tabn[rx+1][ry][2]=1;
            s+=tabn[rx+1][ry][1];
        }

        if (tabn[rx-1][ry][2]!=1)
        {
            tabn[rx-1][ry][2]=1;
            s+=tabn[rx-1][ry][1];
        }

        if (tabn[rx][ry+1][2]!=1)
        {
            tabn[rx][ry+1][2]=1;
            s+=tabn[rx][ry+1][1];
        }

        if (tabn[rx][ry-1][2]!=1)
        {
            tabn[rx][ry-1][2]=1;
            s+=tabn[rx][ry-1][1];
        }
        return s;
    }
    else
    {
        if (tabn[rx][ry][1]!=2) s+=tabn[rx][ry][1];
        return(liczenie(l-1, rx, ry-1)+
               liczenie(l-1, rx+1, ry)+
               liczenie(l-1, rx, ry+1)+
               liczenie(l-1, rx-1, ry)+s);
    }
}

int main()
{
    scanf("%d %d", &n, &r);
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++) scanf("%d", &tabn[i,j]);
    }
    for (int i=0; i<r; i++)
    {
        scanf("%d %d %d", &rx, &ry, &l);
        printf("%d\n", liczenie(l, rx, ry));
    }
    return 0;
}
