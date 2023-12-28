// Tower Of Hanoi
#include <stdio.h>

int main()
{
    int n;
    void towers(int n, char from, char to, char aux);
    printf("\n\t\t Tower Of Hanoi");
    printf("\n\n enter the number of disks=");
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
    return;
}

void towers(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("\n move disk 1 from %c peg to %c peg", from, to);
        return;
    }
    towers(n - 1, from, aux, to);
    printf("\n move disk %d from %c peg to %c peg", n, from, to);
    towers(n - 1, aux, to, from);
}
