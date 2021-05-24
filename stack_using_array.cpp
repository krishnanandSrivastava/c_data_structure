#include<stdio.h>
void printar(int a[],int stp){
	int i;
	printf("New Stack:\n");
	for(i=0;i<=stp;i++){
		printf("%d",a[i]);
		printf("\n");
	
}
}
int main(){
	int n;
	printf("Enter size of Stack\n");
	scanf("%d",&n);
	int a[n];
	int stp=-1;
	int ch=9;
	while(ch!=3){
		printf("Enter\n1-push\n2-pop\n3-exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(stp==n-1){
					printf("Stack is full\n");
				}
				else{
					int in;
					printf("Enter a number\n");
					scanf("%d",&in);
					stp++;
					a[stp]=in;
					printar(a,stp);
				}
				break;
			case 2:
				if(stp==-1){
					printf("Stack Empty\n");
				}
				else{
					stp--;
					printar(a,stp);
				}
				break;
		}
	}
}
