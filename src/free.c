#include "malloc.h"

void	free(void *ptr)
{
	t_heap	*heap;

	if (!ptr)
		return;
	ptr = ptr - sizeof(t_block);        // we need to back pointer from actual block of memory to its metadata
	((t_block *)ptr)->size = 0;
	((t_block *)ptr)->is_free = true;
	heap = ((t_block *)ptr)->heap;
	heap->used_blocks -= 1;  
	if (!heap->used_blocks)     // if every heap's block is free - return heap back to RAM
	{
		if (heap->prev)     // if heap isn't the only one heap - return heap using munmap
		{
			heap->prev->next = heap->next;
			munmap((void *)heap, heap->heap_size);
		}
	}
}
