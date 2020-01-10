#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{

    int num;
    struct node *ptr;
};
typedef struct node NODE;
NODE *head, *first, *temp = 0, *xop = 0;
void insert()
{

    int count = 0;

    int selection = 1;

    first = 0;

    while (selection)

    {

        head = (NODE *)malloc(sizeof(NODE));

        printf("Enter the data item\n");

        scanf("%d", &head->num);

        if (first != 0)

        {

            temp->ptr = head;

            temp = head;
        }

        else

        {

            first = temp = head;
        }
        xop = temp;
        xop->ptr = 0;
        xop = first;
        printf("\n Your Linked List is: \n");
        count = 0;
        printf("START--> ");
        while (xop != 0)

        {

            printf("%d -->", xop->num);

            count++;

            xop = xop->ptr;
        }

        printf("END\n");

        printf("No. of nodes in the list = %d\n", count);

        printf("Do you want to continue Inserting (Type 1 or 0)?\n");

        scanf("%d", &selection);
    }
}

int search(struct node *head, int x)
{
    struct node *current = head;
    while (current != NULL)
    {
        if (current->num == x)
            return 1;
        current = current->ptr;
    }
    return 0;
}

void reverse(struct node* head) 
{  
    if (head == NULL) 
       return; 

    reverse(head->ptr); 
    printf("%d  ", head->num); 
} 
int main()
{
    insert();
    int checker = 1;
    while (checker != 0)
    {
        printf("\nPlease Select Your option:\n1.Search\n2.Reverse Print\n3.Exit\n");
        int sel;
        scanf("%d", &sel);
        if (sel == 1)
        {
            printf("Please Enter to check if number is there: \n");
            int ser;
            scanf("%d", &ser);
            xop = temp;
            xop->ptr = 0;
            xop = first;
            search(xop, ser) ? printf("Yes") : printf("No");
        }
        if (sel == 2)
        {
            xop = temp;
            xop->ptr = 0;
            xop = first;
            reverse(xop);
        }
        if(sel ==3){checker = 0;}
        
    }
    return 0;
}