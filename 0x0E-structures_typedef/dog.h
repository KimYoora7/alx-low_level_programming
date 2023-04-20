/**

    @file dog.h
    This header file defines a struct for a dog's basic information and declares several functions to operate on the struct.
    */

#ifndef DOG_H
#define DOG_H

/**

    @struct dog
    A struct that contains a dog's basic information.
    @name: A pointer to the dog's name.
    @age: A float representing the dog's age.
    @owner: A pointer to the owner's name.
    */
    struct dog
    {
    char *name;
    float age;
    char *owner;
    };

/**

    @typedef dog_t
    A typedef for struct dog.
    */
    typedef struct dog dog_t;

/**

    @brief Initializes a dog struct.
    @param d A pointer to the dog struct to be initialized.
    @param name A pointer to a char array containing the dog's name.
    @param age A float representing the dog's age.
    @param owner A pointer to a char array containing the owner's name.
    @return void
    */
    void init_dog(struct dog *d, char *name, float age, char *owner);

/**

    @brief Prints a dog's basic information.
    @param d A pointer to the dog struct to be printed.
    @return void
    */
    void print_dog(struct dog *d);

/**

    @brief Creates a new dog struct.
    @param name A pointer to a char array containing the dog's name.
    @param age A float representing the dog's age.
    @param owner A pointer to a char array containing the owner's name.
    @return A pointer to a newly created dog struct.
    */
    dog_t *new_dog(char *name, float age, char *owner);

/**

    @brief Frees the memory allocated for a dog struct.
    @param d A pointer to the dog struct to be freed.
    @return void
    */
    void free_dog(dog_t *d);

/**

    @brief Copies the string pointed to by src to the buffer pointed to by dest.
    @param dest A pointer to the destination buffer.
    @param src A pointer to the source string.
    @return A pointer to dest.
    */
    char *_strcpy(char *dest, char *src);

/**

    @brief Computes the length of the string s.
    @param s A pointer to the string whose length is to be computed.
    @return The length of the string.
    */
    int _strlen(char *s);

#endif
