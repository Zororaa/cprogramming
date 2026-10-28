#include <stdio.h>
#include <stdlib.h>

typedef struct Block{
    int size; 
    int free;
    struct Block *next;
}Block;

Block block1, block2, block3;

void printBlocks(Block *head){
    Block *current = head;

    printf("\nMemory Blocks:\n");

    while (current != NULL){
        printf("Address: %p | Size: %d | Free %d | Next: %p\n",
        (void *)current,
        current->size,
        current->free,
        (void *)current->next
    );
    current = current->next;
    }

    printf("\n");
};

Block *allocate(Block *head, int requestedSize){
    Block *current = head;

    while (current != NULL){
        printf("Checking block at %p\n", (void *)current);

        if (current->free && current->size >= requestedSize)
        {
            current->free = 0;

            printf(
                "Allocatrd block at %p (size %d)\n", 
                (void *)current,
                current->size
            );

            return current;
        }

        current = current->next;  
    }

    printf("No suitable block found!\n");
    return NULL;
};

void freeBlock(Block *block){
    if (block != NULL){
        block->free = 1;

        printf("Freed block at %p\n", 
        (void *)block
    );
    }
}

int main(void){

    block1.size = 100;
    block1.free = 1;
    block1.next = &block2;

    block2.size = 50;
    block2.free = 1;
    block2.next = &block3;

    block3.size = 200;
    block3.free = 1;
    block3.next = NULL;

    printBlocks(&block2);
    Block *p1 = allocate(&block1, 75);
    
    printBlocks(&block1);

    Block *p2 = allocate(&block1, 150);

    printBlocks(&block1);

    freeBlock(p1);

    return 0;
}