/*
 * Copyright (c) 2013-2020, NVIDIA CORPORATION. All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0
 */

#ifndef _P2771_0000_H
#define _P2771_0000_H

#include <linux/sizes.h>

#include "tegra186-common.h"

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA P2771-0000"

/* I2C */
#define CONFIG_SYS_I2C_TEGRA

/* SD/MMC */
#define CONFIG_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_TEGRA_MMC

/* Environment in eMMC, at the end of 2nd "boot sector" */
#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_SYS_MMC_ENV_DEV		0
#define CONFIG_SYS_MMC_ENV_PART		2
#define CONFIG_ENV_OFFSET		(-OFFSET_OF_UBOOT_ENV)

/* PCI host support */
#define CONFIG_PCI
#define CONFIG_PCI_PNP
#define CONFIG_CMD_PCI

#include "tegra-common-post.h"

/* Crystal is 38.4MHz. clk_m runs at half that rate */
#define COUNTER_FREQUENCY	19200000

#undef CONFIG_NR_DRAM_BANKS
#define CONFIG_NR_DRAM_BANKS	(1024 + 2)

#endif
