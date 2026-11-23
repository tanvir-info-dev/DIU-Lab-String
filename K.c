#include <stdio.h>
int main()
{
    char a[100000],b[100000];
    fgets(a,100000,stdin);
    for(int i=0,j=0 ; ; i++){
        if(a[i]=='\0'){
            break;
        }
        if(a[i]=='a'){
            b[j]='a';
            b[j+1]='a';
            j+=2;
        }
        else if(a[i]=='e'){
            b[j]='e';
            b[j+1]='e';
            j+=2;
        }
        else if(a[i]=='i'){
            b[j]='i';
            b[j+1]='i';
            j+=2;
        }
        else if(a[i]=='o'){
            b[j]='o';
            b[j+1]='o';
            j+=2;
        }
        else if(a[i]=='u'){
            b[j]='u';
            b[j+1]='u';
            j+=2;
        }
        else if(a[i]=='y'){
            b[j]='y';
            b[j+1]='y';
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