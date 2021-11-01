#ifndef DOG
#define DOG
/**
 * struct dog - Dog attributes.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
