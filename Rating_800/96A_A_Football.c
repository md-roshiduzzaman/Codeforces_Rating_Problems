#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);

    int count1 = 0, count0 = 0;
    int max_count1 = 0, max_count0 = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            count0++;
            if (count0 > max_count0)
            {
                max_count0 = count0;
            }
        }
        else
        {
            count0 = 0;
        }

        if (s[i] == '1')
        {
            count1++;
            if (count1 > max_count1)
            {
                max_count1 = count1;
            }
        }
        else
        {
            count1 = 0;
        }
    }

    if (max_count0 >= 7 || max_count1 >= 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
