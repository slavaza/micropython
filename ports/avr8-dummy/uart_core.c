#include <unistd.h>
#include "py/mpconfig.h"

// Receive single character dummy
int mp_hal_stdin_rx_chr(void) {
    return 0;
}

// Send string of given length dummy
void mp_hal_stdout_tx_strn(const char *str, mp_uint_t len) {
(void)str;
(void)len;
}
