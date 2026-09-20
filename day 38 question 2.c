#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    // A symmetric matrix must be square
    if(r != c)
    {
        printf("False");
        return 0;
    }

    // Input matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0)
            break;
    }

    if(symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}