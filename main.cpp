#include <stdio.h>
#include "mytrace_provider.h"

int main() {
    const char* myname = "Bill";
    MYTRACE_BEFORE_ENTER();
    printf("Hello, %s. Press <enter> to continue.\n", myname);
    int ch = getchar();
    MYTRACE_AFTER_ENTER(ch);
    return 0;
}
