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
  	m=INT_MAX;
  	for(j=c-1;j<b;j++){
  		if(a[j]<m)
  		m=a[j];
  	}
  	ans[i]=m;
  }
  for(i=0;i<q;i++)
  printf("%d\n",ans[i]);
	return 0;
}
