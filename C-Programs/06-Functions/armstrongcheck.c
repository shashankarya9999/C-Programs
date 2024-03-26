#include<stdio.h>
#include<math.h>

int digit( int m );
void fill_array( int m, int d[] );
int cubic_sum( int m, int d[] );

int main()
{
        int num,sum,num_digit;
        printf("Enter a number: ");
        scanf("%d",&num);

        num_digit = digit( num );

        int digit[ num_digit ];

        fill_array( num, digit );

        sum = cubic_sum( num_digit, digit );

        if( num == sum )        printf("Number is Armstrong!\n");
        else                    printf("Number is not Armstrong!\n");

        return 0;
}

int digit( int m )
{
        int counter;
        while( m != 0 )
        {
                m = m/10;
                counter++;
        }

        return (counter);
}

void fill_array( int m, int d[] )
{
        int i;
        while( m != 0 )
        {
                d[i] = m%10;
                m=m/10;
                i++;
        }
}

int cubic_sum( int m, int d[] )
{
        int sum=0,i;

        for( i=0; i<m; i++ )
        {
                sum = sum + pow( d[i],3 );
        }

        return (sum);
}
