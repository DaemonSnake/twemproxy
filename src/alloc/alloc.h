/*
    Simple pool allocator
    Uses boost::pool
*/

#include <stddef.h>

struct pool_allocator;

struct pool_allocator *new_pool_allocator(size_t);
void *pool_allocator_alloc(struct pool_allocator *handle);
void pool_allocator_free(struct pool_allocator *handle, void *item);
void delete_pool_allocator(struct pool_allocator *handle);
