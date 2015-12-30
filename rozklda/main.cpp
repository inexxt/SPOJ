#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  unsigned long n;


     cout << n << " = ";

     int i = 2;

    while (i <= (unsigned long)sqrt((double)n))
    {

        while (!(n % i))
        {
            n /= i;
            cout << i << " x ";
        }
        if (n == 1) break;
        i++;
    }

     if (n > 1) cout << n;


   cout << endl << endl;
 return 0;
}
