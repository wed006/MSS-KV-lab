#include <assert.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "pmkv.h"

#define MAX_VAL_LEN 64

pmkv* pmkv_open(const char *path, size_t pool_size, int force_create)
{
	// TODO: implement this
	return NULL;
}

void pmkv_close(pmkv *kv)
{
	// TODO: implement this
}

int pmkv_get(pmkv *kv, const char *key, size_t key_size, char *out_val, size_t *out_val_size)
{
	// TODO: implement this
	return 1;
}

int pmkv_put(pmkv *kv, const char *key, size_t key_size, const char *val, size_t val_size)
{
	// TODO: implement this
	return 1;
}

int pmkv_del(pmkv *kv, const char *key, size_t key_size)
{
	// TODO: implement this
	return 1;
}

int pmkv_count_all(pmkv *kv, size_t *cnt)
{
	// TODO: implement this
	return 1;
}

int pmkv_exists(pmkv *kv, const char *key, size_t key_size)
{
	// TODO: implement this
	return 0;
}
