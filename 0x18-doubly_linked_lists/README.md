# 0x18.C - Doubly linked lists

## Learning Objectives

### What is a doubly linked list?
A doubly linked list is a linear data structure that contains an extra (aka previous) pointer, together with the next data and pointer that are in a singly linked list. Reversing is very easy with doubly linked lists, as is deletion. It can also allocate memory very easily during its execution. A disadvantage to doubly linked lists is their memory use is higher in comparison to arrays and singly linked lists, due to the extra pointer.

### How do you use doubly linked lists?
```
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
```

```
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
one->prev = NULL;

two->next = three;
two->prev = one;

three->next = NULL;
three->prev = two;

/* Save address of first node in head */
head = one;
```

## More Info
Please use this data structure for the project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### 0. Print list
Write a function that prints all the elements of a `dlistint_t list`.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

### 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.
- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.
- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### 4. Free list
Write a function that frees a `dlistint_t` list.
- Prototype: `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Write a function that returns the nth node of `dlistint_t` list.
- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- where `index` is the index of the node, starting from `0`
- if the node does not exist, return `NULL`

### 6. Sum list
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
- Prototype: `int sum_dlistint(dlistint_t *head);`
- if the list is empty, return `0`

### 7. Print list backward
Write a function that prints all the elements of a `dlistint_t` backward.
- Prototype: `size_t print_dlistint_backward(const dlistint_t *h);`
- Return: the number of nodes

### 8. Delete at index
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.
- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed
