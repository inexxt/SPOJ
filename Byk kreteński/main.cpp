#include <stdio.h>

using namespace std;

int main()
{
    int n;
    float t, a, sV=0, ss=0, Vp=0;;
    scanf("%d", &n);
    while (n)
    {
        scanf("%f %f", &a, &t);
        ss=Vp*t+a*t*t/2+ss;
        sV=sV+a*t;
        Vp=Vp+a*t;
        n--;
    }
    printf("%.2f %.2f\n", sV, ss);
    return 0;
}
