#include<stdio.h>

int pos_count( int *p, int m );
int neg_count( int *p, int m );
int e_count( int *p, int m );
int o_count( int *p, int m );

int main()
{
	int num;
	printf("Enter number of elements: ");
	scanf("%d",&num);

	int arr[num];

	printf("Enter elements: ");
	for( int i=0; i<num; i++ )
	{
		scanf("%d",&arr[i]);
	}

	int p = pos_count( arr, num );
	int n = neg_count( arr, num );
	int e = e_count( arr, num );
	int o = o_count( arr, num );

	printf("Number of positive integers: %d\n",p);
	printf("Number of negative integers: %d\n",n);
	printf("Number of even integers: %d\n",e);
	printf("Number of odd integers: %d\n",o);
}

int pos_count( int *p, int m )
{
	int p_count = 0;

	for( int i=0; i<m; i++ )
	{
		if( *(p+i) >= 0 )	p_count++;
	}
	return ( p_count );
}

int neg_count( int *p, int m )
{
        int n_count = 0;

        for( int i=0; i<m; i++ )
        {
                if( *(p+i) < 0 )       n_count++;
        }
        return ( n_count );
}

int e_count( int *p, int m )
{
        int e_count = 0;

        for( int i=0; i<m; i++ )
        {
                if( (*(p+i)) % 2 == 0 )       e_count++;
        }
        return ( e_count );
}

int o_count( int *p, int m )
{
        int o_count = 0;

        for( int i=0; i<m; i++ )
        {
                if( (*(p+i)) % 2 != 0 )       o_count++;
        }
        return ( o_count );
}
