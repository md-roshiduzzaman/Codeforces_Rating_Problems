#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, temp;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int maxind = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[maxind])
            {
                maxind = i;
            }
        }

        if (arr[0] < arr[maxind])
        {
            temp = arr[0];
            arr[0] = arr[maxind];
            arr[maxind] = temp;
        }

        long long max = 0, sum = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            sum = sum + max;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
