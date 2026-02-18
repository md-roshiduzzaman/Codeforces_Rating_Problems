#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, s, x, req;
        scanf("%d%d%d", &n, &s, &x);
        int arr[n];
        int sum = 0;
        
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        req = s - sum;

        if(req % x == 0 && req >= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
