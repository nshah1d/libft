# 42: LIBFT
[Personal website which contains my current and past projects being undertaken at 42.](https://42.nauman.cc/)<br />
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
<br/>
`WORKS ON MY MACHINE`<br/>
<br/>

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
<br/>

# Part II
Now, it's time to take this project to the next level in the second phase! You'll be flexing your coding muscles by implementing a range of functions that either don't exist in the libc library or have a unique twist to them.<br/>
<br/>
These additional functions serve multiple purposes and are like precious building blocks for creating even more awesome functions. They open up a world of possibilities and give your project a boost in utility and versatility.<br/>
<br/>
But what do these functions do, you ask? Well, they can do all sorts of magical things! They might handle complex calculations, manipulate strings in creative ways, or even perform specialized tasks that are crucial for the overall development of your project. The sky's the limit!<br/>
<br/>
By incorporating these extra functions, you're not only expanding the functionality of your project, but you're also unlocking a wider range of capabilities to harness throughout its development. It's like adding superpowers to your coding arsenal!<br/>
<br/>
So, get ready to dive into the exciting world of these unique functions. Let your creativity run wild and show off your coding wizardry by bringing something truly extraordinary to the table. The more you explore and incorporate these functions, the more incredible your project will become!<br/>
<br/>
| Function      | Description  |
| :--------------:| :----------:|
| [ft_striteri](./srcs/string/ft_striteri.c) | Applies a function f to each character of the string s, along with its corresponding index. It checks if both s and f are valid pointers before proceeding. It initializes a counter i to keep track of the index and iterates over the characters of the string s, applying the function f with the current index and character.|
| [ft_strmapi](./srcs/string/ft_strmapi.c) | Applies a function f to each character of the string s, generating a new string with the modified characters. It first determines the length of the input string and allocates memory for the new string. Then, it iterates over the characters of the input string, applying the function f and storing the result in the new string. The resulting modified string is returned.|
| [ft_substr](./srcs/string/ft_substr.c) | Extracts a substring from a string s starting at index start with a specified length len. It allocates memory for the substring, copies the characters from s to the substring, and returns the pointer to the substring.|
| [ft_strjoin](./srcs/string/ft_strjoin.c) | Concatenates two strings s1 and s2 into a new string. It checks if either s1 or s2 is NULL, returning NULL in that case. It allocates memory for the new string based on the combined length of s1 and s2, and then copies the characters from s1 and s2 into the new string. Finally, it adds a null terminator and returns the pointer to the new string.|
| [ft_strtrim](./srcs/string/ft_strtrim.c) | Trims the leading and trailing characters from a string s1 that match any character in the set set. It allocates memory for the trimmed string, copies the non-matching characters from s1 to the new string, adds a null terminator, and returns the pointer to the trimmed string.|
| [ft_split](./srcs/string/ft_split.c) | Splits the string s into an array of strings based on the delimiter character c. It counts the number of words in the string, allocates memory for the array of strings, and then splits the string into individual words, creating an array of strings. The resulting array of strings is returned.|
| [ft_itoa](./srcs/string/ft_itoa.c) | Converts an integer n into a string representation. It determines the length of the number, allocates memory for the string, and converts each digit of the number into a character by dividing and modulo operations. The resulting string is returned, with a negative sign added if necessary.|
| [ft_putchar_fd](./srcs/print/ft_putchar_fd.c) | Writes the character c to the specified file descriptor fd. It uses the write system call to write a single character to the file descriptor. The character c is passed as the address of a memory location containing the character, and the size of 1 is specified to write exactly one byte.|
| [ft_putstr_fd](./srcs/print/ft_putstr_fd.c) | Writes the string s to the specified file descriptor fd. It first checks if the string s is not null, and then uses the write system call to write the entire string to the file descriptor. The number of bytes to write is calculated with the use of a helper function "str_len", as each character requires exactly one byte.|
| [ft_putendl_fd](./srcs/print/ft_putendl_fd.c) | Writes the string s to the specified file descriptor fd, followed by a newline character. It first checks if the string s is not null, and then uses the write system call to write the entire string to the file descriptor. The length of the string is obtained using the "str_len" function. After writing the string, it writes a newline character ('\n') to the file descriptor to move to the next line.|
| [ft_putnbr_fd](./srcs/print/ft_putnbr_fd.c) | Writes an integer n to the specified file descriptor fd. It uses a custom base conversion mechanism to convert the integer into a string representation based on the decimal digits. The function checks for valid base input and handles negative numbers. It recursively divides the number by the base length and writes the corresponding character to the file descriptor until the entire number is converted.|
<br/>

# Bonus
Hold on tight, because we've reached the thrilling final component of this project! It's time to dive deep into the captivating realm of list manipulation. Get ready to unleash your coding skills and take on a set of functions specially crafted for working with lists.<br/>
<br/>
These functions are like secret weapons that will supercharge your list-handling capabilities. They're designed to give you valuable tools for manipulating and managing lists with ease and finesse. Think of them as your trusty sidekicks in the world of data structures!<br/>
<br/>
By engaging with this section, you'll not only expand your understanding of data structures but also refine your programming proficiency in handling linked lists. It's an exciting opportunity to level up your skills and become a master in manipulating these powerful data structures.<br/>
<br/>
Incorporating these functions into your project opens up a whole new avenue for exploring the intricacies of list operations. You'll have the chance to dive deep into the world of linked lists and strengthen your grasp of data manipulation techniques.<br/>
<br/>
So, gear up for this final adventure and let's conquer the realm of list manipulation together. Get ready to code like never before and unleash the true potential of your project!ding wizardry by bringing something truly extraordinary to the table. The more you explore and incorporate these functions, the more incredible your project will become.<br/>
<br/>
| Function      | Description  |
| :--------------:| :----------:|
| [ft_lstnew](./srcs/list/ft_lstnew.c) | Creates a new node for a linked list and initializes it with the given 'content'. It allocates memory for the new node using 'malloc', and if the allocation fails, it returns NULL. The 'content' is set to the provided input, and the 'next' pointer is initialized to NULL. Finally, it returns a pointer to the newly created node.|
| [ft_lstadd_front](./srcs/list/ft_lstadd_front.c) | Adds the given element 'new' to the front of the linked list pointed to by 'lst'. If 'lst' or 'new' is NULL, the function returns. The 'next' pointer of 'new' is set to the current first element of the list, and 'new' becomes the new first element by updating the 'lst' pointer to point to it.|
| [ft_lstsize](./srcs/list/ft_lstsize.c) | Calculates and returns the number of nodes in a given linked list 'lst'. It initializes a variable 'i' to 0 and then iterates through the list using a loop, incrementing 'i' for each node encountered until the end of the list is reached (lst becomes NULL). The function then returns the final value of 'i', which represents the total number of nodes in the list.|
| [ft_lstlast](./srcs/list/ft_lstlast.c) | Returns a pointer to the last node of a linked list 'lst'. If 'lst' is NULL (i.e., the list is empty), it returns NULL. The function iterates through the list using a loop, moving the 'lst' pointer to the next node until it reaches the last node (where 'next' is NULL). Then, it returns the 'lst' pointer, which now points to the last node of the list.|
| [ft_lstadd_back](./srcs/list/ft_lstadd_back.c) | Adds the given element 'new' to the end of the linked list pointed to by 'lst'. If 'lst' or 'new' is NULL, the function returns. If 'lst' is an empty list, 'new' becomes the first element. Otherwise, the function iterates through the list until the last element is reached and links 'new' to it.|
| [ft_lstdelone](./srcs/list/ft_lstdelone.c) | Deletes a single node 'lst' from the linked list and frees its content using the 'del' function, then deallocates the memory for the node. However, it fails to remove 'lst' from the list fully, as it only sets the local 'lst' pointer to NULL. The list re-linking must be done externally.|
| [ft_lstclear](./srcs/list/ft_lstclear.c) | Clears the entire linked list pointed to by 'lst' and deallocates memory for each node. The 'del' function is used to free the memory associated with the content of each node. If 'lst' is NULL, 'del' is NULL, or the list is already empty, the function returns. The function recursively calls itself with the next node until the end of the list is reached. Then, it frees the content of the current node, deallocates the node itself, and sets 'lst' to NULL.|
| [ft_lstiter](./srcs/list/ft_lstiter.c) | Iterates through a linked list 'lst' and applies the function 'f' to each node's content. If 'lst' or 'f' is NULL, the function returns. The loop runs while there are still nodes in the list. Within each iteration, the 'f' function is called with the content of the current node, and the 'lst' pointer is moved to the next node in the list.|
| [ft_lstmap](./srcs/list/ft_lstmap.c) | Creates a new linked list by applying the function 'f' to the content of each node in the input list 'lst'. If 'lst', 'f', or 'del' is NULL or if memory allocation fails, it returns NULL. It uses 'lst_new' to create new nodes and links them together to form the resulting list. If any memory allocation fails during the process, it clears the already created nodes and returns NULL. The 'del' function is used to free the memory allocated for each node's content if needed.|
<br/>

# Extension
Hold your excitement because there's more to this project than meets the eye! Alongside the required functionalities, I've come up with a bunch of amazing supplementary functions that will add tremendous value and benefit to our code. These functions may not be mandatory, but they serve as incredible auxiliary or helper functions.<br/>
<br/>
Their purpose is simple yet powerful: to provide extra support and make implementing the required functionalities a breeze. These optional functions work behind the scenes, enhancing the overall efficiency, readability, and extensibility of our code. We're talking about effective programming practices at their finest!<br/>
<br/>
By incorporating these optional functions, we're taking our project to the next level. They bring an extra layer of awesomeness, making our code shine brighter than ever before. With their help, we'll write cleaner, more efficient code that's a joy to work with.<br/>
<br/>
So, let's embrace these supplementary functions and unleash their full potential. They're the secret sauce that will make our project truly outstanding. Get ready to witness the magic as our code becomes more efficient, readable, and extensible than ever before!<br/>
<br/>
| Function      | Description  |
| :--------------:| :----------:|
| [ft_isspace](./srcs/check/ft_isspace.c) | Checks if a character is a whitespace character. It considers characters with ASCII values between 9 and 13 (inclusive) as well as the space character (ASCII value 32) as whitespace characters. If the input character falls within any of these ranges, the function returns a non-zero value; otherwise, it returns 0.|
<br/>

# Unleashed Potential
As we near the end of this incredible coding adventure, we can't help but feel a sense of accomplishment. We've conquered challenges, adhered to strict guidelines, and poured our hearts and minds into creating a remarkable project.<br/>
<br/>
But this is not just an ending; it's a beginning of something greater. Our journey through this project has expanded our coding skills, deepened our understanding of programming principles, and ignited a passion for crafting elegant and efficient code.<br/>
<br/>
As we bid farewell to this project, let's take a moment to reflect on how far we've come. We've embraced the Norm, followed project-specific requirements, and pushed the boundaries of our creativity. We've written functions that dance with elegance, embodying the essence of good programming practices. And let's not forget the Makefile, the unsung hero of our project, orchestrating the compilation process with precision and efficiency. Together, we've woven a masterpiece of code that reflects our dedication, skill, and unwavering passion for the art of programming.<br/>
<br/>
But our coding adventure doesn't end here. It's merely a stepping stone towards even greater feats. Armed with the knowledge and experience gained from this project, we're ready to tackle new challenges, explore uncharted territories, and continue honing our coding craft.<br/>
<br/>
So let's celebrate this ending as a new beginning, a launching pad for future endeavors. The world of coding awaits us with open arms, filled with endless possibilities and opportunities to make a difference. Let's take what we've learned and shine brightly as we write the next chapter of our coding journey.<br/>
<br/>
Farewell, magnificent project! You have taught us valuable lessons, sparked our passion for coding, and brought out the best in us. Onward we go, armed with newfound skills and the determination to create something extraordinary. The future is ours to code!<br/>
<br/>
<br/>
`60% OF THE TIME WORKS EVERY TIME`
<br/>
