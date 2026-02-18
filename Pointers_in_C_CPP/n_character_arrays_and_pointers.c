#include <stdio.h>

int main()
{
    char C[10];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0'; //Without this there can be dump characters after string
    printf("%s",C);

}