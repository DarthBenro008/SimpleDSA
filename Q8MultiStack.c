#include<stdio.h>

int a[50],r = 0,z[50],zr=0;

void push(int incoming, int mode){
    if(mode == 0 ){
    if(r<50){
    a[r] = incoming;
    r++;
    }else{
        printf("Stack Overflow!");
    }
    }
    else{
     if(zr<50){
    z[zr] = incoming;
    zr++;
    }else{
        printf("Stack Overflow!");
    }


    }

}

void pop(){
    if(r > 0 ){
    a[r-1] = -9999;
    r--;
    }else{
        printf("Stack Underflow!");
    }

}

int main(){

int n , i ;
printf("Max capacity of original Stack: ");
scanf("%d",&n);
printf("Elements of Original Stack: \n" );
for (i = 0 ; i < n ; i ++){
    int asf;
    scanf("%d",asf);
    if(i%2==0){
        push(asf,0);
    }else{
        push(asf,1);
    }
}
printf("Stack 1: ");
for(i= 0 ; i < r;i++){
    printf("%d ",a[i]);
}
printf("\n");
for(i=0;i< zr;i++){

    printf("%d",z[i]);

}


return 0;
}
