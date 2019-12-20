#include<stdio.h>

int a[50],r = 0,z[50];

void push(int incoming){
    if(r<50){
    a[r] = incoming;
    r++;
    }else{
        printf("Stack Overflow!");
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
int n, i,selection , conti = 0;
printf("Initial Elements Length: \n");
scanf("%d",&n);
printf("Please enter your initial elements: ");
for(i = 0; i<n;i++){
    int z;
    scanf("%d",&z);
    push(z);
}

while(conti == 0 ){
    printf("Your Stack: ");
    for(i = 0; i<r;i++){
    printf("%d ",a[i]);
}
    printf("\n");
    printf("1.Push\n2.Pop\n3.Wipe Top\n4.Even Pop\n5.Exit\n");
    scanf("%d",&selection);
    if(selection == 1){
        int cz;
        printf("Please Enter your number: \n");
        scanf("%d",&cz);
        push(cz);
    }else
    if(selection==2){
        pop();
    }else
    if(selection == 3){
        printf("Enter Your Index to Wipe: \n");
        int cx;
        scanf("%d",&cx);
        if(cx<r){
        while(r>cx){
            pop();
        }
        }else{printf("Please Enter a number lesser than stack storage!\n");}
    }else
    if(selection == 4){
        for(i =1;i<r;i= i+2){
            a[i] = -9999;
        }
        printf("Elements with -9999 are popped elements and are not there!\n");
    }else
    if(selection == 5){
        conti = 1;
    }
}

return 0;
}
