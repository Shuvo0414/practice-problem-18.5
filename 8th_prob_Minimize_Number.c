#include <stdio.h>

/*
Minimize Number.

Given a number N and an array A of N positive numbers.
Print the maximum possible operations that can be performed.

Operation:
- If all numbers are even, divide every number by 2.
- If at least one number is odd, we cannot perform any more operations.

Example:
8 12 40

Operation 1:
4 6 20

Operation 2:
2 3 10

Now 3 is odd, so stop.

Answer = 2
*/

int main()
{
    int N;

    // Take the size of the array
    scanf("%d", &N);

    int A[N];

    // Take array elements as input
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // This variable stores how many successful divisions happened
    int count = 0;

    /*
    We don't know how many times the operation will repeat.
    So we keep trying until we find an odd number.
    */
    while (1)
    {
        /*
        flag = 1 means:
        "Currently, I assume all numbers are even."

        If we find any odd number,
        we change flag to 0.
        */
        int flag = 1;

        // Check every element of the array
        for (int i = 0; i < N; i++)
        {
            // If any number is odd, operation cannot continue
            if (A[i] % 2 != 0)
            {
                flag = 0;
                break; // No need to check remaining numbers
            }
        }

        /*
        If flag becomes 0,
        it means at least one number is odd.
        Therefore, we stop the while loop.
        */
        if (flag == 0)
        {
            break;
        }

        /*
        If we reach here,
        all numbers are even.

        Now perform one operation:
        Divide every element by 2.
        */
        for (int i = 0; i < N; i++)
        {
            A[i] = A[i] / 2;
        }

        // One complete operation is finished
        count++;
    }

    // Print total number of possible operations
    printf("%d", count);

    return 0;
}