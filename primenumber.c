#include <stdio.h>
#include<math.h>
int main(void) {
	int i,a,b,c=0,j;
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b;i++){
		c=0;
		for(j=1;j<=sqrt(i);j++){
		if(i%j==0)
		c++;}
		if(c==1)
		printf("%d ",i);
	}
	return 0;
}
