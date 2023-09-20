#include "simpleshell.h"
size_t lista_len(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
char **lista_l_harf(list_t *head)
{
	list_t *node = head;
	size_t i = lista_len(head); 
	size_t j;
	char **strs;
	char *str;
	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strtole(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}
		str = _strnoskha(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	return (strs);
}
size_t etbaa_lista(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		_da3(howl_rakam(h->num, 10, 0));
		_da3harf(':');
		_da3harf(' ');
		_da3(h->str ? h->str : "(nil)");
		_da3("\n");
		h = h->next;
		i++;
	}
	return (i);
}
list_t *node_bedaya_b(list_t *node, char *prefix, char c)
{
	char *p = NULL;
	while (node)
	{
		p = bedaya_b(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}
ssize_t hat_node_edkhal(list_t *head, list_t *node)
{
	size_t i = 0;
	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}