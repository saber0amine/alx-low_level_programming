# Linked List in C
This repository contains an implementation of a Linked List in C. Linked List is a data structure consisting of a group of nodes that represent a sequence together. Each node contains a piece of data and a reference to the next node in the sequence.

## Installation
To use the Linked List implementation in your C program, you need to include the linked_list.h header file in your code and compile the linked_list.c source file along with your program.

## Usage
To create a new Linked List, you first need to create a new LinkedList object using the create_linked_list()

LinkedList* linked_list = create_linked_list();
To add a new node to the end of the Linked List, you can use the add_node() function.


add_node(linked_list, data);
To remove a node from the Linked List, you can use the remove_node() function.

remove_node(linked_list, node_index);
To get the data stored in a particular node, you can use the get_node_data() function.


int data = get_node_data(linked_list, node_index);
To print the Linked List, you can use the print_linked_list() function.

print_linked_list(linked_list);
Finally, to free the memory used by the Linked List, you can use the destroy_linked_list() function.


destroy_linked_list(linked_list);
Example : 
#include <stdio.h>
#include "linked_list.h"

int main() {
    LinkedList* linked_list = create_linked_list();

    add_node(linked_list, 10);
    add_node(linked_list, 20);
    add_node(linked_list, 30);

    remove_node(linked_list, 1);

    int data = get_node_data(linked_list, 1);
    printf("Data at index 1: %d\n", data);

    print_linked_list(linked_list);

    destroy_linked_list(linked_list);

    return 0;
}
### License
This project is licensed under the MIT License - see the LICENSE file for details.
