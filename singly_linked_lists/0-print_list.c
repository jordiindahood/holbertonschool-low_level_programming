#include "lists.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
	list_t *p;
	size_t i=0;

	if (h){
		p = h;
		while (p)
		{
			i++;
			if(p->str)
				printf("[0] (nil)");
			else
				printf("%s",p->str);
			p=p->next;

		}
		
	}
	return(i);
}