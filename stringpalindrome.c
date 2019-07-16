#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int n,i,j,front=0;
	char str[100000];
	fgets(str,100000,stdin);
	n=strlen(str);
	int a[n],top=-1;
	for(i=0;i<n;i++){
    	top++;
		a[top]=str[i];}
	for(i=0;i<n/2;i++){
		if(a[top]==a[front]){
		front++;
		top--;}
		else{
			printf("NO");
			return 0;}}
		if(front==n/2)
		printf("YES");
}
