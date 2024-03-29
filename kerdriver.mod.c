#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa5f2f32, "device_destroy" },
	{ 0xe314d0a7, "class_destroy" },
	{ 0x14267610, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xa998a50c, "filp_close" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf3addee6, "cdev_alloc" },
	{ 0x200eb4f, "cdev_init" },
	{ 0x9333a491, "cdev_add" },
	{ 0x1dc2d0d4, "class_create" },
	{ 0x3d3724c4, "device_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x33ed7f44, "kmalloc_caches" },
	{ 0xb14c46ef, "kmalloc_trace" },
	{ 0xff651b5c, "filp_open" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe914e41e, "strcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x571ac4a4, "kernel_write" },
	{ 0xaac58f6c, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85150DCA95B692330D33BB1");
