#include <cstdio>

using namespace std;

int main()
{
    int i, koniec=1, j=0;

    while (koniec!=EOF)
    {
        koniec=scanf("%d", &i);
        j+=i;
        printf("%d\n", j);
    }
    return 0;
}
