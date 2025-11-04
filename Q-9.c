#include <stdio.h>

int main()
{
    int matrix[2][3][3] = {
        {

            {2, 3, 4},
            {3, 2, 1},
            {3, 4, 8}

        },

        {

            {3, 5, 4},
            {8, 4, 9},
            {5, 2, 7}

        }};
  

    // SUM

    int final[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            final[i][j] = matrix[0][i][j] + matrix[1][i][j];
        }
    }


    printf("Sum of two MATRIX ARE...\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
    }


    // FOR SUBSTRACTION
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            final[i][j] = matrix[0][i][j] - matrix[1][i][j];
        }
    }

    printf("Subtraction of TWO MATRIX ARE...\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
    }


    return 0;
    
}



