# 42 ABU DHABI: LIBFT
[Personal website which contains my current and past projects being undertaken at 42 Abu Dhabi.](https://42.nauman.cc/)<br />
Get ready for some coding fun with Libft! It’s the first project you’ll tackle at 42, and it’s all about creating a supercharged library of awesome functions in good ol’ C. We’re talking about functions that give the standard ones a run for their money!<br/>
<br/>
To make things even more exciting, you’ll be using a Makefile to compile and run your library. Say goodbye to those ordinary standard functions because you won’t be needing them here. Libft is your new go-to resource for all your future 42 adventures.<br/>
<br/>
But wait, there’s more! Once you’ve conquered the initial challenge, you’ll have the chance to level up Libft. That’s right, you can add your very own functions beyond the project’s requirements. Let your creativity shine and make your library truly extraordinary!<br/>
<br/>
Now, let’s dive into the fun structure of this project. We’ve got three thrilling sections waiting for you: Part I, Part II, and the Bonus component. Each section brings new excitement and challenges, so get ready to flex those coding muscles!<br/>
<br/>
So buckle up and embark on this thrilling coding adventure with Libft. It’s time to unleash your programming powers and create something truly epic!<br/>
<br/>
`WORKS ON MY MACHINE`<br/>

# Part I
Alright, let’s kick off this project with a blast! In this first phase, your mission is to revamp a bunch of libc functions, just like the ones you find in their manual pages. But here’s the twist: you need to give them a funky makeover by adding “ft_” as a prefix to their names. So, for example, strlen becomes ft_strlen. Cool, right?<br/>
<br/>
But wait, there’s a catch! Your revamped functions should have the exact same prototypes and behaviors as the original ones. We’re talking about clones here! So, when someone uses your ft_strlen, they should get the same results and behavior as if they had used the original strlen.<br/>
<br/>
It’s a challenge, but it’s also an opportunity to show off your coding skills and attention to detail. So, roll up your sleeves, put on your coding cap, and let’s give these libc functions a hip new vibe with the power of “ft_”!<br/>
<br/>
| Function      | Description  |
| :--------------:| :----------:|
| [ft_memset](./srcs/memory/ft_memset.c) | Sets each byte of the memory block pointed to by str to the value c, up to a specified length n. It returns the pointer str after modifying the memory block.|
| [ft_bzero](./srcs/memory/ft_bzero.c) |  Sets the first n bytes of the memory pointed to by s to zero. It iterates through the memory block by decrementing n, and for each iteration, it assigns the value 0 to the current byte pointed to by s.|
| [ft_memcpy](./srcs/memory/ft_memcpy.c) | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It returns a pointer to the destination memory area.|
| [ft_memmove](./srcs/memory/ft_memmove.c) | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It handles overlapping memory regions correctly by using a temporary buffer. It returns a pointer to the destination memory area.|
| [ft_memchr](./srcs/memory/ft_memchr.c) | Searches for the first occurrence of the character c in the memory block pointed to by str, up to a specified length n. It iterates through the memory block using a while loop and checks if each byte matches c. If a match is found, it returns a pointer to that byte. If no match is found within the specified length, it returns NULL.|
| [ft_memcmp](./srcs/memory/ft_memcmp.c) |  Compares the memory blocks pointed to by s1 and s2 up to a specified length n. It iterates through the memory blocks using a while loop, comparing each byte. If a byte in s1 is not equal to the corresponding byte in s2, it returns the difference between the two bytes. If all bytes are equal within the specified length, it returns 0 to indicate that the memory blocks are equal.|
| [ft_calloc](./srcs/memory/ft_calloc.c) |  Allocates memory for an array of elements with a specified count and n size. It checks for overflow, allocates memory using malloc, and zeroes out the memory before returning the pointer to the allocated memory.|
| [ft_strlen](./srcs/string/ft_strlen.c) | Calculates the length of a null-terminated string. It takes a pointer to a constant character array (str) as input. It initializes a variable i as 0 and then iterates through the characters of the string until it encounters the null terminator (‘\0’). For each character, it increments i. Finally, it returns the value of i, representing the length of the string.|
| [ft_strdup](./srcs/string/ft_strdup.c) | Duplicates a string src by allocating memory for a new string, copying the contents of src into it, and returning the pointer to the new string.|
| [ft_strlcpy](./srcs/string/ft_strlcpy.c) | Copies a null-terminated string from src to dest, ensuring proper null termination within a limited size of n. It returns the length of the source string.|
| [ft_strlcat](./srcs/string/ft_strlcat.c) | Appends a null-terminated string from src to the end of dest, ensuring proper null termination within a limited size of n. It returns the total length of the resulting string, considering the length of dest and the length of the appended src string.|
| [ft_strchr](./srcs/string/ft_strchr.c) | Searches for the first occurrence of the character c in the string str. It iterates through the characters of str using a while loop, checking if each character matches c. If a match is found, it returns a pointer to that character. If no match is found, it returns NULL.|
| [ft_strrchr](./srcs/string/ft_strrchr.c) | Searches for the last occurrence of the character c in the string str. It iterates through the characters of str using a while loop, updating a pointer aux whenever a match is found. After the loop, it checks if the last character of str matches c and returns a pointer to that character if it does. Otherwise, it returns the pointer aux, which points to the last occurrence of c or NULL if no match is found.|
| [ft_strnstr](./srcs/string/ft_strnstr.c) | Searches for the first occurrence of the string needle within the string haystack, up to a specified length n. It iterates through haystack character by character and compares it with needle, ensuring the length constraint is met. If a match is found, it returns a pointer to the match. Otherwise, it returns NULL to indicate no match was found.|
| [ft_strncmp](./srcs/string/ft_strncmp.c) | Compares the first n characters of the strings s1 and s2. It iterates through the characters of s1 and s2 using a while loop, checking if they are equal and if n is greater than 1. It returns the difference between the last characters compared, which represents the lexicographic order of the strings.|
| [ft_atoi](./srcs/string/ft_atoi.c) | Converts a string str to an integer value. It skips leading whitespace characters, handles an optional sign, and converts the remaining characters into an integer. It checks for overflow and underflow conditions and returns the converted integer.|
| [ft_isalpha](./srcs/check/ft_isalpha.c) | Checks if a character is an alphabetic character. It considers both uppercase letters (ASCII values 65 to 90) and lowercase letters (ASCII values 97 to 122) as alphabetic characters. If the input character falls within either of these ranges, the function returns the value a non-zero value; otherwise, it returns 0.|
| [ft_isdigit](./srcs/check/ft_isdigit.c) | Verifies whether a character is a digit. It considers characters in the range from 48 to 57, which corresponds to ASCII values for digits 0 to 9. If the input character falls within this range, the function returns a non-zero value; otherwise, it returns 0.|
| [ft_isalnum](./srcs/check/ft_isalnum.c) | Checks if a character is alphanumeric. It considers uppercase letters (ASCII values 65 to 90), lowercase letters (ASCII values 97 to 122), and digits (ASCII values 48 to 57) as alphanumeric characters. If the input character falls within any of these ranges, the function returns a non-zero value; otherwise, it returns 0.|
| [ft_isascii](./srcs/check/ft_isascii.c) | Checks if a character is within the ASCII range. It verifies if the character has an ASCII value between 0 and 127, inclusive. If the input character falls within this range, the function returns a non-zero value; otherwise, it returns 0.|
| [ft_toupper](./srcs/check/ft_toupper.c) | Converts a lowercase alphabetic character to its uppercase equivalent by subtracting 32 from its ASCII value. It returns the resulting uppercase character or the original character if it is not a lowercase alphabetic character.|
| [ft_tolower](./srcs/check/ft_tolower.c) | Converts an uppercase alphabetic character to its lowercase equivalent by adding 32 to its ASCII value. It returns the resulting lowercase character or the original character if it is not an uppercase alphabetic character.|


`60% OF THE TIME WORKS EVERY TIME`


WORK IN PROGRESS
