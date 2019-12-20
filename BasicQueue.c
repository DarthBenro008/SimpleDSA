#include<stdio.h>
int a[50] , s = 0 , e = 0;

void enq(int incoming){
int i ;
int dummy = a[0];
for( i = 0 ; i < e ; i++){
    int dummy2;
    dummy2 = a[i+1];
    a[i+1] = dummy;
    dummy = dummy2;
}
a[0] = incoming;
}
void dq(){
 if(e > 0 ){
    a[e-1] = -9999;
    e--;
     printf("Dequeue Successfull!  \n");
    }else{
        printf("Nothing to dequeue! \n");
    }


}
int main(){
int n , j, selection , conti = 0;
printf("You can queue upto Maximum of 50 elements only in this program \n");
while(conti == 0){
    if(e == 0){printf("Your Queue is Empty!");}
    else{
        printf("Your Queue is: ");
        for(j =0; j < e; j++){
            printf("%d ",a[j]);
        }
    }
    printf("\n");
    printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
    scanf("%d",&selection);
    if(selection == 1){
        e++;
        int cz;
        printf("Please Input the Number you want to queue: \n");
        scanf("%d",&cz);
        enq(cz);
    }else if(selection == 2){
        dq();
    }else if(selection == 3){
        conti = 1;
    }

}

return 0;
}
