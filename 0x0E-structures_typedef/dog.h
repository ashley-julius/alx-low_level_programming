#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This structure provides a dog description
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: This structure identifies a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);






#endif
