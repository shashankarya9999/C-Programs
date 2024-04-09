/*

This program stores every character typed on the keyboard into a file where the program contiues till the character $ is hit from the keyboard.

*/

#include<stdio.h>

int main()
{
      FILE *f1;
      char x;
    
      f1 = fopen("data","w");
      printf("Input the characters");
    
      while( (x = getc(stdin)) != '$')
      {
            putc(x,f1);
            fclose(f1);
            f1 = fopen("data","r");
            printf("The input characters are:\n");
        
            while((x = getc(f1)) != EOF)
            {
                  putchar(x);
                  getch();
            }
      }
      
      fclose(f1);
      
      return 0;
}
