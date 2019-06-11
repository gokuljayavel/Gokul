#include <stdio.h>
#include<math.h>
int main(void) {
	int num,k,c=0,i,j,l=0;
	scanf("%d %d",&num,&k);
	for(j=num;j<=k;j++){
		c=0;
	for(i=1;i<=sqrt(j);i++){
		if(j%i==0)
		c++;
	}
	if(c==1)
	l++;}
	printf("%d",l);
	return 0;
}
