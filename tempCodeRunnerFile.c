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

void printFun1ToN (int n, int i)
{
    if (i > n) return;// base case.
    printf("%d\n", i);

    printFun1ToN(n ,i+1);
    
    

}

int main ()
{
    int n;
    scanf("%d", &n);
    printFun1ToN(n, 1);
    return 0;
}