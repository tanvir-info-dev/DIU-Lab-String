#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000000];
    while(scanf("%s",&a)!=EOF){
        int len=strlen(a);
        printf("%d ",len);
    }

    return 0;
}