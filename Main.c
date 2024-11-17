
#include <stdio.h>
int gcd(int a, int b)
{
    int t;
    while (b!= 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    int a, b, x;
    scanf("%d/%d", &a, &b);
    x = gcd(a, b);
    printf("%d/%d\n", a / x, b / x);
    return 0;
}


