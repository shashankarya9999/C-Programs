#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>

double complex_phase(double complex z)
{
        // z = 0 + I*0
        if((abs(creal(z)) == 0.0) && (abs(cimag(z)) == 0.0))
        {
                return 0.0;
        }

        // z in 1st quadrant
        else if((creal(z) > 0) && (cimag(z) > 0))
        {
                return atan2(abs(cimag(z)),abs(creal(z)));
        }

        // z in 2nd quadrant
        else if((creal(z) <= 0) && (cimag(z) > 0))
        {
                return (M_PI - atan2(abs(cimag(z)),abs(creal(z))));
        }

        // z in 3rd quadrant
        else if((creal(z) < 0) && (cimag(z) <= 0))
        {
                return (-M_PI + atan2(abs(cimag(z)),abs(creal(z))));
        }

        // z in 4th quadrant
        else if((creal(z) >= 0) && (cimag(z) < 0))
        {
                return -atan2(abs(cimag(z)),abs(creal(z)));
        }
}

void complex_represent(double complex z)
{
        //printf("The complex number is: ");
        printf("%f + %fi\n",creal(z),cimag(z));
}

double complex twiddle(int N, int k)
{
	double complex w;
	w = cos((2*M_PI*k)/N) - I * sin((2*M_PI*k)/N);
	
	return w;
}

int main()
{
        double complex w;
        int N=1;
	printf("Enter N: ");
	scanf("%d",&N);

	while(N<=0)
	{
		printf("Number of points in DFT cannot be zero or negative.\n");
		printf("Enter N: ");
		scanf("%d",&N);
	}
    
	double complex X[N];
	for(int i=0; i<N; i++)
	{
		X[N] = 0 + I*0;
	}

	int n=1;
	printf("Enter length of sequence: ");
	scanf("%d",&n);
	
	while(n > N) 
	{
        	printf("Error: Sequence length cannot be greater than DFT length.\n");
    		printf("Enter length of sequence: ");
		scanf("%d",&n);
	}

	double x[N]; 
	for(int i=0; i<N; i++)
        {
                x[n] = 0.0;
        }
	
	// if sequence length is less than no. of points in DFT
	if(n < N)
        {
                for(int i=n; i<N; i++)
                {
                        x[i] = 0.0;
                }
        }

	printf("Enter the sequence: ");
	for(int i=0; i<n; i++)
	{
		scanf("%lf",&x[i]);
	}

	printf("Input sequence, x(n): \n");
	// i<N because sequence is zero padded, so its length=N
	for(int i=0; i<N; i++)
        {
                printf("x[%d] = %lf\n",i,x[i]);
        }
	printf("\n");

	printf("--------------%d point DFT-------------\n",N);

	for(int k=0; k<N; k++)
	{
		for(int j=0; j<n; j++)
		{
			X[k] += x[j]*twiddle(N,k*j);
		}
	}
	
	printf("The DFT of sequence, X(k): \n");
	for(int k=0; k<N; k++)
	{
		printf("X[%d] = ",k);
		complex_represent(X[k]);
	}

	printf("\n");
	printf("Magnitude of DFT: \n");
	for(int k=0; k<N; k++)
	{
		printf("|X[%d]| = ",k);
		printf("%f\n",cabs(X[k]));
	}

	printf("\n");
	printf("Phase of DFT(radians): \n");
        for(int k=0; k<N; k++)
        {
                printf("<X[%d] = ",k);
                printf("%f",complex_phase(X[k]));
		printf(" radians\n");
        }

	printf("\n");
        printf("Phase of DFT(degrees): \n");
        for(int k=0; k<N; k++)
        {
                printf("<X[%d] = ",k);
                printf("%f",(180/M_PI)*complex_phase(X[k]));
                printf(" degrees\n");
        }

	return 0;
}








