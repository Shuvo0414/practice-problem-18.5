#include <stdio.h>

/*
Print from 1 to N.
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input:
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output:
Print N lines according to the required above.

Example-->
Input:
5

Output:
1
2
3
4
5
*/

/*
Function:
printFun1ToN()

n -> total limit value
i -> current value that we print

Example:

n = 5
i starts from 1

i will increase:
1 → 2 → 3 → 4 → 5 → stop
*/
void printFun1ToN(int n, int i)
{

    /*
    Base case:

    When i becomes greater than n,
    recursion stops.

    Example:

    i = 6
    n = 5

    6 > 5 is true,
    so return.

    The lines below return
    will not execute.
    */
    if (i > n)
        return;

    /*
    Print current value.

    Every function call prints
    one number.
    */
    printf("%d\n", i);

    /*
    Recursive call:

    Increase i by 1.

    n remains the same because
    n is the fixed limit.

    Example:

    printFun1ToN(5,1)

    calls:

    printFun1ToN(5,2)

    then:

    printFun1ToN(5,3)
    */
    printFun1ToN(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    /*
    Start recursion.

    n -> limit
    1 -> starting point
    */
    printFun1ToN(n, 1);

    return 0;
}