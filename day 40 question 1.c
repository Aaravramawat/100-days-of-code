#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < rows + cols - 1; d++)
    {
        for(int i = 0; i < rows; i++)
        {
            int j = d - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}