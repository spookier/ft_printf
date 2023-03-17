
# ft_printf

ft_printf is a custom implementation of the standard printf function in C

The function allows you to format and print text to the console or to a file, just like the standard printf function


## Installation

To use ft_printf, simply clone the repository and compile it with your project:

```bash
git clone https://github.com/spookier/ft_printf.git
cd ft_printf
make
```
This will generate a static library called libftprintf.a that you can link with your project


## Usage

Using ft_printf is very similar to using the standard printf function

The function takes a format string and a list of arguments, and formats the string according to the specified format specifiers

Here's an example:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
```

This will print the following output to the console:
```
Hello, world! The answer is 42.
```

The function supports a wide range of format specifiers, including %c, %s, %p, %d, %i, %u, %x, and %X
