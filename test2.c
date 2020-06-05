#include <stdio.h>
 
int main(){
    int a=3;
    while(1){
        printf("%d\n",a);
        if(a==1)
            break;
        if(a%2==0)
            a=a/2;
        else if(a%2!=0)
            a=3*a+1;
    }
}
