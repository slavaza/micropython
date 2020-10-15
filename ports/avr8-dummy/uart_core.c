#include <unistd.h>
#include "py/mpconfig.h"

// Send string of given length dummy
void mp_hal_stdout_tx_strn(const char *str, mp_uint_t len) {
(void)str;
(void)len;
}

