#include <stdio.h>
#include<limits.h>
int main(void) {
  int n,i,j,q,s=0,c,b,m=INT_MAX;
  scanf("%d %d",&n,&q);
  int a[n],ans[q];
  for(i=0;i<n;i++)
  scanf("%d ",&a[i]);
  for(i=0;i<q;i++){
  	scanf("%d %d",&c,&b);
  	m=a[c-1];
  	for(j=c;j<b;j++){
  		m=m|a[j];
  	}
  	ans[i]=m;
  }
  for(i=0;i<q;i++)
  printf("%d\n",ans[i]);
	return 0;
}
