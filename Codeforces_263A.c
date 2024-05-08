    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int arr[5][5];
        int row, col;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &arr[i][j]);
                if (arr[i][j] == 1)
                {
                    row = i+1;
                    col = j+1;
                }
            }
        }
        printf("%d", abs(row - 3) + abs(col - 3));
        return 0;
    }
