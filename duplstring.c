#include <stdio.h>

int main(void) {
	int n,i,j,a[26]={0};
	char s[100000];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	 a[s[i]-97]++;
	 for(i=0;i<26;i++){
	 	if(a[i]>0)
	 	printf("%c",i+97);
	 }
	return 0;
}
