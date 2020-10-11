#include "lib.h"
bool buf_read_unit(CBuff* buf, uint8_t* data) {
    if (buf_avail_to_read(buf)) {
        *data = buf->buffer[buf->tail++];
        buf->tail %=buf->max;
        return true;
    } else {
        return false;
    }
}
bool buf_write_unit(CBuff* buf, uint8_t data) {
    if (buf_avail_to_write(buf)) {
        buf->buffer[buf->head++] = data;
        buf->head %= buf->max;
        return true;
    } else {
        return false;
    }
}
size_t buf_read(CBuff* buf, size_t size, uint8_t* data) {
    // no need to check for head or tail collission because avail wont allow that
    size_t avail, read_amount, return_data, final_pos;
    avail = buf_avail_to_read(buf);
    read_amount = min(avail, size);
    return_data = size - read_amount;
    final_pos = buf->tail + read_amount;
    if (final_pos > buf->max) {
        size_t first_pos = buf->max - buf->head;
        read_amount -= first_pos;
        for (int i = 0; i < first_pos; i++) {
            data[i] = buf->buffer[buf->tail + i];
        }
        buf->tail = 0;
        data += first_pos;
    }
    for (int i = 0; i < read_amount ; i++) {
        data[i] = buf->buffer[buf->tail+i];
    }
    buf->tail +=  read_amount;
    return return_data;
}

/* writes the data given by buffer to circular buffer
 * returns amount of data left to write. ie remaining data that need to be written to circular buffer
 */
size_t buf_write(CBuff* buf, size_t size, uint8_t* data) {
    // no need to check for head or tail collission because avail wont allow that
    size_t avail, write_amount, return_data, final_pos;
    avail = buf_avail_to_write(buf);
    write_amount = min(avail, size);
    return_data = size - write_amount;
    final_pos = buf->head + write_amount;
    if (final_pos > buf->max) {
        size_t first_pos = buf->max - buf->head;
        write_amount -= first_pos;
        for (int i = 0; i < first_pos; i++) {
            buf->buffer[buf->head + i] = data[i];
        }
        buf->head = 0;
        data += first_pos;
    }
    for (int i = 0; i < write_amount ; i++) {
        buf->buffer[buf->head+i] = data[i];
    }
    buf->head +=  write_amount;
    return return_data;
}
