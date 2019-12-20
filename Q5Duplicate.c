#include<stdio.h>
int a[50],r = 0,z[50],zr = 0;

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
    int n,i,checker = 0,j;
    printf("No of elements: ");
    scanf("%d",&n);
    for(i = 0; i < n ; i++){
        int z;
        scanf("%d",&z);
        push(z,0);
    }
for(i = 0; i < n ; i ++){
    checker = 0;
    for(j =i+1 ; j < n ; j++){
        if(a[i] == a[j]){
            a[j] = -999;
            checker = 1;
        }
    }
    if(checker == 1){
        a[i] = -999;
    }


}
for(i = 0;i < n ;i++){
    if(a[i] != -999){
        push(a[i],1);
    }

}
printf("\nFinal ans: \n");
    for(i = 0; i < zr ; i++){
        printf("%d ",z[i]);
    }

return 0;
}
