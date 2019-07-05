#include <stdio.h>

int main(void) {
	int n,i,j,c=0,k,t;
	scanf("%d",&n);
	int a[n],s[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++){
		c=0;
		k=a[i];
		while(k>0){
			if(k%2==1)
			c++;
			k/=2;}
		s[i]=c;}
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(s[i]==s[j]){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;}}
		else if(s[i]<s[j]){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			t=s[i];
			s[i]=s[j];
			s[j]=t;}}}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
