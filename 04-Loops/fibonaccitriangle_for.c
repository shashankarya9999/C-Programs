#include<stdio.h>

int main()
{
        int row,col,num;
        int a=0,b=1,c;

        printf("Enter the number of rows: ");
        scanf("%d",&num);

        for( row=1; row<=num; row=row+1 )
        {
                for( col=1; col<=row; col=col+1 )
                {
			c = a + b;
			a = b;
			b = c;
                        printf("%d",c);
                        printf(" ");
                }
		
        printf("\n");
        }

	return 0;
}
