#include<stdio.h>

int a[50],r = 0,z[50];

void push(int incoming){
    if(r<50){
    a[r] = incoming;
    r++;
    }else{
        printf("Stack Overflow! \n");
    }

}

void pop(){
    if(r > 0 ){
    a[r-1] = -9999;
    r--;
    }else{
        printf("Stack Underflow! \n");
    }

}

int main(){
    int i , d ,z = 0;
    printf("Please Enter your number: \n");
    scanf("%d",&d);
    while(d>=1){
        i = d%2;
        d = d/2;
        push(i);
        z++;
        //printf("hello \n");
    }
    int o = (z-1)/4;
    int bits = (o+1)*4;
    for(i = bits-1 ; i >= 0 ; i--){
        printf("%d",a[i]);
    }
    return 0;
}