#include<stdio.h>

int main()
{
        int row,col,num;
	char x = 'A';

        printf("Enter the number of rows: ");
        scanf("%d",&num);

        for( row=1; row<=num; row=row+1 )
        {
		for( col=1; col<=num; col=col+1 )
                {
			if( col < num - row + 1 ) printf(" ");
			
			else 
			{
				printf("%c",x);
				x = x + 1;
			}			

		}
		
        printf("\n");
	}
	
	return 0;        
}
