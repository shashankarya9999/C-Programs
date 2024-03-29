#include<stdio.h>

void swap( int *, int * );
void circular_swap( int *);

int main()
{
        int p[5];
        printf("Enter five numbers: ");
        for( int i=0; i<5; i++ )
	{
		scanf("%d",&p[i]);
	}

	printf("The values are: ");
	for( int i=0; i<5; i++ )
	{
        	printf("%d ",p[i]);
	}
	printf("\n");

        circular_swap( p );
        return 0;
}

void swap( int *x, int *y )
{
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
}

void circular_swap( int *p )
{
	swap( (p),(p+2) );
        swap( (p+1),(p+4) );
        swap( (p+2),(p+3) );
        swap( (p+1),(p+2) );

	printf("After shift: ");
        for( int i=0; i<5; i++ )
        {
                printf("%d ",p[i]);
        }
	printf("\n");
}
