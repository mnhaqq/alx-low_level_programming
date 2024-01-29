#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - struct for dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
