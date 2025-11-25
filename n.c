/*program for student report*/
#include<stdio.h> 
void main(){
	int m,p,c,t;
	float avg;
	  char name[20];
	printf("enter student name:");
	//sacnf("%s",&n name);
	gets(name);
	printf("enter marks:\n");
	scanf("%d%d%d",&m,&p,&c);
	t=m+p+p+c;
	avg=t/30;
	printf("name is :%s/n",name);
	if(m>=35& &p>=35& &c>=35){
		if (avg>=60)
		printf("first class");
		else if(avg>=50)
		  printf("second class");
	}
	else
	  printf("fail");
	 printf("\nmarks are:%d%d%d",m,p,c);
	 printf("\n total is:%d",t);
	 printf("\n average is :%0.2f",avg);	
}
