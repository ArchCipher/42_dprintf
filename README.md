# <p align="center"> ft_dprintf - File Descriptor Printf </p>

**42 Project | Core Printf Implementation**  
**Objective:** Implement a file descriptor-aware version of `printf` that wraps the core `ft_vdprintf` implementation.

---

## Overview

**ft_dprintf** is a wrapper around `ft_vdprintf` that allows writing formatted output to any file descriptor. Unlike standard `printf` which only writes to stdout, `ft_dprintf` can write to `stderr`, custom file descriptors, or any other file descriptor.

**Development Context:** This implementation was created when working on `minishell`, where error messages needed to be printed to `stderr` instead of `stdout`.

**Note:** `ft_dprintf` is a wrapper around `ft_vdprintf`, which contains the core implementation. See `ft_vdprintf/README.md` for details on the core implementation.

---

## Skills Demonstrated

- **File Descriptor I/O:** Writing to arbitrary file descriptors using `write()`
- **Variadic Functions:** Handling variable argument lists
- **Modular Design:** Wrapper around core implementation

---

## Project Structure

```
ft_dprintf/
├── ft_dprintf.c      # Main dprintf wrapper function
├── ft_dprintf.h      # Header that includes ft_vdprintf.h
└── Makefile          # Build configuration

../ft_vdprintf/       # Core implementation (see ft_vdprintf/README.md)
├── ft_vdprintf.c     # Core vdprintf function
├── ft_vdprintf.h     # Core header with all declarations
├── ft_parser.c       # Format string parsing and specifier handling
├── ft_print_types.c  # Character and string printing functions
├── ft_print_int.c    # Integer conversion and formatting
└── ft_printf_utils.c # Helper functions (atoi, strlen, etc.)
```

**Key Files:**
- **ft_dprintf.c** - Wrapper that handles variadic arguments and calls vdprintf
- See `ft_vdprintf/` for the core implementation files

---

## Function Prototypes

```c
// Main dprintf function (wrapper around vdprintf)
int ft_dprintf(int fd, const char *fmt, ...);
```

**Returns:**
- Number of characters written
- -1 on error

---

## Supported Features

For detailed information about supported format specifiers, flags, width, precision, platform-specific behavior, and technical implementation, see `ft_vdprintf/README.md`.

---

## Compilation

```bash
# Build the library
make

# Link with your program
gcc your_program.c -L./ft_dprintf -lftdprintf -o your_program
```

---

*This project demonstrates advanced C programming including system calls, variadic functions, and modular library architecture.*
