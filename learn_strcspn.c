#include <stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    scanf("%s",&a);
    int pos= strcspn(a,"l");
    printf("%d",pos);

    return 0;
}