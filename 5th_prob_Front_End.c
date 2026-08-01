#include <stdio.h>

/*
Front - End
time limit per test1 second
memory limit per test256 megabytes
You are given an array 𝑎 of 𝑛 integers, your task is to print the first (front) element then remove it, then print the last(end) element then remove it, and so on until the array becomes empty.

Input:
The first line contains an integer 𝑛(1≤𝑛≤10^5)
 the number of elements in the array 𝑎

The second line contains 𝑛
 integers 𝑎𝑖(−10^9≤𝑎𝑖≤10^9)
 the elements of the array 𝑎
.

Output:
Print the array 𝑎
 with the required order.

Example:
Input:
5
1 2 3 4 5
Output:
1 5 2 4 3

*/

int main()
{
    int n;
    scanf("%d", &n);

    // Taking array input
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    Two pointer approach:

    front -> points to the front element (starting from index 0)
    end -> points to the end element (starting from index n-1)

    We don't actually remove elements.
    We only move the indexes.
    */
    int front = 0;
    int end = n - 1;

    /*
    count keeps track of the turn.

    Even turn  -> print front element
    Odd turn   -> print end element
    */
    int count = 0;

    /*
    Continue until both pointers cross.

    front <= end means there are still elements left to print.
    */
    while (front <= end)
    {
        if (count % 2 == 0)
        {
            // Print front element and move front pointer forward
            printf("%d ", a[front]);
            front++;
        }
        else
        {
            // Print end element and move end pointer backward
            printf("%d ", a[end]);
            end--;
        }

        // Move to the next turn
        count++;
    }

    return 0;
}