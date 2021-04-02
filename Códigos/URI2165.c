#include <stdio.h>
#include <string.h>

int main()
{
    char a[501];
    gets(a);
    printf((strlen(a)>140)?"MUTE\n":"TWEET\n");
    return 0;
}