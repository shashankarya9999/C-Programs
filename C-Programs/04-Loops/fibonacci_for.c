#include<stdio.h>

int main()

{
	int a=0,b=1,c;
	int n,i;

        printf("Enter the number of terms:");
	scanf("%d",&n);

        for( i=1; i<=n; i=i+1 )
        {
 	       c=a+b;
               a=b;
               b=c;
               printf("%d",c);
               printf(" ");
        }
	printf("\n");
	return 0;
}
