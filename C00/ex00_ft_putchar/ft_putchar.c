#include <stdio.h>

int main(void)
{
	char c;

	c='c';
	write(1, &c, 1);
	return(0);
}
