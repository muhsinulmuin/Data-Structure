/* Practice Problem 02
ID- 
B_2
*/

#include <stdio.h>


int main()
{
    int n, i, j, v;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int a[n + 1];

    printf("Input %d elements in ascending order:\n", n);


    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Insert array value:\n");
    scanf("%d", &v);


    i = 0;

    while (i < n && a[i] <= v)
        i++;


    for (j = n; j > i; j--)
        a[j] = a[j - 1];

    a[i] = v;
    n++;

    printf("The present array is:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
