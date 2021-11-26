#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    if ((1 <= x) && (x <= 8) && (1 <= y) && (y <= 8) && (1 <= p) && (p <= 8) && (1 <= q) && (q <= 8))
    {
        if (x == p)
        {
            if ((x == p) && (y == q))
            {
                exit(0);
            }
            else
            {
                printf("YES");
                exit(0);
            }
        }
        if (y == q)
        {
            if ((x == p) && (y == q))
            {
                exit(0);
            }
            else
            {
                printf("YES");
                exit(0);
            }
        }
        if ((p == x) && (q = y))
        {
            exit(0);
        }
        if (abs(p - x) == abs(q - y))
        {
            printf("YES");
            exit(0);
        }
        else
        {
            printf("NO");
        }
    }
    else exit(0);

}