#include <stdio.h>

int main (int argc, char *argv[])
{
    for (int i=1; i<=4; i++) {
        printf(" %d\t %s\n", i, "go beavers!");
    }

int i, j; 

i=1;
j=1;

while ((i+j)<=5)
{
    printf("%d\n", i);
    j++;
    i++;
}

i=1;
j=1;

do // do at least once.
{
    printf("%d\n", i);
    j++;
    i++;
} while ((i+j)<=5);

return 0;
}
