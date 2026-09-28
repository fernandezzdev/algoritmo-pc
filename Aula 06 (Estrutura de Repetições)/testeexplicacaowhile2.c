#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_CTYPE,"");

    int i=0;
    do {
        printf("%d", i);
        i++;
    while(i<=0)}

    return 0;
}
