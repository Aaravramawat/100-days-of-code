#include <stdio.h>

int main()
{
    int a[10][10];
    int n, distinct = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
            }
        }
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}