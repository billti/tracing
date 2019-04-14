#include <stdio.h>
#include "mytrace_provider.h"

int main() {
    const char* myname = "Bill";
    printf("Press CTRL-C when done\n\n");
    while(true) {
        MYTRACE_BEFORE_ENTER();
        printf("Hello, %s. Enter a character.\n", myname);
        int ch = getchar();
        MYTRACE_AFTER_ENTER(ch);
        // Consume/discard the newline
        getchar();
    }

    return 0;
}
