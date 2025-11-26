# 0x17. C – Doubly Linked Lists

This project implements a set of functions to create and manage doubly linked lists in C.  
A doubly linked list contains nodes that can be traversed in both directions using `prev` and `next` pointers.

---

## Data Structure

The project uses the following structure:

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

Each node stores:
- `n`: an integer value
- `prev`: pointer to the previous node
- `next`: pointer to the next node

---

## Function Descriptions

### 0. print_dlistint
**File:** 0-print_dlistint.c  
Prints all the values in the list, starting from the head and moving forward using the `next` pointer.  
Returns the total number of nodes printed.

---

### 1. dlistint_len
**File:** 1-dlistint_len.c  
Counts and returns the number of elements in the list.  
Traverses the list from head to end.

---

### 2. add_dnodeint
**File:** 2-add_dnodeint.c  
Adds a new node at the beginning of the list.  
The new node becomes the new head.  
Both `prev` and `next` pointers are updated correctly.

---

### 3. add_dnodeint_end
**File:** 3-add_dnodeint_end.c  
Adds a new node at the end of the list.  
Traverses to the last node, connects the new node, and updates its `prev` pointer.

---

### 4. free_dlistint
**File:** 4-free_dlistint.c  
Frees every node in the list to prevent memory leaks.  
Moves through the list using the `next` pointer and frees each node.

---

### 5. get_dnodeint_at_index
**File:** 5-get_dnodeint_at_index.c  
Returns the node at a specified index (0-based).  
If the index does not exist, returns NULL.

---

### 6. sum_dlistint
**File:** 6-sum_dlistint.c  
Returns the sum of all integer values stored in the list.  
If the list is empty, returns 0.

---

### 7. insert_dnodeint_at_index
**File:** 7-insert_dnodeint_at_index.c  
Inserts a new node at a given index in the list.  
Handles three cases:
- Insert at the beginning  
- Insert in the middle  
- Insert at the end  
Correctly reconnects surrounding nodes.

Returns the new node on success, or NULL on failure.

---

### 8. delete_dnodeint_at_index
**File:** 8-delete_dnodeint.c  
Deletes a node at a specified index.  
Updates the surrounding `prev` and `next` pointers before freeing the node.  
Returns 1 on success and -1 on failure.

---

## Compilation Example

Compile using:

gcc -Wall -Werror -Wextra -pedantic <main_file.c> <source_files> -o output

Example:

gcc 3-main.c 3-add_dnodeint_end.c 2-add_dnodeint.c 0-print_dlistint.c -o test

---

## Author

Created by **Lara Z.**  
Holberton School — Doubly Linked Lists Project

