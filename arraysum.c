#include <stdio.h>

int main(void) {
  int n,i,j,q,s=0,c,b;
  scanf("%d %d",&n,&q);
  int a[n],ans[q];
  for(i=0;i<n;i++)
  scanf("%d ",&a[i]);
  for(i=0;i<q;i++){
  	scanf("%d %d",&c,&b);
  	s=0;
  	for(j=c-1;j<b;j++){
  		s=s+a[j];
  	}
  	ans[i]=s;
  }
  for(i=0;i<q;i++)
  printf("%d\n",ans[i]);
	return 0;
}
