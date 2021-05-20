#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void) {
	printk(KERN_ALERT "Hello Matrix\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "Goodbye Matrix\n");
}

module_init(hello_init);
module_exit(hello_exit);
