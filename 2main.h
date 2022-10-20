#ifndef MAIN_H_
#define MAIN_H_

#include <strarg.h>
#include <unistd.h>
#include <stdlib.h>

/** struct convert - defines a structure for symbols and functions
 * @sym: the operator
 * @f: function associated
 */

typedef struct conver
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int parser(cons char *format, conver_t f_list[], va_list args);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif /* MAIN_H */
