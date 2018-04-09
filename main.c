#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char mot[6];
    scanf("%c", mot);
    for(i=0; i<=6; i++) {
        printf("%s", mot[i]);
    }
    return 0;
}
