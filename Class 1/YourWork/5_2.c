#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a - b;
    if (c>0)
        printf("sum is positive\n");
    else if (c<0)
        printf("sum is negetive\n");
    else if (c==0)
        printf("sum is Zero\n");
            return 0;
}

