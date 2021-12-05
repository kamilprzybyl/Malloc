#include "malloc.h"

t_heap	*tiny;
t_heap	*small;
t_heap	*large;

void	*malloc(size_t size)
{
	void	*ptr;

	if (!size)
		return (NULL);

	size = size + sizeof(t_block);      // we have to add metadata size to block 
	if (size <= (size_t)TINY_BLOCK_SIZE)
		ptr = ret_mem_block(&tiny, TINY_HEAP_SIZE, TINY_BLOCK_SIZE, size);
	else if (size <= (size_t)SMALL_BLOCK_SIZE)
		ptr = ret_mem_block(&small, SMALL_HEAP_SIZE, SMALL_BLOCK_SIZE, size);
	else
		ptr = ret_mem_block(&large, LARGE_HEAP_SIZE, LARGE_BLOCK_SIZE, size);
	return (ptr);
}
