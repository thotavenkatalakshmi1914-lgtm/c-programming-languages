/*program for to check palindromne or not*/
#include<stdio.h>
int main(){
	int n,r,s=0,m;
	printf("enter n value:");
	scanf("%d",&n);
	m=n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(m==s)
	 printf("the number is palindrome");
	else
	 printf("the number is not palindrome"); 	
	return 0;
}
