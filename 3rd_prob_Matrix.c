#include <stdio.h>
#include <stdlib.h>

/*
Matrix.

Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input:
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output:
Print the absolute difference between the summation of the matrix main diagonals.

Example-->
Input:
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6

Output:
22

*/

int main()
{
    int N;

    // Taking the size of the square matrix.
    scanf("%d", &N);

    // Creating N x N matrix.
    int a[N][N];

    /*
    Taking matrix input.

    i -> row index
    j -> column index

    Every element is stored as:
    a[row][column]
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Variables to store both diagonal sums.
    int mainDiagonal = 0;
    int secondDiagonal = 0;

    /*
    Finding primary and secondary diagonal.

    Primary diagonal condition:
    i == j

    Example for 3x3:

    a[0][0]
    a[1][1]
    a[2][2]


    Secondary diagonal condition:
    i + j == N - 1

    Example for 3x3:

    a[0][2]
    a[1][1]
    a[2][0]
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            // Checking primary diagonal elements.
            if (i == j)
            {
                mainDiagonal = a[i][j] + mainDiagonal;
            }

            // Checking secondary diagonal elements.
            if (i + j == N - 1)
            {
                secondDiagonal = a[i][j] + secondDiagonal;
            }
        }
    }

    /*
    Problem asks for absolute difference.

    Example:

    mainDiagonal = -4
    secondDiagonal = 18

    -4 - 18 = -22

    abs(-22) = 22

    So the final answer is always positive.
    */
    int finalResult = abs(mainDiagonal - secondDiagonal);

    // Printing the final absolute difference.
    printf("%d", finalResult);

    return 0;
}