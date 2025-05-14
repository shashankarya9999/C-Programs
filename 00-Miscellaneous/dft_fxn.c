#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>

// carg did not give the desired results. Why?
// function that calculates the phase of a complex number
double complex_phase(double complex z)
{
	// z = 0.0 + I*0.0	
	if((abs(creal(z)) == 0.0) && (abs(cimag(z)) == 0.0))
	{
		return 0.0;
	}

	// z in 1st quadrant
	else if((creal(z) > 0.0) && (cimag(z) > 0.0))
	{
		return atan2(abs(cimag(z)),abs(creal(z)));
	}

	// z in 2nd quadrant
	else if((creal(z) <= 0.0) && (cimag(z) > 0.0))
        {
                return (M_PI - atan2(abs(cimag(z)),abs(creal(z))));
        }

	// z in 3rd quadrant
	else if((creal(z) < 0.0) && (cimag(z) <= 0.0))
        {
                return (-M_PI + atan2(abs(cimag(z)),abs(creal(z))));
        }

	// z in 4th quadrant
	else if((creal(z) >= 0.0) && (cimag(z) < 0.0))
        {
                return -atan2(abs(cimag(z)),abs(creal(z)));
        }
}

void complex_represent(double complex z)
{
        printf("%f + %fi\n",creal(z),cimag(z));
}

void initialize_complex_array(double complex *p, int num)
{
	for(int i=0; i<num; i++)
	{
		p[i] = 0.0 + I*0.0;
	}
}

void initialize_real_array(double *p, int num)
{
	for(int i=0; i<num; i++)
	{
		p[i] = 0.0;
	}
}

// function calculates twiddle factor and returns it 
double complex twiddle(int N, int k)
{
	double complex w;
	w = cos((2*M_PI*k)/N) - I * sin((2*M_PI*k)/N);
	
	return w;
}

// dynamically allocates memory on heap to create an array
// returns pointer to the array containing DFT of input sequence
double complex *dft(double complex *x, int N)
{
	// allocate on heap
	double complex *X = (double complex *)malloc(N * sizeof(double complex));

	// check if malloc succeeded(if allocation failed)
	if(X == NULL)
	{
		printf("Memory allocation failed!\n");
		
		// exit if allocation failed
		exit(1);
	}

	// initializing array containing DFT of input sequence
        initialize_complex_array(X,N);

	// calculate the DFT of the input sequence
        for(int k=0; k<N; k++)
        {
                for(int j=0; j<N; j++)
                {
                        X[k] += x[j]*twiddle(N,k*j);
                }
        }

	// returns a pointer to heap memory(valid even after function ends)
	return X;
}

double complex *allocate_complex_array(int num)
{
	double complex *x = (double complex *)malloc(num * sizeof(double complex));

	if(x == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(1);
	}

	return x;
}

double *allocate_real_array(int num)
{
	double *q = (double *)malloc(num * sizeof(double));

	if(q == NULL)
	{
		printf("Memory allocation failed!\n");
		exit(1);
	}

	return q;
}

int main()
{
        int N=1;
	// number of points in DFT
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

	int n=1;
	printf("Enter length of sequence: ");
	scanf("%d",&n);
	
	while(n > N)	
	{	
		printf("Error: Sequence length cannot be greater than DFT length.\n");
		printf("Enter length of sequence: ");
		scanf("%d",&n);
	}
	
	// array of real and imaginary part of each sample of input sequence
	double *real = allocate_real_array(n);
	double *img = allocate_real_array(n);

	// initializing array containing real and imaginary part of input sequence
	initialize_real_array(real,n);
	initialize_real_array(img,n);
	
	// array of input sequence
	double complex *x = allocate_complex_array(N);

	// initializing array which will contain each point of the complex input sequence
	initialize_complex_array(x,N);

	for(int i=0; i<n; i++)
	{
		printf("Sample %d:\n",i);
		printf("Real and imaginary part: ");
		scanf("%lf %lf",&real[i],&img[i]);
		x[i] = CMPLX(real[i],img[i]);
	}

	// if sequence length is less than no. of points in DFT, then zero padding the sequence
        for(int i=n; i<N; i++)
        {
                x[i] = 0.0 + I*0.0;
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

	// get the array containing DFT from function
	double complex *X = dft(x,N);

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

	// free heap memory to prevent memory leaks
	free(X);
	free(x);
	free(real);
	free(img);
		
	return 0;
}








