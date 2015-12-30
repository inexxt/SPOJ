#include <stdio.h>
#include <set>
using namespace std;

int main()
{
    int n, pop=0, koniec;
    set <int> set;
    koniec=scanf("%d", &n);
    pop=n;
    set.insert(pop);
    while(koniec!=EOF)
    {
        koniec=scanf("%d", &n);
        pop=pop+n;

        if(set.find(pop)!=set.end())
        {
            printf("%d", pop);
            return 0;
        }
        else set.insert(pop);
    }

    return 0;
}
