# ft_printf
In this project I will create my own minimal version of printf, this project helped me learn variadic function in C.

## Installation & Usage
To use ft_printf, clone the repository and compile it with the following commands:
```bash
$ git clone https://github.com/yel-hadd/ft_printf.git ft_printf
$ cd ft_printf
$ make
```
Then, call the ft_printf function just like you would with the standard printf function.
```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s!", "world");
    return (0);
}
```
## Features
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.
## Contributing
Feel free to contribute to the library by submitting a pull request with new or improved functions. Please follow the code style and naming conventions used in the repository.
