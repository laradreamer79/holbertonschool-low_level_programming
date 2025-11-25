# 0x12 - Singly Linked Lists

This project introduces singly linked lists in C. It focuses on understanding how nodes work, how to handle pointers to structs, and how to manipulate linked list data structures.

## Data Structure

A node in this project is defined as:

struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
};
typedef struct list_s list_t;

Each node contains:
- A string
- The length of the string
- A pointer to the next node

## Files

0-print_list.c  
    Prints all elements of a list_t list.

1-list_len.c  
    Returns the number of elements in a list_t list.

2-add_node.c  
    Adds a new node at the beginning of the list.

3-add_node_end.c  
    Adds a new node at the end of the list.

4-free_list.c  
    Frees all nodes of a list.

lists.h  
    Header file containing struct definition and function prototypes.

## Function Prototypes

size_t print_list(const list_t *h);  
size_t list_len(const list_t *h);  
list_t *add_node(list_t **head, const char *str);  
list_t *add_node_end(list_t **head, const char *str);  
void free_list(list_t *head);

## Requirements

- All code must follow Betty style.
- No memory leaks.
- Compile with: gcc -Wall -Werror -Wextra -pedantic *.c

## Notes

- Always check if malloc returns NULL.  
- Duplicate strings using strdup.  
- If a node’s string is NULL, print (nil) with length 0.  
- Free both the string and the node in free_list.

## Author
LARA ALZANNAN - Holberton School

