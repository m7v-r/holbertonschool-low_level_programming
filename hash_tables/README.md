# C - Hash Tables

## Description
This project focuses on the implementation and understanding of Hash Tables in C. It covers hash functions, collision handling using chaining, and memory management for complex data structures.

## Learning Objectives
* Understand the concept of a hash function.
* Implement collision handling through linked lists (chaining).
* Manage dynamic memory for arrays and structures.

## Requirements
* Compiled on Ubuntu 20.04 LTS using `gcc`.
* Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* Code style: `Betty`.

## Data Structures
```c
typedef struct hash_node_s {
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s {
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
