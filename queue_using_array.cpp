#include<stdio.h>
void printar(int a[],int stp){
	int i;
	printf("New Queue:\n");
	for(i=0;i<=stp;i++){
		printf("%d",a[i]);
		printf("\n");
	
}
}
int main(){
	int n;
	printf("Enter size of Queue\n");
	scanf("%d",&n);
	int a[n];
	int stp=-1;
	int ch=9;
	while(ch!=3){
		printf("Enter\n1-add\n2-remove\n3-exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(stp==n-1){
					printf("Queue is full\n");
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
					printf("Queue is Empty\n");
				}
				else{
					for(int i=0;i<=stp;i++)
					a[i]=a[i+1];
					stp--;
					printar(a,stp);
				}
				break;
		}
	}
}
