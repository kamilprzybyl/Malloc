#include "malloc.h"

void *find_free_block(t_heap *heap, size_t size)
{
    t_heap      *temp_heap;
    t_block     *temp_block;

    temp_heap = heap;
    while (temp_heap)
    {
        temp_block = ((void *)temp_heap + sizeof(t_heap));       // heap's shift from metadata pointer to actual memory pointer
        while (temp_block)
        {
            if (temp_block->is_free)          // once block is free, return the pointer
            {
                temp_heap->used_blocks += 1;
                temp_block->size = size;      // mark as not free already
                temp_block->is_free = false;      // mark as not free already
                return ((void *)temp_block + sizeof(t_block));    // block shift from structure to actual memory block
            }
            temp_block = temp_block->next;     // go to the next block
        }
        temp_heap = temp_heap->next;
    }

    return (NULL);
}