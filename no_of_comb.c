#include <stdio.h>

int main(void) {
	int n,i=0,j,t1=0,t2=1,t3,k=0;
	int a[1001];
	scanf("%d",&n);
	while(n>0){
		a[k++]=n%10;
		n=n/10;}
	for(i=0;i<k-1;i++){
		j=((a[i+1])*10+(a[i]));
		if(j>=1 && j<=26){
			t3=t1+t2;
			t1=t2;
			t2=t3;}
		else{
			t3=t2;
			t1=t2;
			t2=t3;}}
	printf("%d",t3);
	return 0;
