#include<stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printar(struct node *start){
	printf("New Stack:\n");
	while(start!=NULL){
		printf("%d",start->data);
		printf("\n");
		start=start->next;
		}
}
int main(){
	struct node *start=NULL;
	struct node *stp=NULL;
	int ch=9;
	while(ch!=3){
		printf("Enter\n1-push\n2-pop\n3-exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(start==NULL){
					int in;
					printf("Enter a number\n");
					scanf("%d",&in);
					stp=new node();
					stp->data=in;
					stp->next=NULL;
					start=stp;
					
				}
				else{
					int in;
					printf("Enter a number\n");
					scanf("%d",&in);
					struct node *temp=new node();
					temp->data=in;
					temp->next=NULL;
					stp->next=temp;
					stp=temp;
				}
				printar(start);
				break;
			case 2:
				if(stp==NULL){
					printf("Stack Empty\n");
				}
				else{
					if(stp==start)
					{
						stp=start=NULL;
					}
					else{
						struct node *n,*p;
						n=p=start;
						while(n->next!=NULL)
						{
							p=n;
							n=n->next;
						}
						free(n);
						p->next=NULL;
						stp=p;
					}
					printar(start);
				}
				break;
		}
	}
}
