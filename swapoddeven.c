#include <stdio.h>

int main(void) {
	int n,i;
	char s[10001],t;
	scanf("%s%n",s,&n);
	for(i=0;i<n;i+=2)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
	}
	printf("%s",s);
	return 0;
}
