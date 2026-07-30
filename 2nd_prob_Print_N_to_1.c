#include <stdio.h>

/*
Print from N to 1.
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input:
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output:
Print from N to 1 separated by a single space.

Example-->
Input:
4
Output:
4 3 2 1

Note: Make sure don't print any leading or trailing spaces.

*/

/*
Function:
PrintFunNto1()

Parameters:

n -> limit value (the last number we need to print)
i -> current value

Example:

n = 4

i will start from 1:

1 → 2 → 3 → 4 → stop

But printing happens after recursion,
so output becomes:

4 3 2 1
*/
void PrintFunNto1(int n, int i)
{

    /*
    Base case:

    When i becomes greater than n,
    stop creating new recursive calls.

    Example:

    i = 5
    n = 4

    5 > 4 is true,
    so return.

    The printf line below will not run
    for this call.
    */
    if (i > n)
        return;

    /*
    Recursive call:

    Increase i by 1.

    We first go deeper into recursion.

    Example:

    PrintFunNto1(4,1)

    calls:

    PrintFunNto1(4,2)

    calls:

    PrintFunNto1(4,3)

    calls:

    PrintFunNto1(4,4)

    calls:

    PrintFunNto1(4,5)

    Then recursion starts returning.
    */
    PrintFunNto1(n, i + 1);

    /*
    Printing happens after the recursive call.

    That means printing occurs while
    the function is returning back.

    Return order:

    i = 4 → print 4
    i = 3 → print 3
    i = 2 → print 2
    i = 1 → print 1

    So output:

    4 3 2 1
    */
    printf("%d ", i);
}

int main()
{
    int N;

    // Taking input value.
    scanf("%d", &N);

    /*
    Start recursion.

    N -> limit
    1 -> starting value

    Example:

    PrintFunNto1(4,1)
    */
    PrintFunNto1(N, 1);

    return 0;
}