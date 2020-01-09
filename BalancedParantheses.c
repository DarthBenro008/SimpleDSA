#include<stdio.h>
#include<string.h>

int a[50],r = 0,z[50],neg = 999999;
char popped;

void push(char incoming){
    if(r<50){
    a[r] = incoming;
    r++;
    }else{
        printf("Stack Overflow! \n");
    }

}

void pop(){
    if(r > 0 ){
    popped = a[r-1];
    a[r-1] = -9999;
    r--;
    }else{
        //printf("Stack Underflow! \n");
        neg = -1;
    }

}

int main(){
char in[50];
int i = 0 , checker = 0;
scanf("%s",in);
int k = strlen(in);
for( i = 0 ; i < k ; i++){
    if(in[i]=='{' || in[i]=='[' || in[i]=='('){
        push(in[i]);
        //printf("Putting in stack: %c\n", in[i]);
    }
    if(in[i]=='}' || in[i]==']' || in[i]==')'){
        pop();
        //printf("Popped! %c\n",popped);
        switch(in[i]){
            case '}' : if(popped == '{') checker = 0; else checker =1;
            break;
            case ']' : if(popped == '[') checker = 0; else checker =1;
            break;
            case ')' : if(popped == '(') checker = 0; else checker =1; //printf("pritning checker %d\n",checker);
            break;
        
        }
    }
    if(checker != 0){
        //printf("Hello!");
        break;
    }
}
pop();
if(neg != -1){
    checker = 1;
}
if(checker == 0){
    printf("Balanced");
}else{
    printf("Not Balanced!");
}


}
