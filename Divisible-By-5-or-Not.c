#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // Read the input number

    for (int i = 1; i <= N; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}
