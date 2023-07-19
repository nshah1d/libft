# 42 ABU DHABI
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
# Table of Content
| Function      | Description  |
| :--------------:| :----------:|
| [ft_memset](./srcs/memory/ft_memset.c) | Sets each byte of the memory block pointed to by str to the value c, up to a specified length n. It returns the pointer str after modifying the memory block.|
| ft_bzero |  Sets the first n bytes of the memory pointed to by s to zero. It iterates through the memory block by decrementing n, and for each iteration, it assigns the value 0 to the current byte pointed to by s.|
| ft_memcpy | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It returns a pointer to the destination memory area.|
| ft_memmove | Copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. It handles overlapping memory regions correctly by using a temporary buffer. It returns a pointer to the destination memory area.|
| ft_memchr | Searches for the first occurrence of the character c in the memory block pointed to by str, up to a specified length n. It iterates through the memory block using a while loop and checks if each byte matches c. If a match is found, it returns a pointer to that byte. If no match is found within the specified length, it returns NULL.|
| ft_memcmp |  Compares the memory blocks pointed to by s1 and s2 up to a specified length n. It iterates through the memory blocks using a while loop, comparing each byte. If a byte in s1 is not equal to the corresponding byte in s2, it returns the difference between the two bytes. If all bytes are equal within the specified length, it returns 0 to indicate that the memory blocks are equal.|
| ft_calloc |  Allocates memory for an array of elements with a specified count and n size. It checks for overflow, allocates memory using malloc, and zeroes out the memory before returning the pointer to the allocated memory.|
| ft_strlen | Calculates the length of a null-terminated string. It takes a pointer to a constant character array (str) as input. It initializes a variable i as 0 and then iterates through the characters of the string until it encounters the null terminator (‘\0’). For each character, it increments i. Finally, it returns the value of i, representing the length of the string.|
| ft_strdup | Duplicates a string src by allocating memory for a new string, copying the contents of src into it, and returning the pointer to the new string.|


`60% OF THE TIME WORKS EVERY TIME`

