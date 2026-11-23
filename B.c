#include <stdio.h>
int main()
{
    char a[10000000];
    scanf("%s",&a);
    for(int i=1 ; i<=3 ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%s ",a);
        }
        printf("\n");
    }

    return 0;
}