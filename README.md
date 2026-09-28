*This project was created as part of program 42 curriculum by hasandri.*

## DESCRIPTION

This project is Part Of The Second Project Of The Common Core Of The Course At 42, ft_printf is a reimplementation of the libc printf function, aiming to reproduce its behavior by handling different formats and conversions in C.
This is a fundamental project that helps students learn to master low-level C, memory management, and a detailed understanding of how variadic functions work.

## INSTRUCTIONS

#### installation
``` bash 
git clone git@vogsphere.42antananarivo.mg:vogsphere/intra-uuid-5e2bcb4f-19c6-4feb-a5e1-b38f0a35cd43-7190518-hasandri
```
   
#### generate all the object file
``` bash 
make 
```
#### delete all the object file   
``` bash 
make clean 
```
#### delete all the object file and the static library
``` bash 
make fclean 
```
#### delete the object files, the static library and rebuild it   
``` bash 
make re 
```
#### To run one file
``` bash
cc -Wall -Wextra -Werror main.c -L. -lft
```
- create main.c
``` bash
touch main.c
```
- exemple of main.c
``` bash
#include "ft_printf.h"

int	main(void)
{
	//code
}

```

- -L. -> Adds the current directory (.) to the list of directories where the linker searches for
- -lft -> Tells the linker to search for a library named libftprintf.a

## RESOURCES

For this project, I consulted several resources:
- man to get the prototpes of my functions.

- YouTube and Claude AI to watch tutorials and better understand various concepts through practical examples.

- I always relied on every advice from many websites in the whole part of the project.
websites : 	
		42-cursus.gitbook
		W3school
		Koor
		IBM
		Medium
		Openclassroom
- Additionally, I carried out personal research using Google and peer to peer learning to deepen my understanding and resolve specific issues encountered during the project.


## ft_printf
### Short description of each function

|name			|description									|
|:--------------|:----------------------------------------------|
|`ft_printf`		|for parsing + conversion
|`ft_putchar`		|print integer
|`ft_putstr`		|print a string
|`ft_putnbr`		|displays an integer on standard output by converting it to characters.
|`ft_putnbr_uns`	|displays an unsigned integer on standard output by converting it to characters without handling negative signs.
|`ft_put_hex`		|recursively displays an unsigned lowerrcase hexadecimal integer and returns the total number of characters written.
|`ft_put_hexx`		|recursively displays an unsigned uppercase hexadecimal integer and returns the total number of characters written.
|`ft_put_ptr`		|displays the address of a pointer in lowercase hexadecimal preceded by 0x (or (nil) if the pointer is NULL) and returns the total number of characters written.
## AUTHOR
*This project was created by 42 student.*
