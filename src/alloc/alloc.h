/*
    Simple pool allocator
    Uses boost::pool
*/

#include <stddef.h>

void *new_pool_allocator(size_t);
void *pool_allocator_alloc(void *handle);
void *pool_allocator_free(void *handle, void *item);
void delete_pool_allocator(void *handle);
