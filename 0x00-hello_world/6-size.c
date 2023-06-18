#include <stdio.h>
/**
 * main - A  C program that prints the size of various types on the computer
 * Return:0(Success)
 */
int main(void)
{
printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(int));
printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
printf("size of a double: %lu byte(s)\n", (unsigned long) sizeof(double));
printf("size of a long: %lu byte(s)\n", (unsigned long) sizeof(long));
return (0);
}
