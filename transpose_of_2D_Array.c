#include<stdio.h>
void printar(int m,int n,int a[m][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m,n;
	printf("Enter size of Array m x n\n");
	scanf("%d%d",&m,&n);
	int a[m][n],trans[n][m];
	printf("enter elements of array\n");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printar(m,n,a);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			trans[j][i]=a[i][j];
		}
	}
	printf("\n");
	printar(n,m,trans);
	return 0;
}
