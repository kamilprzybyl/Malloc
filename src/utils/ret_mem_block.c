#include "malloc.h"

void	*ret_mem_block(t_heap **heap, size_t heap_size, size_t block_size, size_t size)
{
	void	*ptr;
	t_heap	*new_heap;

	if (!(*heap) || !(ptr = find_free_block(*heap, size)))      // if new_heap doesn't exist or is full - create one
	{
		new_heap = setup_heap(heap_size, block_size);     // creates heap and saves it in temporary heap var
		if (!(*heap))      // if heap doesn't existed earlier - add to the linked list as our fist heap
		{
			*heap = new_heap;
			(*heap)->next = NULL;
		}
		else        // otherwise ad to the linked list as our last heap
		{
			t_heap  *temp_heap;

			temp_heap = *heap;
			while (temp_heap->next)
				temp_heap = temp_heap->next;
			temp_heap->next = new_heap;
			new_heap->prev = temp_heap;
		}
		ptr = ret_mem_block(heap, heap_size, block_size, size);     // go recursive and find free block on newly created heap
	}
	return (ptr);
}
