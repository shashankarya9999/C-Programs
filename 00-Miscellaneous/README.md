This directory contains various programs I wrote in C. 
<br>

1) ```dft_complex.c``` - Program to find Discrete Fourier Transform(DFT) of a complex sequence
    - Uses complex.h to handle complex numbers
    - The complex sequence is taken as user input  
    - The complex sequence is then shown to user in program output
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed

2) ```dft_real.c``` - Program to find DFT of a real sequence
    - Uses complex.h to handle complex numbers
    - The real sequence is taken as user input
    - The real sequence is then shown to user in program output
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed

3) ```dft_fxn.c``` - Program to find DFT of complex sequence using a dft function
    - Uses complex.h to handle complex numbers
    - The complex sequence is taken as user input
    - The complex sequence is then shown to user in program output
    - In this program, there is a seperate function which dynamically allocates array for DFT and
    - after filling that array with DFT, returns it
    - Also, the input sequence is also dynamically allocated on the heap
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed
