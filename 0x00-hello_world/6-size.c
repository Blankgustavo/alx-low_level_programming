#include<stdio.h>
/*
 *  *
 *   *main-entery
 *    *retutn:always 0
 *     *
 *      */
int main(void)
{
	printf("size of int:%d bytes", (unsigned char)sizeof(int));
	printf("size of char:%d bytes", (unsigned char)sizeof(char));
	printf("size of long int:%d bytes", (unsigned char)sizeof(long int));
	printf("size of long long int:%d bytes", (unsigned char)sizeof(long long int));
	printf("size of float:%d bytes", (unsigned char)sizeof(float));
	return (0);
}
