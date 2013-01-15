#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7d7c9e8d, "module_layout" },
	{ 0x202c73d0, "kobject_put" },
	{ 0x414958b9, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x698ed35c, "put_pid" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0x5bd7b9fa, "kernel_sendmsg" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x97255bdf, "strlen" },
	{ 0xedd3453b, "__alloc_workqueue_key" },
	{ 0x44956be0, "CommSvc_Alloc" },
	{ 0xa89b26dd, "sock_release" },
	{ 0x86cb7b28, "init_timer_key" },
	{ 0xcefb6ace, "sock_create_kern" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x31392c8f, "mutex_unlock" },
	{ 0xe84dd843, "kobject_del" },
	{ 0x999e8297, "vfree" },
	{ 0x2c01d65d, "kernel_listen" },
	{ 0xdd365072, "__put_net" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x8ac22b9b, "mutex_trylock" },
	{ 0x4105be47, "kernel_sock_ioctl" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xf412c9ca, "CommSvc_Write" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0x9c5f0622, "kernel_setsockopt" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xb04f4abc, "kernel_connect" },
	{ 0xb86e4ab9, "random32" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0x64abf7a0, "mutex_lock_interruptible" },
	{ 0xdf25c7c0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x7eed8d81, "kobject_init_and_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x973e92f1, "mutex_lock" },
	{ 0x206596e1, "destroy_workqueue" },
	{ 0x9e03cd54, "kernel_sock_shutdown" },
	{ 0x521445b, "list_del" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0xf71a4afb, "sk_free" },
	{ 0x11731a0e, "kernel_getsockname" },
	{ 0xa1b1f46f, "kernel_getpeername" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0xe21df92c, "pid_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc12bb010, "init_net" },
	{ 0xd29cef09, "nf_unregister_hooks" },
	{ 0xaeedba73, "flush_workqueue" },
	{ 0x8553ec81, "CommSvc_RegisterImpl" },
	{ 0xd619a11e, "module_put" },
	{ 0xb06ac05e, "kernel_getsockopt" },
	{ 0x40b0f4e5, "kmem_cache_alloc" },
	{ 0xd63468b9, "queue_delayed_work_on" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0xc27487dd, "__bug" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xbbdd12de, "kernel_recvmsg" },
	{ 0x76bcf677, "kernel_accept" },
	{ 0xf031bb5d, "find_get_pid" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x30022f86, "nf_register_hooks" },
	{ 0xfd12932f, "CommSvc_ScheduleAIOWork" },
	{ 0x99a7543b, "kernel_bind" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x449fecb6, "CommSvc_UnregisterImpl" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0x11a9e198, "queue_delayed_work" },
	{ 0x419c4694, "CommSvc_WriteVec" },
	{ 0xcf3044a0, "Mvpkm_FindVMNamedKSet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "606EE0797294E45A3318567");
