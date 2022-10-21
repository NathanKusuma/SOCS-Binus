#include <stdio.h>
int main(){
    int B;
    unsigned long long int x,y,Y,a,A,X;
    scanf ("%d" ,&B);
    
    for (int i=1;i<=B;i++){
        y=0;
        Y=0;
        scanf("%llu" ,&x);
        for(int j=1;j<=x;j++){
            scanf("%llu" ,&X);
            if(j%2 == 0){
                y+=X;
            } 
            else if (j%2 != 0){
                Y +=X;
            }
        }    
        if(Y>y){
            A=Y;
            Y=y;
            y=A;
        }
        a =y-Y;
        printf("Case #%d: %llu\n" ,i,a);
    }
    return 0;
}
