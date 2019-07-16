#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int n,i,j;
	char str[100000];
	fgets(str,100000,stdin);
	n=strlen(str)-1;
	int a[n],top=0;
	a[top]=str[0];
	for(i=1;i<n;i++){
		if(str[i]==a[top])
		top--;
		else{
		top++;
		a[top]=str[i];}
	}
	if(top==0)
	printf("YES");
	else
	printf("NO");
	return 0;
}
