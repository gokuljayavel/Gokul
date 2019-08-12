#include <stdio.h>

int main(void) {
	int n,i,j,a[26]={0};
	char s[100000]; 
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
	if(a[s[i]-97]==0)
	printf("%c",s[i]);
	a[s[i]-97]++;
	 }
	return 0;
}
