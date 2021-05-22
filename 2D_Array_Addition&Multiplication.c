#include<stdio.h>
void printar(int m,int n,int a[][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	
}
}
int main(){
	int n,m,k;
	printf("Enter size of 2D array n\n");
	scanf("%d",&n);
	m=n;
	int a[m][n],b[m][n],add[m][n],mul[n][m];
	printf("Enter elements of first array\n");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of Second array\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			mul[i][j]=0;
			for(k=0;k<m;k++)    
				{    
				mul[i][j]+=a[i][k]*b[k][j];    
				} 
		}
	}
	printf("\nFirst array\n");
		printar(m,n,a);
		printf("\n");
	printf("\nSecond array\n");
		printar(m,n,b);
	printf("Addition\n");
	printar(m,n,add);
	printf("Multiplication\n");
	printar(n,m,mul);
	return 0;
	
}
