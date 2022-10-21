#include<stdio.h>
#include<string.h>
int main(){
    int a;
    char s[1000];
    scanf("%d" ,&a);
    int i;
    for( i=1;i<=a;i++){
        scanf("\n%[^\n]s" ,&s);
        printf("Case #%d: ",i);
        int p;
        for( p=strlen(s)-1;p>=0;p--){
            printf("%c" ,s[p]);
        }
        printf("\n");
    }
}
