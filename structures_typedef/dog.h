#ifndef DOG
#define DOG

/**
 * struct dog - creating a dog struct
 * @name: *char
 * @age: float
 * @owner: *char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
