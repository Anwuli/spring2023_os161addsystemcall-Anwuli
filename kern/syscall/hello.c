#include<types.h>
#include<lib.h>
#include<syscall.h>
int sys_hello(void){
    kprintf("Hello CSE4001!\n");    
    return 0; 
}
