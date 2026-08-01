#include <stdio.h>

/*
Summation.

Given a number N and an array A of N numbers. Print the summation of the array elements.

Note: Solve this problem using recursion.

Input:
First line contains a number N (1 ≤ N ≤ 10^3) number of elements.

Second line contains N numbers ( - 10^9 ≤ Ai ≤ 10^9).

Output:
Print the summation of the N numbers.

Examples -->
Input:
4
1 4 2 7
Output:
14
Input:
4
5 5 5 5
Output:
20

*/

void Summation(int n, int a[], int sum, int i)
{
    // Base case:
    // When all array elements have been processed,
    // print the final summation and stop recursion.
    if (i == n)
    {
        printf("%d", sum);
        return;
    }

    // Add the current array element to the running sum.
    sum = a[i] + sum;

    // Recursive call:
    // Move to the next array index.
    Summation(n, a, sum, i + 1);
}

int main()
{
    // Taking the number of array elements.
    int N;
    scanf("%d", &N);

    // Declaring the array and taking input.
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Initial summation value starts from 0.
    int sum = 0;

    // Calling the recursive function from index 0.
    Summation(N, A, sum, 0);

    return 0;
}