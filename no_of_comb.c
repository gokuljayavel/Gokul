#include <stdio.h>

int main(void) {
	int n,i=0,j,t1=0,t2=1,t3;
	char a[1001];
	scanf("%s%n",a,&n);
	for(i=n-1;i>0;i--){
		j=((a[i-1]-48)*10+(a[i]-48));
		if(j>=1 && j<=26){
			t3=t1+t2;
			t1=t2;
			t2=t3;}
		else{
			t3=t2;
			t1=t2;
			t2=t3;}}
	printf("%d",t3);
	return 0;
}
