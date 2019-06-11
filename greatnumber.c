#include <stdio.h>

int main(void) {
	long long int s=0,i,n,j;
	scanf("%lld",&n);
	long long int arr[n],t;
	for(i=0;i<n;i++)
	scanf("%lld ",&arr[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;}}}
	for(i=0;i<n;i++){
	s=s*10+arr[i];
}
	printf("%lld",s);
	return 0;
}
