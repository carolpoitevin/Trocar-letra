#include <stdio.h>
#include <string.h>
#define N 20
int main (void)
{
    int p[N];
    int x;
    for(x = 0; x < N; x++)
        scanf("%s", p[x]);
    for(x = 0; x < N; x++)
        p[x] = p[x] + 1;
    for(x = 0; x < N; x++)
        printf("%s\n", p[x]);
    return 0;
}