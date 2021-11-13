#include <stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void test(unsigned index, char *target)
{
	printf("index is %u\ntarget is %c\n", index, *target);
	*target = 'a';
}
int main(int argc, char *argv[]) {
	void (*f)(unsigned int, char *) = 0;
	f = test;
	printf("Before %s\n", argv[1]);
	ft_striteri(argv[1],f);
	printf("After %s\n", argv[1]);
	return argc;
}