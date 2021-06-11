#include<stdio.h>
void printar(int a[],int stp){
	int i;
	printf("New Queue:\n");
	for(i=0;i<stp;i++){
		if(a[i]!='\0'){
		printf("%d",a[i]);
		printf("\n");	
		}
	
}
}
int main(){
	int n;
	printf("Enter size of Queue\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	a[i]='\0';
	int front=-1;int rear=-1;
	int ch=9;
	while(ch!=3){
		printf("Enter\n1-add\n2-remove\n3-exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if((rear+1)%n==front){
					printf("Queue is full\n");
				}
				else
				{
					int in;
					printf("Enter a number\n");
					scanf("%d",&in);
					
				if(front==-1&&rear==-1){
					front=rear=0;
					a[front]=in;
				}else{
					rear=(rear+1)%n;
					a[rear]=in;
				}
					
					printar(a,n);
				}
				break;
			case 2:
				if(front==-1&&rear==-1){
					printf("Queue is Empty\n");
				}
				else if(front==rear){
					a[front]='\0';
					front=rear=-1;
				}
				else
					{
					a[front]='\0';
					front=(front+1)%n;
					printar(a,n);
				}
				break;
		}
	}
}
