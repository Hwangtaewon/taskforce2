
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/desc.h>
#include <asm/pgtable.h>
#include <asm/current.h>
#include <linux/sched.h>
#include <linux/highmem.h>
#include <linux/preempt.h>
#include <asm/topology.h>
#include <linux/kthread.h>
#include <linux/kernel_stat.h>
#include <linux/percpu-defs.h>
#include <linux/smp.h>
#include <linux/delay.h>
#include <linux/vmalloc.h>
#include <linux/slab.h>>
#include <linux/spinlock.h>

static int hello_init(void)
{
	while(1)
		printk("normal task is running\n");
}


static void hello_exit(void)
{

	printk("end module\n=========================================================\n");

}


module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Dual BSD/GPL");



