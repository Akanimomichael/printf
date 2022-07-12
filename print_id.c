 #include "main.h"
 
 /**
  * print_id - Tis function prints an integer to stdout
  *
  * @arguments: input string
  * @bu: This is the buffer pointer
  * @i_bu: This is the index for buffer pointer
  * Return: The function returns an int.
  */
 int print_id(va_list arguments, char *bu, unsigned int i_bu)
 {
         int int_input;
         unsigned int int_in, int_temp, x, div, isneg;
 
         int_input = va_arg(arguments, int);
         isneg = 0;
         if (int_input < 0)
         {
                 int_in = int_input * -1;
                 i_bu = buffer_hand(bu, '-', i_bu);
                 isneg = 1;
         }
         else
         {
                 int_in = int_input;
         }
 
         int_temp = int_in;
         div = 1;
 
         while (int_temp > 9)
         {
                 div *= 10;
                 int_temp /= 10;
         }
 
         for (x = 0; div > 0; div /= 10, x++)
         {
                 i_bu = buffer_hand(bu, ((int_in / div) % 10) + '0', i_bu);
         }
         return (x + isneg);
 }
