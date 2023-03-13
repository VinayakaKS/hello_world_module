//Header section
#include <linux/module.h>

//Entry section
static int __init hello_world_init(void){
    pr_info("Hello world\n");
    return 0;
}

//Cleanup function
static void __exit hello_world_exit(void){
    pr_info("Bye Bye\n");
}

//Registration section
module_init(hello_world_init);
module_exit(hello_world_exit);

//Description section
MODULE_AUTHOR("Vinayaka KS");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello world printing");
