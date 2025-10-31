#ifndef MYHEADER_H
#define MYHEADER_H

/**
 * struct dog - let's play
 * @name: 1
 * @age: 2
 * @owner: 3
 *
 * Description: soleil
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
/*void free_dog(dog_t *d);*/

#endif
