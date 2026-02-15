#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int count=0, count_neg=0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] == -1)
            {
                count_neg++;
            }
            if(arr[i] == 0)
            {
                count++;
            }
        }
        if(count_neg % 2 != 0)
        {
            count+=2;
        }

        printf("%d\n", count);
    }

    return 0;
}
