#include<stdio.h>
int a[50],r = 0,z[50],zr,maxo = 0 ;

void push(int incoming, int mode){
    if(mode == 0 ){
    if(r<50){
    a[r] = incoming;
    r++;
    if(incoming > maxo){
        maxo = incoming;
    }
    push(maxo,1);
    }else{
        printf("Stack Overflow! \n");
        }
    }else{
    if(zr<50){
    z[zr] = incoming;
    zr++;
    }else{
        printf("Stack Overflow! \n");
        }
    }
}

void pop(){
    if(r > 0 && z > 0 ){
    a[r-1] = -9999;
    z[zr-1] = -9999;
    r--;
    zr--;
    }else{
        printf("Stack Underflow! \n");
    }

}
int main(){
int n, i,conti = 0 , selection;
printf("Your Initial Elements: \n");
scanf("%d",&n);
for(i = 0 ; i < n ; i++){
    int z;
    scanf("%d",&z);
    if(z > maxo){
        maxo = z;
    }
    push(z,0);
}
while(conti ==0 ){
    printf("Your Actual Stack: ");
    for(i = 0 ; i < r ; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Your Max Stack: ");
    for(i = 0 ; i <zr ; i++){
        printf("%d ",z[i]);
    }
    printf("\nYour Maximum Number: %d",z[zr-1]);
    printf("\n1.Push\n2.Pop\n3.Exit\n");
    scanf("%d",&selection);
    if(selection == 1){
        printf("Enter your number: \n");
        int fg;
        scanf("%d",&fg);
        push(fg,0);
    }else if(selection == 2){
        pop();
    }else if(selection == 3){
        conti =1;
    }

}


return 0;
}
