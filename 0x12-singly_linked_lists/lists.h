#ifndef MAIN_H
#define MAIN_H
#include<string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct list_s - link list of singly
 * @str: string - string
 * @len: longness of the string
 * @next: direction to the next node
 *
 * Description: node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head_ref, char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
