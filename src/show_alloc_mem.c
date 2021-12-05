#include "malloc.h"

static size_t print_address(t_heap *heap)
{
	t_heap	*temp_heap;
	t_block	*temp_block;
	size_t	total;

	temp_heap = heap;
	total = 0;
	while (temp_heap)
	{
		temp_block = ((void *)temp_heap + sizeof(t_heap));       // heap's shift from metadata pointer to actual memory pointer
		while (temp_block)
		{
			if (!temp_block->is_free)
			{ 
				printf("%p - %p : %zu bytes\n", temp_block, temp_block->next, (temp_block->size - sizeof(t_block)));
				total = total + (temp_block->size - sizeof(t_block));
			}
			temp_block = temp_block->next;     // go to the next block
		}
		temp_heap = temp_heap->next;
	}
	return (total);
}

void show_alloc_mem()
{
	size_t  total;

	total = 0;
	printf("TINY : %p\n", tiny);
	total = total + print_address(tiny);
	printf("SMALL : %p\n", small);
	total = total + print_address(small);
	printf("LARGE : %p\n", large);
	total = total + print_address(large);
	printf("Total : %zu\n", total);
}
