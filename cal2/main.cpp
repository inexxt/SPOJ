#include <stdio.h>

using namespace std;
int tab[10];
int main()
{
    int t, n1, n2 ;
    char a;
    t=scanf("%c %d %d", &a, &n1, &n2);
    while(t!=EOF)
    {
        switch (a)
        {
        case 'z':
        tab[n1]=n2;
        printf("%d\n", tab[n1]);
        break;

        case '+' :
        printf("%lld\n", tab[n1]+tab[n2]);
        break;

        case '-':
        printf("-");
        printf("%d\n", (tab[n1]-tab[n2]));
        break;

        case '*':
        printf("%lld\n", tab[n1]*tab[n2]);
        break;

        case '/':
        printf("%llf\n", tab[n1]/tab[n2]);
        break;

        case '%':
        printf("%llf\n", tab[n1]%tab[n2]);
        break;
        }
        t=scanf("%c %d %d", &a, &n1, &n2);
    }

    return 0;
}
