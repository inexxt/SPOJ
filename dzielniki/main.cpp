#include <stdio.h>
#include <set>
#include <cmath>

using namespace std;

set <int> wyn;
set <int>::iterator it;

int main()
{
    int a, x;
    scanf("%d", &a);
    for (int i=1; i<sqrt(a); i++)
    {
        if (a%i==0)
        {
           wyn.insert(i);
           wyn.insert(a/i);
        }
    }
    x=sqrt(a);
    if (a%x==0) wyn.insert(x);
    for( it=wyn.begin(); it!=wyn.end(); it++) printf("%d\n", *it);
    return 0;
}
