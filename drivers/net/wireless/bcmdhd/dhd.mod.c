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
	{ 0xa88e6e5c, "register_netdevice" },
	{ 0x3a0c5c00, "sdio_writeb" },
	{ 0x12006a2, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x414958b9, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd4fab16, "complete_and_exit" },
	{ 0xf58d48e9, "wiphy_free" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xdf2b03e4, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0xc5602f1f, "dev_set_drvdata" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xb59cc4d8, "send_sig" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x83ce82eb, "get_monotonic_boottime" },
	{ 0xdd500464, "cfg80211_inform_bss_frame" },
	{ 0xbdcbf2ba, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xde791d7, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0x1c3f30f, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xea03feb, "cfg80211_rx_mgmt" },
	{ 0x3dfe4d89, "filp_close" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86cb7b28, "init_timer_key" },
	{ 0x31392c8f, "mutex_unlock" },
	{ 0x791a61e7, "rfkill_register" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x4fc42fc1, "cfg80211_del_sta" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xab4ff9c3, "skb_realloc_headroom" },
	{ 0xeb691fe6, "kthread_create_on_node" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa33a0c65, "sdio_get_host_pm_caps" },
	{ 0x343a1a8, "__list_add" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45cda685, "cfg80211_mgmt_tx_status" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd91b720e, "netif_rx" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1e0701c5, "mmc_wait_for_req" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0xbed5a9f5, "kernel_read" },
	{ 0x75dc4e50, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf7b574c2, "del_timer_sync" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x42a80224, "netif_rx_ni" },
	{ 0xea1e6468, "__ieee80211_get_channel" },
	{ 0xb86e4ab9, "random32" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xb7cea388, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6ba970ff, "rfkill_alloc" },
	{ 0xdf25c7c0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xfc5c96ff, "kthread_stop" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x71c90087, "memcmp" },
	{ 0xbffceec8, "free_netdev" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0xb524cab5, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe560f46b, "register_netdev" },
	{ 0x795eaa2b, "dma_free_coherent" },
	{ 0x94c3908f, "mmc_set_data_timeout" },
	{ 0xd759644, "sdio_readl" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x85c936bb, "skb_push" },
	{ 0x973e92f1, "mutex_lock" },
	{ 0xf57b7ca7, "cfg80211_connect_result" },
	{ 0xb0641b9e, "wake_lock_active" },
	{ 0x8a96ee25, "dev_close" },
	{ 0x521445b, "list_del" },
	{ 0x57f0da2a, "wiphy_apply_custom_regulatory" },
	{ 0x178f3993, "cfg80211_michael_mic_failure" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb5a0e267, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6ed4557e, "mod_timer" },
	{ 0x22d88e1d, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x2c1e423f, "platform_driver_register" },
	{ 0xb1e5c6ff, "skb_pull" },
	{ 0xa07401a2, "cfg80211_ibss_joined" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x54ee378c, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x8ef66c8c, "dma_alloc_coherent" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x58ccb8db, "sdio_readsb" },
	{ 0xb967fffd, "sdio_unregister_driver" },
	{ 0xef78b88e, "sdio_f0_writeb" },
	{ 0x86f5c236, "sdio_set_host_pm_flags" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9f984513, "strrchr" },
	{ 0x40b0f4e5, "kmem_cache_alloc" },
	{ 0xafcd9968, "cfg80211_roamed" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0x904512c0, "__alloc_skb" },
	{ 0x94a65d4b, "wiphy_new" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xcc7b4fc4, "wiphy_register" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xbc656a9a, "cfg80211_ready_on_channel" },
	{ 0x2acd1dd5, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0xf42f1445, "sdio_f0_readb" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf257e6dd, "wake_up_process" },
	{ 0x3ae8747b, "cfg80211_disconnected" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x4770b8c2, "platform_get_resource_byname" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x1d17e44a, "cfg80211_new_sta" },
	{ 0x7b03d559, "sched_setscheduler" },
	{ 0x72542c85, "__wake_up" },
	{ 0x612c67e7, "sdio_memcpy_toio" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x574671f2, "sdio_writew" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2cd430, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x7a728ef4, "up" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x2e275c73, "sdio_reset_comm" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x4134ba02, "cfg80211_remain_on_channel_expired" },
	{ 0x5ee54c26, "unregister_netdev" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x41059142, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xc2b1587b, "sdio_readw" },
	{ 0xf986c2be, "sdio_register_driver" },
	{ 0x4b411674, "consume_skb" },
	{ 0x6244bba4, "sdio_memcpy_fromio" },
	{ 0x417893a5, "sdio_claim_host" },
	{ 0x1de50dde, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd50dea93, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x374cba29, "skb_put" },
	{ 0xf8097c60, "rfkill_unregister" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x587df050, "outer_cache" },
	{ 0x4867c789, "dev_get_drvdata" },
	{ 0x6b6bee11, "down_timeout" },
	{ 0xedc387eb, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xadd6dbc4, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5706e48c, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x430355be, "filp_open" },
	{ 0x8043ec94, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");
