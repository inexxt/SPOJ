// literki.cpp : Defines the entry point for the console application.
//
#include <cstdio>

using namespace std;

char pom;
int pom2;

//char j[2][1000*1000+6];

//char m[1000*1000+6];

char j[2][8];
char m[8];

int n, licz, k, p, q=1, poz;

bool war;

int main()
{
    scanf("%d", &n);
	scanf("%d", &pom);
    for (int i=0; i<n; i++) scanf("%c", &j[0][i]);
	scanf("%d", &pom);
    for (int i=0; i<n; i++) scanf("%c", &m[i]);

    for (int i=n-1; i>=0; i--)
    {
        for (int k=i; k>=0; k--)
        {
            if (m[i]==j[p][k] && war==0)
            {
                j[q][n-1-(n-1-i)]=j[p][k];
                war=1;
                poz=k;
            }
			else
			{
				if (war==0) j[q][k-1]=j[p][k];
				else j[q][k]=j[p][k];
			}
        }

        pom2=p;
        p=q;
        q=pom2;
		war=0;
        licz=licz+(i-poz);
    }
    printf("%d", licz);
    return 0;
}

