#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<errno.h>

// carg did not give the desired results. Why?
// function that calculates the phase of a complex number
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
        printf("%f + %fi\n",creal(z),cimag(z));
}

// function calculates twiddle factor and returns it 
double complex twiddle(int N, int k)
{
	double complex w;
	w = cos((2*M_PI*k)/N) - I * sin((2*M_PI*k)/N);
	
	return w;
}

int main()
{
        int N=1;
	printf("Enter N: ");
	scanf("%d",&N);

	// Possibility of error: this code has allowed user to give array size as input
	// code will give unexpected result if anything but integer is given as input
	while(N<=0)
	{
		printf("Error: The number of points in DFT cannot be zero or negative\n");
		printf("Enter N: ");
		scanf("%d",&N);
	}

	double complex X[N];
	
	// initializing array containing DFT of input sequence
	for(int i=0; i<N; i++)
	{
		X[i] = 0.0 + I*0.0;
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
	
	double real[n];
	double img[n];

	// initializing array containing real and imaginary part of input sequence
	for(int i=0; i<n; i++)
	{
		real[i] = 0.0;
		img[i] = 0.0;
	}

	double complex x[N];

	// initializing array which will contain each point of the complex input sequence
	for(int i=0; i<n; i++)
        {
                x[n] = 0.0 + I*0.0;
        }
	
	// if sequence length is less than no. of points in DFT, then zero padding to make its length = N
	if(n < N)
        {
                for(int i=n; i<N; i++)
                {
                        x[i] = 0.0 + I*0.0;
                }
        }

	for(int i=0; i<n; i++)
	{
		printf("Sample %d:\n",i);
		printf("Real and imaginary part: ");
		scanf("%lf %lf",&real[i],&img[i]);
		x[i] = CMPLX(real[i],img[i]);
	}

	printf("\n");
	printf("Input sequence, x(n): \n");
	// i<N because sequence is zero padded, so its length = N
	for(int i=0; i<N; i++)
        {
		printf("x[%d] = ",i);
		complex_represent(x[i]);
        }
	printf("\n");

	printf("--------------%d point DFT-------------\n",N);

	// calculate the DFT of the input sequence
	for(int k=0; k<N; k++)
	{
		for(int j=0; j<n; j++)
		{
			X[k] += x[j]*twiddle(N,k*j);
		}
	}
	
	// display the DFT 
	printf("The DFT of input sequence, X(k): \n");
	for(int k=0; k<N; k++)
	{
		printf("X[%d] = ",k);
		complex_represent(X[k]);
	}

	// display the magnitude of the DFT
	printf("\n");
	printf("Magnitude of DFT: \n");
	for(int k=0; k<N; k++)
	{
		printf("|X[%d]| = ",k);
		printf("%f\n",cabs(X[k]));
	}

	printf("\n");

	// display the phase of the DFT
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








