#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,Y[100];
    int i;
    printf("Enter number of year input : \n");
    scanf("%d",&T);
    if(T>=1 && T<=100)
    {		
        for(i=1; i<=T; i++)
    	{
    	printf("Enter Year : \n");
        scanf("%d",&Y[i]);
   		}
   		for(i=1;i<=T;i++)
   		{
		if(Y[i]>=100 && Y[i]<=4000)
        {
    	if(Y[i]%400 == 0)
       		 printf("true \n");
    	else if(Y[i]%100 == 0)
       		 printf("false \n");
    	else if(Y[i]%4 == 0)
       		 printf("true \n");
   		else
       		 printf("false \n");
		}
		else
		printf("WRONG INPUT Y \n");         
		}
	}
    else
    printf("WRONG INPUT T \n");
    getch();
}

