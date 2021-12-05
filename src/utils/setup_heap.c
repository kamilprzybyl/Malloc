#include "malloc.h"

static void	init_block(t_heap *heap, t_block *block)
{
	block->size = 0;
	block->is_free = true;
	block->next = NULL;
	block->heap = heap;
}

void	*setup_heap(size_t heap_size, size_t block_size)
{
	t_heap	*heap;
	t_block	*temp;
	size_t	i;

	heap = mmap(NULL, heap_size, PROT_READ | PROT_WRITE, 
				MAP_PRIVATE | MAP_ANON, -1, 0);
	temp = (void *)heap + sizeof(t_heap);
	i = sizeof(t_heap);     // first sizeof(t_heap) bytes are our heap's metadata so we need to skip it
	while (i < (heap_size - block_size))
	{
		init_block(heap, temp);
		temp->next = (void *)temp + block_size;
		i = i + block_size;
		temp = (void *)temp + block_size;
	}
	init_block(heap, temp);
	heap->heap_size = heap_size;
	heap->used_blocks = 0;
	return (heap);
}
