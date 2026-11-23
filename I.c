#include <stdio.h>
int main()
{
    char a[10000000],b[10000000];
    fgets(a,10000000,stdin);
    for(int i=0,j=0 ; ; ){
        if(a[i]=='\0'){
            break;
        }
        if(a[i]=='a' && a[i+1]=='b'){
            b[j]='u';
            b[j+1]='p';
            b[j+2]='s';
            j+=3;
            i+=2;
        }
        else{
            b[j]=a[i];
            i++;
            j++;
        }
    }
    printf("%s",b);

    return 0;
}