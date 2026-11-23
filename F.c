#include <stdio.h>
int main()
{
    char a[100000],c;
    int count=0;
    fgets(a,100000,stdin);
    scanf("%c",&c);
    for(int i=0 ; ; i++){
        if(a[i]==c || a[i]==c-32){
            count++;
        }
        if(a[i]=='\0'){
            break;
        }
    }
    printf("%d",count);

    return 0;
}