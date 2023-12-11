#include<stdio.h>
int main()
{  
 int cp ;
 printf("enter the value of cost price ");
 scanf("%d",&cp);
 
 int sp ;
 printf("enter the value of selling price ");
 scanf("%d",&sp);
 
 if(sp>cp)
    printf("profit");

 if(sp<cp)
    printf("loss");
 
     if(sp==cp)
    printf("no profit no  loss");
 
 
	return 0;
}
