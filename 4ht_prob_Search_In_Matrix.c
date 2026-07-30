#include <stdio.h>

/*
Search In Matrix.

Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

Input:
First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 10^5).

Last line contains a number X (0 ≤ X ≤ 10^5) described above.

Output:
Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

Examples:
Input:
2 2
1 2
3 4
3
Output:
will not take number

Input:
2 2
1 2
3 4
10

Output:
will take number

*/

int main()
{

    int N, M;

    // Taking number of rows and columns.
    scanf("%d %d", &N, &M);

    // Creating a 2D array of size N x M.
    int a[N][M];

    /*
    Taking matrix input.

    i -> row index
    j -> column index

    Every input is stored as:

    a[row][column]
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    /*
    Assume the number does not exist.

    flag = 1 -> Not Found
    flag = 0 -> Found
    */
    int flag = 1;

    /*
    Searching every element of the matrix.
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            // If the current element matches X.
            if (a[i][j] == X)
            {
                // Number found.
                flag = 0;

                // Stop checking the current row.
                break;
            }
        }

        /*
        If the number is already found,
        stop checking the remaining rows.

        This avoids unnecessary comparisons.
        */
        if (flag == 0)
        {
            break;
        }
    }

    /*
    Printing the final result.

    flag == 1
    ->
    Number was not found.

    flag == 0
    ->
    Number exists in the matrix.
    */
    if (flag == 1)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}