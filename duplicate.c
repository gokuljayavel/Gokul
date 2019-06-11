#include <stdio.h>

int main(void) {
	long long int num,i,l=0,f=0;
	scanf("%lld",&num);
	long long int arr[num],c[100]={0};
	for(i=0;i<num;i++){
	scanf("%lld ",&arr[i]);
	c[arr[i]]++;}
	for(i=0;i<100;i++){
		if(c[i]>1 && l==0){
			f=1;
		printf("%lld",i);
		l=1;}
		else if(c[i]>1)
		printf(" %lld",i);
	}
	if(f==0)
	printf("unique");
	return 0;
}
