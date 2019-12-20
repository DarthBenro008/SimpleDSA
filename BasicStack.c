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
int n , i , conti = 0  , selection;
printf("Max Size of this stack is 50 elements only. \n");
while(conti == 0){
    if(r == 0 ){
        printf("Your Stack is Empty!\n");
    }else{
        printf("Your Stack: ");
    }
    for(i = 0 ; i < r ; i ++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("\n1.Push\n2.Pop\n3.Exit\n");
    scanf("%d",&selection);
    if(selection == 1){
        int cz ;
        printf("Enter number to push: \n");
        scanf("%d",&cz);
        push(cz);
    }else if( selection == 2){
        pop();
    }else if(selection == 3){
        conti = 1;
    }

}

}
