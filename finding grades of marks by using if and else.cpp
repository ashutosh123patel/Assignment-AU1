#include<stdio.h>
int main()
{  int x;
    printf(" enter the marks:");
       scanf("%d",&x);
   if (x>=81) printf("very good");
    else if (x>=61) printf(" good ");
    else if (x>=41) printf("average");
    else  printf("fail");
 
	return 0;
}
