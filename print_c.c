 #include "main.h"
 #include <stdio.h>
 
 /**
  * print_c - the function prints c
  * @arguments: input char
  * @bu: pointer to the buffer
  * @i_bu: index for buffer pointer
  * Return: Returns 1 On success
  */
 int print_c(va_list arguments, char *bu, unsigned int i_bu)
 {
         char s;
 
         s = va_arg(arguments, int);
         buffer_hand(bu, s, i_bu);
 
         return (1);
 }
