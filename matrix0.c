#include <stdio.h>

int main(void) {
	int n,i,m,j,l;
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		scanf("%d ",&a[i][j]);
		b[i][j]=a[i][j];}}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				for(l=0;l<m;l++)
				b[l][j]=0;
				for(l=0;l<n;l++)
				b[i][l]=0;}}}
	for(i=0;i<m;i++,printf("\n")){
		for(j=0;j<n-1;j++)
			printf("%d ",b[i][j]);
			printf("%d",b[i][j]);
		}
	return 0;
}

