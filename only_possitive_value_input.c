#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        while (A[i] <= 0)
        {
            printf("Enter a positive number: ");
            scanf("%d", &A[i]);
        }
    }

    // Print the array after all values are positive
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    
    
    return 0;
}