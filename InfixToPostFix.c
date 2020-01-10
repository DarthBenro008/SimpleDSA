#include<stdio.h>
#include<string.h>

int a[50],r = 0,z[50];
void push(char incoming){
    if(r<50){
    a[r] = incoming;
    r++;
    }else{
        printf("Stack Overflow! \n");
    }

}
char pop(){
    char popped;
    if(r > 0 ){
    popped = a[r-1];
    a[r-1] = -9999;
    r--;
    return(popped);
    }else{
        printf("Stack Underflow! \n");
        exit(1);
    }

}

int bodmas(char symbol)
{
	if(symbol == '^')
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-') 
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int symbolcheck(char symbol){
    if(symbol == '+' ||symbol == '/' ||symbol == '*' ||symbol == '-' ){
        return 1;
    }else{return 0;}
}

int main(){
    char inf[100], posf[100],x,item;
    int i  = 0, j = 0;
    printf("Postfix Expression: \n");
    scanf("%s",inf);
    push(')');
    item = inf[i];
    while(item != '\0')        
	{
		if(item == '(')
		{
			push(item);
		}
		else if(symbolcheck(item) == 1)        
		{
			x=pop();
			while(symbolcheck(x) == 1 && bodmas(x)>= bodmas(item))
			{
				posf[j] = x;                  
				j++;
				x = pop();                       
			}
			push(x);
		

			push(item);           
		}
		else if(item == ')')      
		{
			x = pop();                   
			while(x != '(')               
			{
				posf[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{
		
			posf[j] = item;             
			j++;
		}
		i++;


		item = inf[i]; 
	} 

    posf[j] = '\0'; 
    puts(posf);

}
