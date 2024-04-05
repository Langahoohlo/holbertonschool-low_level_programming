#include "main.h"

/**
 * flip_bits - function to return number of bits to flip
 * @n: argument
 * @m: argument
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bits = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		bits++;
	}
	return (bits);
}