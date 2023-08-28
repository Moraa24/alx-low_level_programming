#include "main.h"

/**
 * _memset()-fills memory with a constant byte
 * @n : pointer
 *
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int main () {
		char buffer [10];
		_memset(buffer,'A',10);
		for (int i=0;i<10;i++){
			printf("%c",buffer[i]);

}
return 0;
}
