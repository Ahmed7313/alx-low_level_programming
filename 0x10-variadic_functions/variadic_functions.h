#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - struct for conversion specifiers
 * @symbol: conversion specifier
 * @print: function to print
 */
typedef struct print
{
    char symbol;
    void (*print)(va_list args);
} printer_t;

void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
