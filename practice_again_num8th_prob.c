#include <stdio.h>

/*
Minimize Number-->

Given a number N and an array A of N positive numbers. Print maximum possible operations that can be performed.

The operation is as follows: if all numbers are even then divide each of them by 2 otherwise, you can not perform any more operations.

Input
First line contains a number N (1 ≤ N ≤ 200) number of elements.

Second line contains N numbers (1  ≤  Ai  ≤  10^9).

Output:
Print the maximum possible number of operations that can be performed.

Examples:
Input:
3
8 12 40
Output:
2

Input:
4
5 6 8 10
Output:
0

Note-->
First example:

Initially, [8,12,40] are written on the blackboard. Since all those integers are even, You can perform the operation.

After the operation is performed once, [4,6,20] are written on the blackboard. Since all those integers are again even, You can perform the operation.

After the operation is performed twice, [2,3,10] are written on the blackboard. Now, there is an odd number 3 on the blackboard, so you cannot perform the operation any more.

Thus, you can perform the operation at most twice.

Second example:

Since there is an odd number 5 on the blackboard already in the beginning, You cannot perform the operation at all.
*/

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int count = 0;

    while (1)
    {
        int flag = 1;

        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
        for (int i = 0; i < N; i++)
        {
            A[i] = A[i] / 2;
        }

        count++;
    }

    printf("%d", count);

    return 0;
}