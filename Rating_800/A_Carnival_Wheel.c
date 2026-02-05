#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int l, a, b, pos, max_p;
        scanf("%d%d%d", &l, &a, &b);
        pos = a;
        max_p = pos;

        while(1)
        {
            pos = (pos+(b))%l;
            if(pos > max_p)
            {
                max_p = pos;
                continue;
            }
            if(pos == a)
            {
                break;
            }
        }
        printf("%d\n", max_p);
    }
    return 0;
}
