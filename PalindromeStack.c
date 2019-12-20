#include<stdio.h>
#include<string.h>

char a[50],r;

int push(char incoming){
if(r<50){
a[r] = incoming;
r++;

}else{
printf("Stack Overflow!");
}
}

int pop(){
if(r>0){
a[r-1] = " ";
r--;
}else{
printf("Stack Underflow!");
}

}

int main(){
int n , i,checker = 1,j=0;
char f[50];
printf("Please enter your word in lowercase: \n");
scanf("%s",f);
n = strlen(f);
for(i = 0 ; i < n ;i++){
    char gh = f[i];
    push(gh);
}
/*for(i = 0 ; i<r  ;i++){
    printf("%c",a[i]);
}*/
printf("\n");
for(i=r-1;i>=0;i--){
    char fgh[10];
    char abc[10];
    fgh[0] = a[i];
    abc[0] = f[j];
    j++;
    //printf("%c %c\n",abc[0],fgh[0]);
    if(fgh[0]==abc[0]){
    checker = 0;
    }else{
    checker = 1;

    }
    pop();
}

if(checker == 0){
printf("The String is a Palindrome!");
}else{
printf("The String is not a Palindrome!");
}
return 0;
}
