// Author ilesh patel 

#ifndef CACHEBLOCKSTRUCTURE_HH_
#define CACHEBLOCKSTRUCTURE_HH_


#include <iostream>
struct cache_block{
	char *blk;
	char * tag;
	int vld;
	int lru;
	
} cache_block;
#endif 
