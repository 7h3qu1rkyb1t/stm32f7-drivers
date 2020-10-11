#pragma once
#include <stdio.h>
#include<stdint.h>

#define min(a, b) a > b ? b :a
#define buf_avail_to_read(buf) (buf->max + buf->head - buf->tail) % buf->max
#define buf_avail_to_write(buf) (buf->max + buf->tail - buf->head -1) % buf->max

typedef enum {
    false,
    true
}bool;

/* head will always be ahead of tail. ie tail cant cross head but can reach
 * head cant reach tail 
 * max available to write is maxBuf - 1 
 * if head == tail then buf is empty
 * if head - tail == 1 then buf is full
 */
typedef struct {
    uint8_t* buffer;
    size_t head;
    size_t tail;
    size_t max;
} CBuff;


#define buf_reset(buf) buf->tail = buf->head = 0

#define buf_is_full(buf) (bool)((buf->head + 1) == buf->tail)

#define buf_is_empty(buf) (bool)(buf->head  == buf->tail)

bool buf_read_unit(CBuff* buf, uint8_t* data);
bool buf_write_unit(CBuff* buf, uint8_t data);
size_t buf_read(CBuff* buf, size_t size, uint8_t* data);

/* writes the data given by buffer to circular buffer
 * returns amount of data left to write. ie remaining data that need to be written to circular buffer
 */
size_t buf_write(CBuff* buf, size_t size, uint8_t* data);
