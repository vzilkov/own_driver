#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int hello_init(void){
    for(unsigned short i=0; i<10; i++)
        printk(KERN_ALERT "Hello Vlad; it’s your first driver which doesn’t do shit %d :/\n", i);
return 0;
}

static void hello_exit(void){
    for(unsigned short i=10; i>0; i--){
        printk(KERN_INFO "Goodbye Vlad No point in keeping this driver running. %d\n", i);
    }
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Vlad");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Vlad's first driver with GPL licence.");