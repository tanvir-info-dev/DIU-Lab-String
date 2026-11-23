#include <stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    fgets(a,100000,stdin);
    int len=strlen(a);
    printf("%s",a);
    printf("%d",len-1);

    return 0;
}