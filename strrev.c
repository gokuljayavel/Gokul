    #include <stdio.h>
    #include<stdlib.h>
    int main(void) {
    	char s[1000000];
    	int n,i;
    	scanf("%s%n",s,&n);
    	for(i=n-1;i>=0;i--)
    	printf("%c",s[i]);
    	return 0;
    }
     
