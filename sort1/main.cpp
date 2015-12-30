#include <cstdio>
#include <cmath>

using namespace std;
int tab[10];
int main()
{
    struct wsp
    {
        char a[10];
        int x, y;
    };

    int t, n;
    double pom;
    scanf("%d", &t);
    while(t)
    {
        scanf("%d", &n);
        wsp tab[n];
        while(n)
        {
            scanf("%s %d %d", &tab[n].a, tab[n].x, tab[n].y);
            pom=sqrt(tab[n].x*tab[n].x+tab[n].y*tab[n].y);
            /////////Wyszukiwanie binarne do znalezienia odpowiedniego miejsca na to
        }
        t--;
    }

    return 0;
}
