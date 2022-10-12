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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);






#endif
