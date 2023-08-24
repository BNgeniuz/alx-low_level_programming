#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct list_s - singly
 * @str: str
 * @len: str length
 * @next: next node list
 *
 * Description: singly
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif