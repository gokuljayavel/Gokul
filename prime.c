include <stdio.h>
#include<math.h>
int main(void) {
	int num,c=0,i,j;
	scanf("%d",&num);
	for(i=1;i<=sqrt(num);i++){
		if(num%i==0)
		c++;
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
