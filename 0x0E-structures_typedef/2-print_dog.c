#include "dog.h"
#define NILL "(nil)"

/** 
 * print_dog - print a struct dog
 * @d: pointer to a dog struct
 *
 * Description: print the initialized dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		       	d->name == NILL;
		if (d->owner == NULL)
			d->owner == NILL;
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
