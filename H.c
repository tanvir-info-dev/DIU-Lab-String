#include <stdio.h>
int main()
{
    char a[10000000];
    fgets(a,10000000,stdin);
    for(int i=0 ; ; i++){
        if(a[i]=='\0'){
            break;
        }
        else if(a[i]==' ' && a[i+1]!=' '){
            a[i+1]=a[i+1]-32;
        }
    }
    if(a[0]!=' '){
        a[0]=a[0]-32;
    }
    printf("%s",a);

    return 0;
}