#ifndef DOG
#define DOG

/**
 * struct dog - the dog class
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * return: 0
 */
int main(void)
{
	struct dog my_dog;
	{
		char *name;
		float age;
		char *owner;
	}
	my_dog.name = "fluffy";
	my_dog.age = 2;
	my_dog.owner = "Kabi"
	printf("my name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return(0);
}
#endif
