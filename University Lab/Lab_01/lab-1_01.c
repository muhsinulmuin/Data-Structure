/* Practice Problem I
ID- 
B_2
*/

#include <stdio.h>


int main()
{
    int n, k, i, j, pos, val;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("How many elements do you want to insert?\n");
    scanf("%d", &k);

    int a[n + k];

    printf("Input %d elements:\n", n);


    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int t = 1; t <= k; t++)
    {
        printf("Insertion %d - enter position and value:\n", t);
        scanf("%d %d", &pos, &val);

        if (pos < 0 || pos > n)
            pos = n;

        for (j = n; j > pos; j--)
            a[j] = a[j - 1];

        a[pos] = val;
        n++;
    }

    printf("The present array is:\n");


    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
