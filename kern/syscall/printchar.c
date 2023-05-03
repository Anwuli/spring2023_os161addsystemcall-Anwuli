#include<types.h>
#include<lib.h>
#include<syscall.h>

int sys_printchar(char letter) {
    kprintf("%c", letter);
    return 0;
}
