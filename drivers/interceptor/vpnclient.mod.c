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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xdbc4d697, "dev_get_flags" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0xca01666d, "_raw_read_lock" },
	{ 0xda03c85b, "dst_release" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x3a8ad4dc, "interruptible_sleep_on" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x2e3a4921, "remove_proc_entry" },
	{ 0xce19bac5, "register_inet6addr_notifier" },
	{ 0xa1468e16, "dev_base_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86cb7b28, "init_timer_key" },
	{ 0xd83c57c2, "nf_register_hook" },
	{ 0xab4ff9c3, "skb_realloc_headroom" },
	{ 0xe972d4c, "in_dev_finish_destroy" },
	{ 0xf9fab63d, "dst_alloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xf206121d, "skb_trim" },
	{ 0xd91b720e, "netif_rx" },
	{ 0xe1e470ba, "__pskb_pull_tail" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x538383c0, "unregister_inet6addr_notifier" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf7b574c2, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x9c6e8918, "_raw_write_unlock" },
	{ 0x7d02520f, "_raw_read_unlock" },
	{ 0xe52592a, "panic" },
	{ 0xbffceec8, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe560f46b, "register_netdev" },
	{ 0x85c936bb, "skb_push" },
	{ 0x5413f231, "_raw_write_lock" },
	{ 0x6ed4557e, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x22d88e1d, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc12bb010, "init_net" },
	{ 0x54ee378c, "dev_kfree_skb_any" },
	{ 0xd619a11e, "module_put" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x537c18fc, "ip_route_input_common" },
	{ 0x904512c0, "__alloc_skb" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x50207c42, "alloc_netdev_mqs" },
	{ 0x2acd1dd5, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0x12095bb9, "create_proc_entry" },
	{ 0x8ee69235, "timeval_to_jiffies" },
	{ 0x360223f5, "ether_setup" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x72542c85, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5907ca7c, "nf_unregister_hook" },
	{ 0x1456ff36, "nf_afinfo" },
	{ 0xe09b68f3, "in6_dev_finish_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ee54c26, "unregister_netdev" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x4b411674, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x374cba29, "skb_put" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x587df050, "outer_cache" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

