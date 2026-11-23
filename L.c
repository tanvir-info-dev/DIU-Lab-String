#include <stdio.h>
int main()
{
    char a[100000],b[100000];
    fgets(a,100000,stdin);
    for(int i=0,j=0 ; ; i++){
        if(a[i]=='\0'){
            break;
        }
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            b[j]=a[i];
            b[j+1]=a[i];
            j+=2;
        }
        else{
            b[j]=a[i];
            j++;
        }
    }
    printf("%s",b);

    return 0;
}