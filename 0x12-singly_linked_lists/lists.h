#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>
#include <stdio.h>

typedef struct list_t{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;


/* Function prototypes */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
