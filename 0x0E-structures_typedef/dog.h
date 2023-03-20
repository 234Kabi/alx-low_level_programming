#ifndef DOG
#define DOG

/**
 * struct dog - Represents a dog
 * @name: Pointer to name of the dog
 * @age: Age of the dog
 * @owner: Pointer to owner of the dog
 *
 * This struct represents a dog, and contains its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to dog struct to initialize
 * @name: Pointer to name of the dog
 * @age: Age of the dog
 * @owner: Pointer to owner of the dog
 *
 * This function initializes a struct dog with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to dog struct to print
 *
 * This function prints the name, age, and owner of a struct dog.
 */
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - Creates a new dog struct
 * @name: Pointer to name of the dog
 * @age: Age of the dog
 * @owner: Pointer to owner of the dog
 *
 * This function creates a new dog struct with the given name, age, and owner, and returns a pointer to it.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees a dog struct
 * @d: Pointer to dog struct to free
 *
 * This function frees the memory allocated for a dog struct.
 */
void free_dog(dog_t *d);

#endif

