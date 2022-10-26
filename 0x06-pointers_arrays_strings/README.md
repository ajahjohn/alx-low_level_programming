Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
1. What are pointers and how to use them
2. What are arrays and how to use them
3. What are the differences between pointers and arrays
4. How to use strings and how to manipulate them
5. Scope of variables

Copyright - Plagiarism
1. You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
2. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
3. You are not allowed to publish any content of this project.
5. Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
General
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
13. Don’t forget to push your header file

===================================TASKS TO BE CARRIED OUT=======================================
Tasks

0. strcat (mandatory)
Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) 
at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 0-strcat.c


1. strncat (mandatory)
Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 1-strncat.c


2. strncpy (mandatory)
Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 2-strncpy.c


3. strcmp (mandatory)
Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 3-strcmp.c


4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy (mandatory)
Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 4-rev_array.c


5. Always look up (mandatory)
Write a function that changes all lowercase letters of a string to uppercase.

Prototype: char *string_toupper(char *);

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 5-string_toupper.c


6. Expect the best. Prepare for the worst. Capitalize on what comes (mandatory)
Write a function that capitalizes all words of a string.

Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 6-cap_string.c


7. Mozart composed his music not for the elite, but for everybody (mandatory)
Write a function that encodes a string into 1337.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 7-leet.c
