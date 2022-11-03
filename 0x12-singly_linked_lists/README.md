# 0x13 C - Singly linked lists

## Learning Objectives

### When and why do we use [linked lists vs arrays](https://www.geeksforgeeks.org/linked-list-vs-array/)?

**Arrays**
- Arrays store elements in contiguous memory locations, resulting in easily calculable addresses for the elements stores. This allows for faster access to an element at a specific index.
- Arrays are fixed in size.
- Memory is allocated at compile time.
- Arrays use less memory than linked lists.
- Elements can be accessed easily.
- Insertion and deletion operation takes time.

**Linked Lists**
- Linked lists are less rigid in their storage structure and elements are usually not stored in contiguous locations. They need to be stored with additional tags giving a reference to the next element.
- Linked lists are dynamic in size.
- They use more memory, since they store both data and address of the next node.
- Element accessing requires the traversal of whole linked list.
- Insertion and deletion operation is faster.

### How to build and use linked lists
```
typedef struct Node{
	int x;
	struct Node* next;
	} Node;`

int main(int argc, char* argv[]){
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -2;
	root.next->next = NULL

	printf("First: %d\n", root.x);
	printf("Second: %d\n", root.next->x);

	free(root.next);
	return (0);
}
```

## Tasks

### 0. Print list
Write a function that prints all the elements of a `list_t` list.
- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is `NULL`, print `[0] (nil)`
- `printf` is allowed

### 1. List length
Write a function that returns the number of elements in a linked `list_t` list.
- Prototype: `size_t list_len(const list_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `list_t` list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- `strdup` is allowed

### 3. Add node at the end
Write a function that adds a new node at the end of a `list_t` list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- `strdup` is allowed

### 4. Free list
Write a function that frees a `list_t` list.
- Prototype: `void free_list(list_t *head);`


