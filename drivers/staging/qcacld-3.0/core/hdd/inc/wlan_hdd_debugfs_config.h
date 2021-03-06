/*
 * Copyright (c) 2019 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: wlan_hdd_debugfs_config.h
 *
 * WLAN Host Device Driver implementation to update
 * debugfs with ini configs
 */

#ifndef _WLAN_HDD_DEBUGFS_CONFIG_H
#define _WLAN_HDD_DEBUGFS_CONFIG_H

#ifdef WLAN_DEBUGFS
/**
 * hdd_debugfs_ini_config_init() - API to initialize ini config file
 * @hdd_ctx: hdd context
 *
 * Return: 0 on success and errno on failure
 */
int hdd_debugfs_ini_config_init(struct hdd_context *hdd_ctx);

/**
 * hdd_debugfs_ini_config_deinit() - API to deinit ini config file
 * @hdd_ctx: hdd context
 *
 * Return: None
 */
void hdd_debugfs_ini_config_deinit(struct hdd_context *hdd_ctx);
#else
static inline int hdd_debugfs_ini_config_init(struct hdd_context *hdd_ctx)
{
	return 0;
}

static inline void hdd_debugfs_ini_config_deinit(struct hdd_context *hdd_ctx)
{
}
#endif /* WLAN_DEBUGFS */
#endif /* _WLAN_HDD_DEBUGFS_CONFIG_H */
