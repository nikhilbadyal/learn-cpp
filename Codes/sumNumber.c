#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head,*head1,*temp,*summ,*mult;
int carry=0;
typedef struct node Node;
struct node* create_list(struct node* head)
{
    int num,i;
    while(i)
    {
        printf("Enter data.\n");
        scanf("%d",&num);
        if(head==NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = num;
            head->next = NULL; // nexts the address field to NULL
            temp = head;
        }
        else{struct node* temp1 = (struct node *)malloc(sizeof(struct node));
        temp1->data = num;      // nexts the num field of fnNode with num
        temp1->next = NULL; // nexts the address field of fnNode with NULL

        temp->next = temp1; // nexts previous node i.e. tmp to the fnNode
        temp = temp->next;
        }
        printf("Enter 1 to enter more.\n");
        scanf("%d",&i);
    }

    return head;
}
struct node* insert_front(struct node* head,int x)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
//	*(temp).data = x;
    temp->data = x;
    temp->next = NULL;
  //  temp->next = head;
//	*(temp).next = NULL;
	if(head!=NULL) temp->next = head;
	head = temp;
//  temp-> = x;
    return head;
}
void print_same(struct node* head)
{
	struct node *temp = head;
	printf("List is :\n");
	while(temp!=NULL)
	{
		printf("  %d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void size(struct node* head)
{
    int i =0;
    while(head!=NULL)
	{
	    head = head->next;
		i++;
	}
	printf("%d",i);
}
struct node*  reverse_sum(struct node* head, struct node* head1)
   {
	if(head==NULL) return;
	reverse_sum(head->next, head1->next);
	int sum = head1->data + head->data+carry;
	carry = sum/10;
	sum = sum%10;
	summ = insert_front(summ,sum);


	return summ ;
    }
long multiplyTwoLists (struct node* first, struct node* second)
{
    int num1 = 0, num2 = 0;

    // Generate numbers from linked lists
    while (first || second)
    {
        if (first)
        {
            num1 = num1*10 + first->data;
            first = first->next;
        }
        if (second)
        {
            num2 = num2*10 + second->data;
            second = second->next;
        }
    }

    // Return multiplication of
    // two numbers
    return num1*num2;
}
typedef struct Number node;
int main()
{
    head = create_list(head);
   // head1 = create_list(head1);
  //  summ = reverse_sum(head,head);
  //  printf("%d",carry);
  //  summ = insert_front(summ,carry);
    long sum = multiplyTwoLists(head,head);
    printf("%ld",sum);
  //  print_same(summ);

}
