#include <stdio.h>

int main(void) {
	int n,i,c=1,t;
	scanf("%d",&n);
	int a[n],s[n],j;
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
		if(a[0]>a[1])
		s[0]=2;
		else
		s[0]=1;
		c=s[0];
		for(i=1;i<n;i++){
			if(a[i]>a[i-1])
			s[i]=s[i-1]+1;
			else if(a[i]==a[i-1])
			s[i]=s[i-1];
			else
			s[i]=1;
			c+=s[i];
		}
		printf("%d",c);
	return 0;
}
