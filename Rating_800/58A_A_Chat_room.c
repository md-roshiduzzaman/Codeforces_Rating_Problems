#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);

    char w[6] = "hello";
    int j = 0;

    for(int i=0; i<len; i++)
    {
        if(s[i] == w[j])
        {
            j++;
        }
        if(j == 5)
        {
            break;
        }
    }

    if(j == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
