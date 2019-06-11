#include <stdio.h>

int main(void) {
	long long int num,i,f=0;
	scanf("%lld",&num);
	long long int arr[num],l=0;
	for(i=0;i<num;i++)
	scanf("%lld ",&arr[i]);
	for(i=0;i<num;i++){
		if(i==arr[i] && l==0){
			f=1;
			printf("%lld",arr[i]);
			l=1;}
		else if(i==arr[i])
		printf(" %lld",i);}
			if(f==0)
			printf("-1");
	return 0;
}
