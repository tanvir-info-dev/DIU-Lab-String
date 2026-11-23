#include <stdio.h>
int main()
{
    char a[10000000];
    fgets(a,10000000,stdin);
    for(int i=0 ; ; i++){
        if(a[i]=='\0'){
            printf("%c",a[i-2]);
            break;
        }
    }

    return 0;
}