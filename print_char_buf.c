 #include "main.h"
 
 /**
  * print_chr_buf - prints buffer no or bytes printed
  *
  * @bu: This is a buffer pointer
  * @i_bu: This is the number of bytes to print
  * Return: Returns isn, no of bytes printed.
  */
 int print_chr_buf(char *bu, unsigned int i_bu)
 {
         return (write(1, bu, i_bu));
 }
