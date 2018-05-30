#include <stdlib.h>

typedef struct messageBuffer{
   
    size_t msglen;
    size_t offset;
} buffer_message;

/* return pointer to the buffer contents in shared memory. */
static char *as_pointer(char *base, buffer_message *desc)
{
    return base+desc->offset;
} buffer_message;