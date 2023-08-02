#include <stdio.h>

// Define the custom data structure for the linked list
typedef struct listint_t {
    int value;
    struct listint_t* next;
} listint_t;

// Function to print all elements of the linked list
void print_list(listint_t* head) {
    listint_t* current = head;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }

    printf("\n");
}

// Example usage
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> NULL
    listint_t node1 = {1, NULL};
    listint_t node2 = {2, NULL};
    listint_t node3 = {3, NULL};

    node1.next = &node2;
    node2.next = &node3;

    // Print the linked list
    print_list(&node1);

    return 0;
}
