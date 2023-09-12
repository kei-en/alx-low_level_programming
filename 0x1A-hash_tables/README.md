# C - Hash tables

## Contains:

## Header File :file_folder:

- [hash_tables.h](./hash_tables.h): Header file containing definitions and prototypes for
  all types and functions written for the project.

## Tasks :page_with_curl:

- **0. >>> ht = {}**

  - [0-hash_table_create.c](./0-hash_table_create.c): C function that creates a `hash_table_t`
    hash table.
    - If the function fails - returns `NULL`.
    - Otherwise - returns a pointer to the new hash table.

- **1. djb2**

  - [1-djb2.c](./1-djb2.c): C function that implements the djb2 hashing algorithm.

- **2. key -> index**
  - [2-key_index.c](./2-key_index.c): C function that returns the index at which a key/value
    pair should be stored in the array of a `hash_table_t` hash table.
- **3, >>> ht['betty'] = 'cool'**

  - [3-hash_table_set.c](./3-hash_table_set.c): C function that adds an element to a
    `hash_table_t` table.
    - The parameter `key` cannot be an empty string.
    - Returns `1` on success, `0` otherwise.

- **4. >>> ht['betty']**

  - [4-hash_table_get.c](./4-hash_table_get.c): C function that retrieves a value associated
    with a key in a `hash_table_t` hash table.
    - If `key` cannot be matched - returns `NULL`.
    - Otherwise - returns the value associated with `key`.

- **5. >>> print(ht)**

  - [5-hash_table_print.c](./5-hash_table_print.c): C function that prints a `hash_table_t`
    hash table.
    - Prints each `key`/`value` pair in the order they appear in the array of the hash table.
    - Does not print anything if the hash table is `NULL`.

- **6. >>> del ht**
  - [6-hash_table_delete.c](./6-hasb_table_delete.c): C function that deletes a
    `hash_table_t` hash table.
