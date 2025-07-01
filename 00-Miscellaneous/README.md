1) ```dft_real.c``` - Program to find Discrete Fourier Transform(DFT) of a real sequence
    - Uses complex.h(C library) to handle complex numbers
    - The real sequence is taken as user input
    - The real sequence is then shown to user in output
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed

Output:<br>
![Screenshot 2025-06-27 081120](https://github.com/user-attachments/assets/dfc52063-37da-4966-bd0d-b70fed52f7cd)

2) ```dft_complex.c``` - Program to find Discrete Fourier Transform(DFT) of a complex sequence
    - Uses complex.h(C library) to handle complex numbers
    - The complex sequence is taken as user input  
    - The complex sequence is then shown to user in output
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed

Output:<br>
![Screenshot 2025-06-27 081231](https://github.com/user-attachments/assets/c6b2a1bb-19f8-4f6b-a57a-eccc984baae3)

3) ```dft_fxn.c``` - Program to find Discrete Fourier Transform(DFT) of complex sequence using a dft function
    - Uses complex.h(C library) to handle complex numbers
    - The complex sequence is taken as user input
    - The complex sequence is then shown to user in output
    - In this program, there is a seperate function which dynamically allocates array for DFT and
    - after filling that array with DFT, returns it
    - The input sequence is also dynamically allocated on the heap
    - The DFT(complex) and its magnitude & phase(radians and degrees) are displayed

Output:<br>
![Screenshot 2025-06-27 081345](https://github.com/user-attachments/assets/101983d2-5bad-4fa8-bbfb-15435f3c1c55)
