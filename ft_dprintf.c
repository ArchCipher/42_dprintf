#include "ft_dprintf.h"

/*
	NAME
		ft_dprintf
	SYNOPSIS
		#include "ft_dprintf.h"
	PROTOTYPE
		int ft_dprintf(int fd, const char *, ...);
	DESCRIPTION:
		Prints a formatted string to the file descriptor.
		Conversions are: cspdiuxX%
	RETURN VALUE
		Returns the number of characters printed.
		The printf utility exits 0 on success, and >0 if an error occurs.
	EXTERNAL FUNC(S)
		write, va_start, va_arg, va_end
*/

int	ft_dprintf(int fd, const char *fmt, ...)
{
	int		ret;
	va_list	ap;

	va_start(ap, fmt);
	ret = ft_vdprintf(fd, fmt, ap);
	va_end(ap);
	return (ret);
}
