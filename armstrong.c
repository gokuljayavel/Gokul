#include <stdio.h>

int main(void) {
	int n,i,r,s=0,a,b;
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b;i++){
	n=i;
	s=0;
	while(n>0){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(i==s)
	printf("%d ",i);}
	return 0;
}
