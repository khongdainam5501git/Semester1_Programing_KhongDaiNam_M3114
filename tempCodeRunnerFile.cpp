#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    if (1 <= x <= 8 && 1 <= y <= 8 && 1 <= p <= 8 && 1 <= q <= 8)
    {
        if (x == p)
        {
            printf("YES");
            exit(0);
        }
        if (y == q)
        {
            printf("YES");
            exit(0);
        }
        if (p - x == q - y)
        {
            printf("YES");
            exit(0);
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}