#include <stdio.h>
using namespace std;

int tab[10][4];

int main()
{


    int t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d%d", &a, &b);
        printf("%d", tab[a%10][b%4]);

    }
    return 0;
}
