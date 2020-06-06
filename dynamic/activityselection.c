#include <stdio.h>
int main()
{
    int start[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int finish[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int activities = sizeof(start) / sizeof(start[0]);
    int i, j;
    printf("Following activities are selected \t");
    i = 0;
    printf("%d\t", i);
    for (j = 1; j < activities; j++)
    {
        if (start[j] >= finish[i])
        {
            printf("%d ", j);
            i = j;
        }
    }
    return 0;
}