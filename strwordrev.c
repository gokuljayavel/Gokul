#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int n,i,j,k;
	char str[100000];
	fgets(str,100000,stdin);
	n=strlen(str);
	k=0;
	for(i=0;i<=n;i++){
		if(str[i]==32 || i==n){
		for(j=i-1;j>=k;j--)
		printf("%c",str[j]);
		printf(" ");
		k=i+1;}}
	return 0;
}
