
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
    int b,i,j,checker = 0, pos = 0;
    printf("Your Elements: \n");
    scanf("%d",&b);
    for(i = 0 ; i <b;i++){
        int randomnum;
        scanf("%d",&randomnum);
        push(randomnum);
    }

    for(i = 0 ; i < b; i ++){
        checker = 0;
        //printf("%d \n",a[i]);
        for(j = i+1; j<b;j++){
            if(a[i]==a[j] && a[j] != -999){
                //printf("%d %d \n",a[i],a[j]);
                checker = 1;
                a[j] = -999;

            }
        }
        if(checker == 1){
            a[i] = -999;
        }
    }
    for(i = 0; i < b ;i++){
        if(a[i] != -999){
            z[i] = a[i];
            pos++;
        }

    }
    for(i = 0; i < pos ; i++){
        printf("%d \n",z[i]);

    }
    //printf("%d",pos);
    return 0;
}
