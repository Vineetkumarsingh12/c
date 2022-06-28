#include <stdio.h>
int main()
{
    int n, j, count = 0;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[n], i, c, arrp[n];
    printf("enter the element of the array");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("the frequency of number is");
    for (i = 0; i < n; i++)
        if (arr[i] == -1 && count == 0)
            for (j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                }
            }
            if(count!=0)
                    printf("\n-1 stand %d\n", count);
    for (i = 0; i < n; i++)
    {
        c = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    arr[j] = -1;
                }
            }
            arrp[i] = c;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            printf("\n%d stand : %d", arr[i], arrp[i]);
        }
    }
    return 0;
}