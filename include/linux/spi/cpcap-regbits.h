#ifndef __CPCAP_REGBITS_H__
#define __CPCAP_REGBITS_H__

/*
 * Copyright (C) 2007-2009 Motorola, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

/*
 * Register 0 - CPCAP_REG_INT_0 bits
 */
#define CPCAP_BIT_ID_GROUND_I		0x00008000
#define CPCAP_BIT_ID_FLOAT_I		0x00004000
#define CPCAP_BIT_CHRG_DET_I		0x00002000
#define CPCAP_BIT_RVRS_CHRG_I		0x00001000
#define CPCAP_BIT_VBUSOV_I		0x00000800
#define CPCAP_BIT_MB2_I			0x00000400
#define CPCAP_BIT_HS_I			0x00000200
#define CPCAP_BIT_ADCDONE_I		0x00000100
#define CPCAP_BIT_TS_I			0x00000080
#define CPCAP_BIT_EOL_I			0x00000040
#define CPCAP_BIT_LOWBPH_I		0x00000020
#define CPCAP_BIT_SEC2PRI_I		0x00000010
#define CPCAP_BIT_LOWBPL_I		0x00000008
#define CPCAP_BIT_UNUSED_0_2_I		0x00000004
#define CPCAP_BIT_PRIMAC_I		0x00000002
#define CPCAP_BIT_HSCLK_I		0x00000001

/*
 * Register 1 - CPCAP_REG_INT_1 bits
 */
#define CPCAP_BIT_EXTMEMHD_I		0x00008000
#define CPCAP_BIT_UART_ECHO_OVERRUN_I	0x00004000
#define CPCAP_BIT_CHRG_SE1B_I		0x00002000
#define CPCAP_BIT_SE0CONN_I		0x00001000
#define CPCAP_BIT_PTT_I			0x00000800
#define CPCAP_BIT_1HZ_I			0x00000400
#define CPCAP_BIT_CLK_I			0x00000200
#define CPCAP_BIT_ON2_I			0x00000100
#define CPCAP_BIT_ON_I			0x00000080
#define CPCAP_BIT_RVRS_MODE_I		0x00000040
#define CPCAP_BIT_CHRGCURR2_I		0x00000020
#define CPCAP_BIT_CHRGCURR1_I		0x00000010
#define CPCAP_BIT_VBUSVLD_I		0x00000008
#define CPCAP_BIT_SESSVLD_I		0x00000004
#define CPCAP_BIT_SESSEND_I		0x00000002
#define CPCAP_BIT_SE1_I			0x00000001

/*
 * Register 2  CPCAP_REG_INT_2 -  bits
 */
#define CPCAP_BIT_USBDPLLCLK_I		0x00008000
#define CPCAP_BIT_PWRGOOD_I		0x00004000
#define CPCAP_BIT_UCRESET_I		0x00002000
#define CPCAP_BIT_ONEWIRE3_I		0x00001000
#define CPCAP_BIT_ONEWIRE2_I		0x00000800
#define CPCAP_BIT_ONEWIRE1_I		0x00000400
#define CPCAP_BIT_OPT_SEL_STATE_I	0x00000200
#define CPCAP_BIT_OPT_SEL_DTCH_I	0x00000100
#define CPCAP_BIT_TODA_I		0x00000080
#define CPCAP_BIT_OFLOWSW_I		0x00000040
#define CPCAP_BIT_PC_I			0x00000020
#define CPCAP_BIT_DIETEMPH_I		0x00000010
#define CPCAP_BIT_DIEPWRDWN_I		0x00000008
#define CPCAP_BIT_SOFTRST_I		0x00000004
#define CPCAP_BIT_SYSRSTRT_I		0x00000002
#define CPCAP_BIT_WARM_I		0x00000001

/*
 * Register 3 - CPCAP_REG_INT_3  bits
 */
#define CPCAP_BIT_UNUSED_3_15_I		0x00008000
#define CPCAP_BIT_UNUSED_3_14_I		0x00004000
#define CPCAP_BIT_SPARE_3_13_I		0x00002000
#define CPCAP_BIT_SPARE_3_12_I		0x00001000
#define CPCAP_BIT_SPARE_3_11_I		0x00000800
#define CPCAP_BIT_SPARE_3_10_I		0x00000400
#define CPCAP_BIT_CC_CAL_I		0x00000200
#define CPCAP_BIT_SECHALT_I		0x00000100
#define CPCAP_BIT_PRIHALT_I		0x00000080
#define CPCAP_BIT_BATTDETB_I		0x00000040
#define CPCAP_BIT_SB_MAX_RETX_ERR_I	0x00000020
#define CPCAP_BIT_GCAI_CURR2_I		0x00000010
#define CPCAP_BIT_GCAI_CURR1_I		0x00000008
#define CPCAP_BIT_UCBUSY_I		0x00000004
#define CPCAP_BIT_DM_I			0x00000002
#define CPCAP_BIT_DP_I			0x00000001

/*
 * Register 4 - CPCAP_REG_INTM1 bits
 */
#define CPCAP_BIT_ID_GROUND_M		0x00008000
#define CPCAP_BIT_ID_FLOAT_M		0x00004000
#define CPCAP_BIT_CHRG_DET_M		0x00002000
#define CPCAP_BIT_RVRS_CHRG_M		0x00001000
#define CPCAP_BIT_VBUSOV_M		0x00000800
#define CPCAP_BIT_MB2_M			0x00000400
#define CPCAP_BIT_HS_M			0x00000200
#define CPCAP_BIT_ADCDONE_M		0x00000100
#define CPCAP_BIT_TS_M			0x00000080
#define CPCAP_BIT_EOL_M			0x00000040
#define CPCAP_BIT_LOWBPH_M		0x00000020
#define CPCAP_BIT_SEC2PRI_M		0x00000010
#define CPCAP_BIT_LOWBPL_M		0x00000008
#define CPCAP_BIT_UNUSED_4_2_M		0x00000004
#define CPCAP_BIT_PRIMAC_M		0x00000002
#define CPCAP_BIT_HSCLK_M		0x00000001

/*
 * Register 5 - CPCAP_REG_INTM2 bits
 */
#define CPCAP_BIT_EXTMEMHD_M		0x00008000
#define CPCAP_BIT_UART_ECHO_OVERRUN_M	0x00004000
#define CPCAP_BIT_CHRG_SE1B_M		0x00002000
#define CPCAP_BIT_SE0CONN_M		0x00001000
#define CPCAP_BIT_PTT_M			0x00000800
#define CPCAP_BIT_1HZ_M			0x00000400
#define CPCAP_BIT_CLK_M			0x00000200
#define CPCAP_BIT_ON2_M			0x00000100
#define CPCAP_BIT_ON_M			0x00000080
#define CPCAP_BIT_RVRS_MODE_M		0x00000040
#define CPCAP_BIT_CHRGCURR2_M		0x00000020
#define CPCAP_BIT_CHRGCURR1_M		0x00000010
#define CPCAP_BIT_VBUSVLD_M		0x00000008
#define CPCAP_BIT_SESSVLD_M		0x00000004
#define CPCAP_BIT_SESSEND_M		0x00000002
#define CPCAP_BIT_SE1_M			0x00000001

/*
 * Register 6 - CPCAP_REG_INTM3 bits
 */
#define CPCAP_BIT_USBDPLLCLK_M		0x00008000
#define CPCAP_BIT_PWRGOOD_M		0x00004000
#define CPCAP_BIT_UCRESET_M		0x00002000
#define CPCAP_BIT_ONEWIRE3_M		0x00001000
#define CPCAP_BIT_ONEWIRE2_M		0x00000800
#define CPCAP_BIT_ONEWIRE1_M		0x00000400
#define CPCAP_BIT_OPT_SEL_STATE_M	0x00000200
#define CPCAP_BIT_OPT_SEL_DTCH_M	0x00000100
#define CPCAP_BIT_TODA_M		0x00000080
#define CPCAP_BIT_OFLOWSW_M		0x00000040
#define CPCAP_BIT_PC_M			0x00000020
#define CPCAP_BIT_DIETEMPH_M		0x00000010
#define CPCAP_BIT_DIEPWRDWN_M		0x00000008
#define CPCAP_BIT_SOFTRST_M		0x00000004
#define CPCAP_BIT_SYSRSTRT_M		0x00000002
#define CPCAP_BIT_WARM_M		0x00000001

/*
 * Register 7 - CPCAP_REG_INTM4 bits
 */
#define CPCAP_BIT_UNUSED_7_15_M		0x00008000
#define CPCAP_BIT_UNUSED_7_14_M		0x00004000
#define CPCAP_BIT_SPARE_7_13_M		0x00002000
#define CPCAP_BIT_SPARE_7_12_M		0x00001000
#define CPCAP_BIT_SPARE_7_11_M		0x00000800
#define CPCAP_BIT_SPARE_7_10_M		0x00000400
#define CPCAP_BIT_CC_CAL_M		0x00000200
#define CPCAP_BIT_SECHALT_M		0x00000100
#define CPCAP_BIT_PRIHALT_M		0x00000080
#define CPCAP_BIT_BATTDETB_M		0x00000040
#define CPCAP_BIT_SB_MAX_RETX_ERR_M	0x00000020
#define CPCAP_BIT_GCAI_CURR2_M		0x00000010
#define CPCAP_BIT_GCAI_CURR1_M		0x00000008
#define CPCAP_BIT_UCBUSY_M		0x00000004
#define CPCAP_BIT_DM_M			0x00000002
#define CPCAP_BIT_DP_M			0x00000001

/*
 * Register 8 - CPCAP_REG_INTS1 bits
 */
#define CPCAP_BIT_ID_GROUND_S		0x00008000
#define CPCAP_BIT_ID_FLOAT_S		0x00004000
#define CPCAP_BIT_CHRG_DET_S		0x00002000
#define CPCAP_BIT_RVRS_CHRG_S		0x00001000
#define CPCAP_BIT_VBUSOV_S		0x00000800
#define CPCAP_BIT_MB2_S			0x00000400
#define CPCAP_BIT_HS_S			0x00000200
#define CPCAP_BIT_ADCDONE_S		0x00000100
#define CPCAP_BIT_TS_S			0x00000080
#define CPCAP_BIT_EOL_S			0x00000040
#define CPCAP_BIT_LOWBPH_S		0x00000020
#define CPCAP_BIT_SEC2PRI_S		0x00000010
#define CPCAP_BIT_LOWBPL_S		0x00000008
#define CPCAP_BIT_UNUSED_8_2_S		0x00000004
#define CPCAP_BIT_PRIMAC_S		0x00000002
#define CPCAP_BIT_HSCLK_S		0x00000001

/*
 * Register 9 - CPCAP_REG_INTS2 bits
 */
#define CPCAP_BIT_EXTMEMHD_S		0x00008000
#define CPCAP_BIT_UART_ECHO_OVERRUN_S	0x00004000
#define CPCAP_BIT_CHRG_SE1B_S		0x00002000
#define CPCAP_BIT_SE0CONN_S		0x00001000
#define CPCAP_BIT_PTT_S			0x00000800
#define CPCAP_BIT_1HZ_S			0x00000400
#define CPCAP_BIT_CLK_S			0x00000200
#define CPCAP_BIT_ON2_S			0x00000100
#define CPCAP_BIT_ON_S			0x00000080
#define CPCAP_BIT_RVRS_MODE_S		0x00000040
#define CPCAP_BIT_CHRGCURR2_S		0x00000020
#define CPCAP_BIT_CHRGCURR1_S		0x00000010
#define CPCAP_BIT_VBUSVLD_S		0x00000008
#define CPCAP_BIT_SESSVLD_S		0x00000004
#define CPCAP_BIT_SESSEND_S		0x00000002
#define CPCAP_BIT_SE1_S			0x00000001

/*
 * Register 10 - CPCAP_REG_INTS3 bits
 */
#define CPCAP_BIT_USBDPLLCLK_S		0x00008000
#define CPCAP_BIT_PWRGOOD_S		0x00004000
#define CPCAP_BIT_UCRESET_S		0x00002000
#define CPCAP_BIT_ONEWIRE3_S		0x00001000
#define CPCAP_BIT_ONEWIRE2_S		0x00000800
#define CPCAP_BIT_ONEWIRE1_S		0x00000400
#define CPCAP_BIT_OPT_SEL_STATE_S	0x00000200
#define CPCAP_BIT_OPT_SEL_DTCH_S	0x00000100
#define CPCAP_BIT_TODA_S		0x00000080
#define CPCAP_BIT_OFLOWSW_S		0x00000040
#define CPCAP_BIT_PC_S			0x00000020
#define CPCAP_BIT_DIETEMPH_S		0x00000010
#define CPCAP_BIT_DIEPWRDWN_S		0x00000008
#define CPCAP_BIT_SOFTRST_S		0x00000004
#define CPCAP_BIT_SYSRSTRT_S		0x00000002
#define CPCAP_BIT_WARM_S		0x00000001

/*
 * Register 11 - CPCAP_REG_INTS4 bits
 */
#define CPCAP_BIT_UNUSED_11_15_S	0x00008000
#define CPCAP_BIT_UNUSED_11_14_S	0x00004000
#define CPCAP_BIT_SPARE_11_13_S		0x00002000
#define CPCAP_BIT_SPARE_11_12_S		0x00001000
#define CPCAP_BIT_SPARE_11_11_S		0x00000800
#define CPCAP_BIT_SPARE_11_10_S		0x00000400
#define CPCAP_BIT_CC_CAL_S		0x00000200
#define CPCAP_BIT_SECHALT_S		0x00000100
#define CPCAP_BIT_PRIHALT_S		0x00000080
#define CPCAP_BIT_BATTDETB_S		0x00000040
#define CPCAP_BIT_SB_MAX_RETX_ERR_S	0x00000020
#define CPCAP_BIT_GCAI_CURR2_S		0x00000010
#define CPCAP_BIT_GCAI_CURR1_S		0x00000008
#define CPCAP_BIT_UCBUSY_S		0x00000004
#define CPCAP_BIT_DM_S			0x00000002
#define CPCAP_BIT_DP_S			0x00000001

/*
 * Register 128 - CPCAP_REG_MI1 bits
 */
#define CPCAP_BIT_PRIMACRO_15_S		0x00008000
#define CPCAP_BIT_PRIMACRO_14_S		0x00004000
#define CPCAP_BIT_PRIMACRO_13_S		0x00002000
#define CPCAP_BIT_PRIMACRO_12_S		0x00001000
#define CPCAP_BIT_PRIMACRO_11_S		0x00000800
#define CPCAP_BIT_PRIMACRO_10_S		0x00000400
#define CPCAP_BIT_PRIMACRO_9_S		0x00000200
#define CPCAP_BIT_PRIMACRO_8_S		0x00000100
#define CPCAP_BIT_PRIMACRO_7_S		0x00000080
#define CPCAP_BIT_PRIMACRO_6_S		0x00000040
#define CPCAP_BIT_PRIMACRO_5_S		0x00000020
#define CPCAP_BIT_PRIMACRO_4_S		0x00000010
#define CPCAP_BIT_USEROFF_S		0x00000008
#define CPCAP_BIT_PRIRAMR_S		0x00000004
#define CPCAP_BIT_PRIRAMW_S		0x00000002
#define CPCAP_BIT_PRIROMR_S		0x00000001

/*
 * Register 129 - CPCAP_REG_MIM1 bits
 */
#define CPCAP_BIT_PRIMACRO_15M		0x00008000
#define CPCAP_BIT_PRIMACRO_14M		0x00004000
#define CPCAP_BIT_PRIMACRO_13M		0x00002000
#define CPCAP_BIT_PRIMACRO_12M		0x00001000
#define CPCAP_BIT_PRIMACRO_11M		0x00000800
#define CPCAP_BIT_PRIMACRO_10M		0x00000400
#define CPCAP_BIT_PRIMACRO_9M		0x00000200
#define CPCAP_BIT_PRIMACRO_8M		0x00000100
#define CPCAP_BIT_PRIMACRO_7M		0x00000080
#define CPCAP_BIT_PRIMACRO_6M		0x00000040
#define CPCAP_BIT_PRIMACRO_5M		0x00000020
#define CPCAP_BIT_PRIMACRO_4M		0x00000010
#define CPCAP_BIT_USEROFFM		0x00000008
#define CPCAP_BIT_PRIRAMRM		0x00000004
#define CPCAP_BIT_PRIRAMWM		0x00000002
#define CPCAP_BIT_PRIROMRM		0x00000001

/*
 * Register 130 - CPCAP_REG_MI2 bits
 */
#define CPCAP_BIT_PRIMACRO_15		0x00008000
#define CPCAP_BIT_PRIMACRO_14		0x00004000
#define CPCAP_BIT_PRIMACRO_13		0x00002000
#define CPCAP_BIT_PRIMACRO_12		0x00001000
#define CPCAP_BIT_PRIMACRO_11		0x00000800
#define CPCAP_BIT_PRIMACRO_10		0x00000400
#define CPCAP_BIT_PRIMACRO_9		0x00000200
#define CPCAP_BIT_PRIMACRO_8		0x00000100
#define CPCAP_BIT_PRIMACRO_7		0x00000080
#define CPCAP_BIT_PRIMACRO_6		0x00000040
#define CPCAP_BIT_PRIMACRO_5		0x00000020
#define CPCAP_BIT_PRIMACRO_4		0x00000010
#define CPCAP_BIT_USEROFF		0x00000008
#define CPCAP_BIT_PRIRAMR		0x00000004
#define CPCAP_BIT_PRIRAMW		0x00000002
#define CPCAP_BIT_PRIROMR		0x00000001

/*
 * Register 131 - CPCAP_REG_MIM2 bits
 */
#define CPCAP_BIT_PRIMACRO_15S		0x00008000
#define CPCAP_BIT_PRIMACRO_14S		0x00004000
#define CPCAP_BIT_PRIMACRO_13S		0x00002000
#define CPCAP_BIT_PRIMACRO_12S		0x00001000
#define CPCAP_BIT_PRIMACRO_11S		0x00000800
#define CPCAP_BIT_PRIMACRO_10S		0x00000400
#define CPCAP_BIT_PRIMACRO_9S		0x00000200
#define CPCAP_BIT_PRIMACRO_8S		0x00000100
#define CPCAP_BIT_PRIMACRO_7S		0x00000080
#define CPCAP_BIT_PRIMACRO_6S		0x00000040
#define CPCAP_BIT_PRIMACRO_5S		0x00000020
#define CPCAP_BIT_PRIMACRO_4S		0x00000010
#define CPCAP_BIT_USEROFFS		0x00000008
#define CPCAP_BIT_PRIRAMRS		0x00000004
#define CPCAP_BIT_PRIRAMWS		0x00000002
#define CPCAP_BIT_PRIROMRS		0x00000001

/*
 * Register 132 - CPCAP_REG_UCC1 bits
 */
#define CPCAP_BIT_UNUSED_132_15		0x00008000
#define CPCAP_BIT_UNUSED_132_14		0x00004000
#define CPCAP_BIT_UNUSED_132_13		0x00002000
#define CPCAP_BIT_UNUSED_132_12		0x00001000
#define CPCAP_BIT_PRI_GPIO6_2MAC10	0x00000800
#define CPCAP_BIT_PRI_GPIO5_2MAC9	0x00000400
#define CPCAP_BIT_PRI_GPIO4_2MAC8	0x00000200
#define CPCAP_BIT_PRI_GPIO3_2MAC7	0x00000100
#define CPCAP_BIT_PRI_GPIO2_2MAC6	0x00000080
#define CPCAP_BIT_PRI_GPIO1_2MAC5	0x00000040
#define CPCAP_BIT_PRI_GPIO0_2MAC4	0x00000020
#define CPCAP_BIT_USEROFFCLK		0x00000010
#define CPCAP_BIT_UO_MH_PFM_EN		0x00000008
#define CPCAP_BIT_CNTRLSEC		0x00000004
#define CPCAP_BIT_SCHDOVERRIDE		0x00000002
#define CPCAP_BIT_PRIHALT		0x00000001

/*
 * Register 135 - CPCAP_REG_PC1 bits
 */
#define CPCAP_BIT_UNUSED_135_15		0x00008000
#define CPCAP_BIT_UNUSED_135_14		0x00004000
#define CPCAP_BIT_UNUSED_135_13		0x00002000
#define CPCAP_BIT_UNUSED_135_12		0x00001000
#define CPCAP_BIT_UNUSED_135_11		0x00000800
#define CPCAP_BIT_UNUSED_135_10		0x00000400
#define CPCAP_BIT_PC1_SC_SHTDWN_EN	0x00000200
#define CPCAP_BIT_PC1_PCEN		0x00000100
#define CPCAP_BIT_PC1_PCT7		0x00000080
#define CPCAP_BIT_PC1_PCT6		0x00000040
#define CPCAP_BIT_PC1_PCT5		0x00000020
#define CPCAP_BIT_PC1_PCT4		0x00000010
#define CPCAP_BIT_PC1_PCT3		0x00000008
#define CPCAP_BIT_PC1_PCT2		0x00000004
#define CPCAP_BIT_PC1_PCT1		0x00000002
#define CPCAP_BIT_PC1_PCT0		0x00000001

/*
 * Register 138 - CPCAP_REG_PGC bits
 */
#define CPCAP_BIT_UNUSED_138_15		0x00008000
#define CPCAP_BIT_UNUSED_138_14		0x00004000
#define CPCAP_BIT_UNUSED_138_13		0x00002000
#define CPCAP_BIT_UNUSED_138_12		0x00001000
#define CPCAP_BIT_UNUSED_138_11		0x00000800
#define CPCAP_BIT_UNUSED_138_10		0x00000400
#define CPCAP_BIT_UNUSED_138_9		0x00000200
#define CPCAP_BIT_REVENINV		0x00000100
#define CPCAP_BIT_PRISTBYINV		0x00000080
#define CPCAP_BIT_SYS_RST_MODE		0x00000040
#define CPCAP_BIT_MAC_TIME_LONG		0x00000020
#define CPCAP_BIT_PRI_UC_SUSPEND	0x00000010
#define CPCAP_BIT_PRIWARMSTART		0x00000008
#define CPCAP_BIT_PRIPRESVRAM		0x00000004
#define CPCAP_BIT_SPI_PWRGT1EN		0x00000002
#define CPCAP_BIT_SPI_PWRGT2EN		0x00000001

/*
 * Register 259 - CPCAP_REG_UCTM bits */
#define CPCAP_BIT_UNUSED_259_15     0x00008000
#define CPCAP_BIT_UNUSED_259_14     0x00004000
#define CPCAP_BIT_UNUSED_259_13     0x00002000
#define CPCAP_BIT_UNUSED_259_12     0x00001000
#define CPCAP_BIT_UNUSED_259_11     0x00000800
#define CPCAP_BIT_UNUSED_259_10     0x00000400
#define CPCAP_BIT_UNUSED_259_9      0x00000200
#define CPCAP_BIT_UNUSED_259_8      0x00000100
#define CPCAP_BIT_UNUSED_259_7      0x00000080
#define CPCAP_BIT_UNUSED_259_6      0x00000040
#define CPCAP_BIT_UNUSED_259_5      0x00000020
#define CPCAP_BIT_UNUSED_259_4      0x00000010
#define CPCAP_BIT_UNUSED_259_3      0x00000008
#define CPCAP_BIT_UNUSED_259_2      0x00000004
#define CPCAP_BIT_UNUSED_259_1      0x00000002
#define CPCAP_BIT_UCTM              0x00000001

/*
 * Register 266 - CPCAP_REG_VAL1 bits
 */
#define CPCAP_BIT_INVM_MC_MODE		0x00008000
#define CPCAP_BIT_NVFLASH_MODE		0x00004000
#define CPCAP_BIT_RECOVERY_MODE		0x00002000
#define CPCAP_BIT_FASTBOOT_MODE		0x00001000
#define CPCAP_BIT_BOOT_MODE		0x00000800
#define CPCAP_BIT_BP2_ONLY_FLASH	0x00000400
#define CPCAP_BIT_OUT_CHARGE_ONLY	0x00000200
#define CPCAP_BIT_USB_BATT_RECOVERY	0x00000100
#define CPCAP_BIT_PANIC			0x00000080
#define CPCAP_BIT_BP_ONLY_FLASH		0x00000040
#define CPCAP_BIT_WATCHDOG_RESET	0x00000020
#define CPCAP_BIT_SOFT_RESET		0x00000010
#define CPCAP_BIT_FLASH_FAIL		0x00000008
#define CPCAP_BIT_FOTA_MODE		0x00000004
#define CPCAP_BIT_AP_KERNEL_PANIC	0x00000002
#define CPCAP_BIT_FLASH_MODE		0x00000001

/*
 * Register 385 - CPCAP_REG_SI2CC1
 */
#define CPCAP_BIT_CLK3M2_GATE_OVERRIDE	0x00000080

/*
 * Register 391 - CPCAP_REG_S3C
 */
#define CPCAP_BIT_SW3STBY		0x00000100

/*
 * Register 411 - CPCAP_REG_VUSB bits
 */
#define CPCAP_BIT_UNUSED_411_15		0x00008000
#define CPCAP_BIT_UNUSED_411_14		0x00004000
#define CPCAP_BIT_UNUSED_411_13		0x00002000
#define CPCAP_BIT_UNUSED_411_12		0x00001000
#define CPCAP_BIT_UNUSED_411_11		0x00000800
#define CPCAP_BIT_UNUSED_411_10		0x00000400
#define CPCAP_BIT_UNUSED_411_9		0x00000200
#define CPCAP_BIT_VUSBSTBY		0x00000100
#define CPCAP_BIT_UNUSED_411_7		0x00000080
#define CPCAP_BIT_VUSB			0x00000040
#define CPCAP_BIT_UNUSED_411_5		0x00000020
#define CPCAP_BIT_VUSB_MODE2		0x00000010
#define CPCAP_BIT_VUSB_MODE1		0x00000008
#define CPCAP_BIT_VUSB_MODE0		0x00000004
#define CPCAP_BIT_SPARE_411_1		0x00000002
#define CPCAP_BIT_VBUS_SWITCH		0x00000001
/*
 * Register 512 - Audio Regulator and Bias Voltage
 */

#define CPCAP_BIT_AUDIO_LOW_PWR           0x00000040
#define CPCAP_BIT_AUD_LOWPWR_SPEED        0x00000020
#define CPCAP_BIT_VAUDIOPRISTBY           0x00000010
#define CPCAP_BIT_VAUDIO_MODE1            0x00000004
#define CPCAP_BIT_VAUDIO_MODE0            0x00000002
#define CPCAP_BIT_V_AUDIO_EN              0x00000001

/*
 * Register 513 CODEC
 */

#define CPCAP_BIT_CDC_CLK2                0x00008000
#define CPCAP_BIT_CDC_CLK1                0x00004000
#define CPCAP_BIT_CDC_CLK0                0x00002000
#define CPCAP_BIT_CDC_SR3                 0x00001000
#define CPCAP_BIT_CDC_SR2                 0x00000800
#define CPCAP_BIT_CDC_SR1                 0x00000400
#define CPCAP_BIT_CDC_SR0                 0x00000200
#define CPCAP_BIT_CDC_CLOCK_TREE_RESET    0x00000100
#define CPCAP_BIT_MIC2_CDC_EN             0x00000080
#define CPCAP_BIT_CDC_EN_RX               0x00000040
#define CPCAP_BIT_DF_RESET                0x00000020
#define CPCAP_BIT_MIC1_CDC_EN             0x00000010
#define CPCAP_BIT_AUDOHPF_1		  0x00000008
#define CPCAP_BIT_AUDOHPF_0		  0x00000004
#define CPCAP_BIT_AUDIHPF_1		  0x00000002
#define CPCAP_BIT_AUDIHPF_0		  0x00000001

/*
 * Register 514 CODEC Digital Audio Interface
 */

#define CPCAP_BIT_CDC_PLL_SEL             0x00008000
#define CPCAP_BIT_CLK_IN_SEL              0x00002000
#define CPCAP_BIT_DIG_AUD_IN              0x00001000
#define CPCAP_BIT_CDC_CLK_EN              0x00000800
#define CPCAP_BIT_CDC_DIG_AUD_FS1         0x00000400
#define CPCAP_BIT_CDC_DIG_AUD_FS0         0x00000200
#define CPCAP_BIT_MIC2_TIMESLOT2          0x00000100
#define CPCAP_BIT_MIC2_TIMESLOT1          0x00000080
#define CPCAP_BIT_MIC2_TIMESLOT0          0x00000040
#define CPCAP_BIT_MIC1_RX_TIMESLOT2       0x00000020
#define CPCAP_BIT_MIC1_RX_TIMESLOT1       0x00000010
#define CPCAP_BIT_MIC1_RX_TIMESLOT0       0x00000008
#define CPCAP_BIT_FS_INV                  0x00000004
#define CPCAP_BIT_CLK_INV                 0x00000002
#define CPCAP_BIT_SMB_CDC                 0x00000001

/*
 * Register 515 Stereo DAC
 */

#define CPCAP_BIT_FSYNC_CLK_IN_COMMON     0x00000800
#define CPCAP_BIT_SLAVE_PLL_CLK_INPUT     0x00000400
#define CPCAP_BIT_ST_CLOCK_TREE_RESET     0x00000200
#define CPCAP_BIT_DF_RESET_ST_DAC         0x00000100
#define CPCAP_BIT_ST_SR3                  0x00000080
#define CPCAP_BIT_ST_SR2                  0x00000040
#define CPCAP_BIT_ST_SR1                  0x00000020
#define CPCAP_BIT_ST_SR0                  0x00000010
#define CPCAP_BIT_ST_DAC_CLK2             0x00000008
#define CPCAP_BIT_ST_DAC_CLK1             0x00000004
#define CPCAP_BIT_ST_DAC_CLK0             0x00000002
#define CPCAP_BIT_ST_DAC_EN               0x00000001

/*
 * Register 516 Stereo DAC Digital Audio Interface
 */

#define CPCAP_BIT_ST_L_TIMESLOT2          0x00002000
#define CPCAP_BIT_ST_L_TIMESLOT1          0x00001000
#define CPCAP_BIT_ST_L_TIMESLOT0          0x00000800
#define CPCAP_BIT_ST_R_TIMESLOT2          0x00000400
#define CPCAP_BIT_ST_R_TIMESLOT1          0x00000200
#define CPCAP_BIT_ST_R_TIMESLOT0          0x00000100
#define CPCAP_BIT_ST_DAC_CLK_IN_SEL       0x00000080
#define CPCAP_BIT_ST_FS_INV               0x00000040
#define CPCAP_BIT_ST_CLK_INV              0x00000020
#define CPCAP_BIT_ST_DIG_AUD_FS1          0x00000010
#define CPCAP_BIT_ST_DIG_AUD_FS0          0x00000008
#define CPCAP_BIT_DIG_AUD_IN_ST_DAC       0x00000004
#define CPCAP_BIT_ST_CLK_EN               0x00000002
#define CPCAP_BIT_SMB_ST_DAC              0x00000001

/*
 * Register 517 - CPCAP_REG_TXI bits
 */
#define CPCAP_BIT_PTT_TH		0x00008000
#define CPCAP_BIT_PTT_CMP_EN		0x00004000
#define CPCAP_BIT_HS_ID_TX		0x00002000
#define CPCAP_BIT_MB_ON2		0x00001000
#define CPCAP_BIT_MB_ON1L		0x00000800
#define CPCAP_BIT_MB_ON1R		0x00000400
#define CPCAP_BIT_RX_L_ENCODE		0x00000200
#define CPCAP_BIT_RX_R_ENCODE		0x00000100
#define CPCAP_BIT_MIC2_MUX		0x00000080
#define CPCAP_BIT_MIC2_PGA_EN		0x00000040
#define CPCAP_BIT_CDET_DIS		0x00000020
#define CPCAP_BIT_EMU_MIC_MUX		0x00000010
#define CPCAP_BIT_HS_MIC_MUX		0x00000008
#define CPCAP_BIT_MIC1_MUX		0x00000004
#define CPCAP_BIT_MIC1_PGA_EN		0x00000002
#define CPCAP_BIT_DLM			0x00000001

/*
 * Register 518 MIC PGA's
 */
#define CPCAP_BIT_MB_BIAS_R1              0x00000800
#define CPCAP_BIT_MB_BIAS_R0              0x00000400
#define CPCAP_BIT_MIC2_GAIN_4             0x00000200
#define CPCAP_BIT_MIC2_GAIN_3             0x00000100
#define CPCAP_BIT_MIC2_GAIN_2             0x00000080
#define CPCAP_BIT_MIC2_GAIN_1             0x00000040
#define CPCAP_BIT_MIC2_GAIN_0             0x00000020
#define CPCAP_BIT_MIC1_GAIN_4             0x00000010
#define CPCAP_BIT_MIC1_GAIN_3             0x00000008
#define CPCAP_BIT_MIC1_GAIN_2             0x00000004
#define CPCAP_BIT_MIC1_GAIN_1             0x00000002
#define CPCAP_BIT_MIC1_GAIN_0             0x00000001

/*
 * Register 519 - CPCAP_REG_RXOA bits
 */
#define CPCAP_BIT_UNUSED_519_15		0x00008000
#define CPCAP_BIT_UNUSED_519_14		0x00004000
#define CPCAP_BIT_UNUSED_519_13		0x00002000
#define CPCAP_BIT_STDAC_LOW_PWR_DISABLE	0x00001000
#define CPCAP_BIT_HS_LOW_PWR		0x00000800
#define CPCAP_BIT_HS_ID_RX		0x00000400
#define CPCAP_BIT_ST_HS_CP_EN		0x00000200
#define CPCAP_BIT_EMU_SPKR_R_EN		0x00000100
#define CPCAP_BIT_EMU_SPKR_L_EN		0x00000080
#define CPCAP_BIT_HS_L_EN		0x00000040
#define CPCAP_BIT_HS_R_EN		0x00000020
#define CPCAP_BIT_A4_LINEOUT_L_EN	0x00000010
#define CPCAP_BIT_A4_LINEOUT_R_EN	0x00000008
#define CPCAP_BIT_A2_LDSP_L_EN		0x00000004
#define CPCAP_BIT_A2_LDSP_R_EN		0x00000002
#define CPCAP_BIT_A1_EAR_EN		0x00000001

/*
 * Register 520 RX Volume Control
 */
#define CPCAP_BIT_VOL_EXT3                0x00008000
#define CPCAP_BIT_VOL_EXT2                0x00004000
#define CPCAP_BIT_VOL_EXT1                0x00002000
#define CPCAP_BIT_VOL_EXT0                0x00001000
#define CPCAP_BIT_VOL_DAC3                0x00000800
#define CPCAP_BIT_VOL_DAC2                0x00000400
#define CPCAP_BIT_VOL_DAC1                0x00000200
#define CPCAP_BIT_VOL_DAC0                0x00000100
#define CPCAP_BIT_VOL_DAC_LSB_1dB1        0x00000080
#define CPCAP_BIT_VOL_DAC_LSB_1dB0        0x00000040
#define CPCAP_BIT_VOL_CDC3                0x00000020
#define CPCAP_BIT_VOL_CDC2                0x00000010
#define CPCAP_BIT_VOL_CDC1                0x00000008
#define CPCAP_BIT_VOL_CDC0                0x00000004
#define CPCAP_BIT_VOL_CDC_LSB_1dB1        0x00000002
#define CPCAP_BIT_VOL_CDC_LSB_1dB0        0x00000001

/*
 * Register 521 Codec to Output Amp Switches
 */
#define CPCAP_BIT_PGA_CDC_EN              0x00000400
#define CPCAP_BIT_CDC_SW                  0x00000200
#define CPCAP_BIT_PGA_OUTR_USBDP_CDC_SW   0x00000100
#define CPCAP_BIT_PGA_OUTL_USBDN_CDC_SW   0x00000080
#define CPCAP_BIT_ALEFT_HS_CDC_SW         0x00000040
#define CPCAP_BIT_ARIGHT_HS_CDC_SW        0x00000020
#define CPCAP_BIT_A4_LINEOUT_L_CDC_SW     0x00000010
#define CPCAP_BIT_A4_LINEOUT_R_CDC_SW     0x00000008
#define CPCAP_BIT_A2_LDSP_L_CDC_SW        0x00000004
#define CPCAP_BIT_A2_LDSP_R_CDC_SW        0x00000002
#define CPCAP_BIT_A1_EAR_CDC_SW           0x00000001

/*
 * Register 522 RX Stereo DAC to Output Amp Switches
 */
#define CPCAP_BIT_PGA_DAC_EN              0x00001000
#define CPCAP_BIT_ST_DAC_SW               0x00000800
#define CPCAP_BIT_MONO_DAC1               0x00000400
#define CPCAP_BIT_MONO_DAC0               0x00000200
#define CPCAP_BIT_PGA_OUTR_USBDP_DAC_SW   0x00000100
#define CPCAP_BIT_PGA_OUTL_USBDN_DAC_SW   0x00000080
#define CPCAP_BIT_ALEFT_HS_DAC_SW         0x00000040
#define CPCAP_BIT_ARIGHT_HS_DAC_SW        0x00000020
#define CPCAP_BIT_A4_LINEOUT_L_DAC_SW     0x00000010
#define CPCAP_BIT_A4_LINEOUT_R_DAC_SW     0x00000008
#define CPCAP_BIT_A2_LDSP_L_DAC_SW        0x00000004
#define CPCAP_BIT_A2_LDSP_R_DAC_SW        0x00000002
#define CPCAP_BIT_A1_EAR_DAC_SW           0x00000001

/*
 * Register 523 RX External PGA to Output Amp Switches
 */
#define CPCAP_BIT_PGA_EXT_L_EN            0x00004000
#define CPCAP_BIT_PGA_EXT_R_EN            0x00002000
#define CPCAP_BIT_PGA_IN_L_SW             0x00001000
#define CPCAP_BIT_PGA_IN_R_SW             0x00000800
#define CPCAP_BIT_MONO_EXT1               0x00000400
#define CPCAP_BIT_MONO_EXT0               0x00000200
#define CPCAP_BIT_PGA_OUTR_USBDP_EXT_SW   0x00000100
#define CPCAP_BIT_PGA_OUTL_USBDN_EXT_SW   0x00000080
#define CPCAP_BIT_ALEFT_HS_EXT_SW         0x00000040
#define CPCAP_BIT_ARIGHT_HS_EXT_SW        0x00000020
#define CPCAP_BIT_A4_LINEOUT_L_EXT_SW     0x00000010
#define CPCAP_BIT_A4_LINEOUT_R_EXT_SW     0x00000008
#define CPCAP_BIT_A2_LDSP_L_EXT_SW        0x00000004
#define CPCAP_BIT_A2_LDSP_R_EXT_SW        0x00000002
#define CPCAP_BIT_A1_EAR_EXT_SW           0x00000001

/*
 * Register 525 Loudspeaker Amplifier and Clock Configuration for Headset
 */
#define CPCAP_BIT_NCP_CLK_SYNC            0x00000080
#define CPCAP_BIT_A2_CLK_SYNC             0x00000040
#define CPCAP_BIT_A2_FREE_RUN             0x00000020
#define CPCAP_BIT_A2_CLK2                 0x00000010
#define CPCAP_BIT_A2_CLK1                 0x00000008
#define CPCAP_BIT_A2_CLK0                 0x00000004
#define CPCAP_BIT_A2_CLK_IN               0x00000002
#define CPCAP_BIT_A2_CONFIG               0x00000001

/*
 * Register 641 - CPCAP_REG_CHRGR_1 bits
 */
#define CPCAP_BIT_UNUSED_641_15		0x00008000
#define CPCAP_BIT_UNUSED_641_14		0x00004000
#define CPCAP_BIT_CHRG_LED_EN		0x00002000
#define CPCAP_BIT_RVRSMODE		0x00001000
#define CPCAP_BIT_ICHRG_TR1		0x00000800
#define CPCAP_BIT_ICHRG_TR0		0x00000400
#define CPCAP_BIT_FET_OVRD		0x00000200
#define CPCAP_BIT_FET_CTRL		0x00000100
#define CPCAP_BIT_VCHRG3		0x00000080
#define CPCAP_BIT_VCHRG2		0x00000040
#define CPCAP_BIT_VCHRG1		0x00000020
#define CPCAP_BIT_VCHRG0		0x00000010
#define CPCAP_BIT_ICHRG3		0x00000008
#define CPCAP_BIT_ICHRG2		0x00000004
#define CPCAP_BIT_ICHRG1		0x00000002
#define CPCAP_BIT_ICHRG0		0x00000001

/*
 * Register 768 - CPCAP_REG_ADCC1 bits
 */
#define CPCAP_BIT_ADEN_AUTO_CLR		0x00008000
#define CPCAP_BIT_CAL_MODE		0x00004000
#define CPCAP_BIT_ADC_CLK_SEL1		0x00002000
#define CPCAP_BIT_ADC_CLK_SEL0		0x00001000
#define CPCAP_BIT_ATOX         	        0x00000800
#define CPCAP_BIT_ATO3		        0x00000400
#define CPCAP_BIT_ATO2		        0x00000200
#define CPCAP_BIT_ATO1		        0x00000100
#define CPCAP_BIT_ATO0		        0x00000080
#define CPCAP_BIT_ADA2		        0x00000040
#define CPCAP_BIT_ADA1		        0x00000020
#define CPCAP_BIT_ADA0		        0x00000010
#define CPCAP_BIT_AD_SEL1		0x00000008
#define CPCAP_BIT_RAND1		        0x00000004
#define CPCAP_BIT_RAND0		        0x00000002
#define CPCAP_BIT_ADEN        		0x00000001

/*
 * Register 769 - CPCAP_REG_ADCC2 bits
 */
#define CPCAP_BIT_CAL_FACTOR_ENABLE	0x00008000
#define CPCAP_BIT_BATDETB_EN		0x00004000
#define CPCAP_BIT_ADTRIG_ONESHOT	0x00002000
#define CPCAP_BIT_ASC       		0x00001000
#define CPCAP_BIT_ATOX_PS_FACTOR        0x00000800
#define CPCAP_BIT_ADC_PS_FACTOR1        0x00000400
#define CPCAP_BIT_ADC_PS_FACTOR0        0x00000200
#define CPCAP_BIT_AD4_SELECT	        0x00000100
#define CPCAP_BIT_ADC_BUSY	        0x00000080
#define CPCAP_BIT_THERMBIAS_EN	        0x00000040
#define CPCAP_BIT_ADTRIG_DIS	        0x00000020
#define CPCAP_BIT_LIADC		        0x00000010
#define CPCAP_BIT_TS_REFEN		0x00000008
#define CPCAP_BIT_TS_M2		        0x00000004
#define CPCAP_BIT_TS_M1		        0x00000002
#define CPCAP_BIT_TS_M0        		0x00000001

/*
 * Register 896 - CPCAP_REG_USBC1 bits
 */
#define CPCAP_BIT_IDPULSE		0x00008000
#define CPCAP_BIT_ID100KPU		0x00004000
#define CPCAP_BIT_IDPUCNTRL		0x00002000
#define CPCAP_BIT_IDPU			0x00001000
#define CPCAP_BIT_IDPD			0x00000800
#define CPCAP_BIT_VBUSCHRGTMR3		0x00000400
#define CPCAP_BIT_VBUSCHRGTMR2		0x00000200
#define CPCAP_BIT_VBUSCHRGTMR1		0x00000100
#define CPCAP_BIT_VBUSCHRGTMR0		0x00000080
#define CPCAP_BIT_VBUSPU		0x00000040
#define CPCAP_BIT_VBUSPD		0x00000020
#define CPCAP_BIT_DMPD			0x00000010
#define CPCAP_BIT_DPPD			0x00000008
#define CPCAP_BIT_DM1K5PU		0x00000004
#define CPCAP_BIT_DP1K5PU		0X00000002
#define CPCAP_BIT_DP150KPU		0x00000001

/*
 * Register 897 - CPCAP_REG_USBC2 bits
 */
#define CPCAP_BIT_ZHSDRV1		0x00008000
#define CPCAP_BIT_ZHSDRV0		0x00004000
#define CPCAP_BIT_DPLLCLKREQ		0x00002000
#define CPCAP_BIT_SE0CONN		0x00001000
#define CPCAP_BIT_UARTTXTRI		0x00000800
#define CPCAP_BIT_UARTSWAP		0x00000400
#define CPCAP_BIT_UARTMUX1		0x00000200
#define CPCAP_BIT_UARTMUX0		0x00000100
#define CPCAP_BIT_ULPISTPLOW		0x00000080
#define CPCAP_BIT_TXENPOL		0x00000040
#define CPCAP_BIT_USBXCVREN		0x00000020
#define CPCAP_BIT_USBCNTRL		0x00000010
#define CPCAP_BIT_USBSUSPEND		0x00000008
#define CPCAP_BIT_EMUMODE2		0x00000004
#define CPCAP_BIT_EMUMODE1		0x00000002
#define CPCAP_BIT_EMUMODE0		0x00000001

/*
 * Register 898 - CPCAP_REG_USBC3 bits
 */
#define CPCAP_BIT_SPARE_898_15		0x00008000
#define CPCAP_BIT_IHSTX03		0x00004000
#define CPCAP_BIT_IHSTX02		0x00002000
#define CPCAP_BIT_IHSTX01		0x00001000
#define CPCAP_BIT_IHSTX0		0x00000800
#define CPCAP_BIT_IDPU_SPI		0x00000400
#define CPCAP_BIT_UNUSED_898_9		0x00000200
#define CPCAP_BIT_VBUSSTBY_EN		0x00000100
#define CPCAP_BIT_VBUSEN_SPI		0x00000080
#define CPCAP_BIT_VBUSPU_SPI		0x00000040
#define CPCAP_BIT_VBUSPD_SPI		0x00000020
#define CPCAP_BIT_DMPD_SPI		0x00000010
#define CPCAP_BIT_DPPD_SPI		0x00000008
#define CPCAP_BIT_SUSPEND_SPI		0x00000004
#define CPCAP_BIT_PU_SPI		0x00000002
#define CPCAP_BIT_ULPI_SPI_SEL		0x00000001

/*
 * Register 941 - CPCAP_REG_GPIO0 bits
 */
#define CPCAP_BIT_GPIO0MACROINITL	0x00008000
#define CPCAP_BIT_GPIO0MACROINITH	0x00004000
#define CPCAP_BIT_GPIO0MACROML		0x00002000
#define CPCAP_BIT_GPIO0MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_941_11		0x00000800
#define CPCAP_BIT_UNUSED_941_10		0x00000400
#define CPCAP_BIT_GPIO0VLEV		0x00000200
#define CPCAP_BIT_UNUSED_941_8		0x00000100
#define CPCAP_BIT_GPIO0MUX1		0x00000080
#define CPCAP_BIT_GPIO0MUX0		0x00000040
#define CPCAP_BIT_GPIO0OT		0x00000020
#define CPCAP_BIT_SPARE_941_4		0x00000010
#define CPCAP_BIT_GPIO0PUEN		0x00000008
#define CPCAP_BIT_GPIO0DIR		0x00000004
#define CPCAP_BIT_GPIO0DRV		0x00000002
#define CPCAP_BIT_GPIO0S		0x00000001

/*
 * Register 943 - CPCAP_REG_GPIO1 bits
 */
#define CPCAP_BIT_GPIO1MACROINITL	0x00008000
#define CPCAP_BIT_GPIO1MACROINITH	0x00004000
#define CPCAP_BIT_GPIO1MACROML		0x00002000
#define CPCAP_BIT_GPIO1MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_943_11		0x00000800
#define CPCAP_BIT_UNUSED_943_10		0x00000400
#define CPCAP_BIT_GPIO1VLEV		0x00000200
#define CPCAP_BIT_UNUSED_943_8		0x00000100
#define CPCAP_BIT_GPIO1MUX1		0x00000080
#define CPCAP_BIT_GPIO1MUX0		0x00000040
#define CPCAP_BIT_GPIO1OT		0x00000020
#define CPCAP_BIT_SPARE_943_4		0x00000010
#define CPCAP_BIT_GPIO1PUEN		0x00000008
#define CPCAP_BIT_GPIO1DIR		0x00000004
#define CPCAP_BIT_GPIO1DRV		0x00000002
#define CPCAP_BIT_GPIO1S		0x00000001

/*
 * Register 945 - CPCAP_REG_GPIO2 bits
 */
#define CPCAP_BIT_GPIO2MACROINITL	0x00008000
#define CPCAP_BIT_GPIO2MACROINITH	0x00004000
#define CPCAP_BIT_GPIO2MACROML		0x00002000
#define CPCAP_BIT_GPIO2MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_945_11		0x00000800
#define CPCAP_BIT_UNUSED_945_10		0x00000400
#define CPCAP_BIT_GPIO2VLEV		0x00000200
#define CPCAP_BIT_UNUSED_945_8		0x00000100
#define CPCAP_BIT_GPIO2MUX1		0x00000080
#define CPCAP_BIT_GPIO2MUX0		0x00000040
#define CPCAP_BIT_GPIO2OT		0x00000020
#define CPCAP_BIT_SPARE_945_4		0x00000010
#define CPCAP_BIT_GPIO2PUEN		0x00000008
#define CPCAP_BIT_GPIO2DIR		0x00000004
#define CPCAP_BIT_GPIO2DRV		0x00000002
#define CPCAP_BIT_GPIO2S		0x00000001

/*
 * Register 947 - CPCAP_REG_GPIO3 bits
 */
#define CPCAP_BIT_GPIO3MACROINITL	0x00008000
#define CPCAP_BIT_GPIO3MACROINITH	0x00004000
#define CPCAP_BIT_GPIO3MACROML		0x00002000
#define CPCAP_BIT_GPIO3MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_947_11		0x00000800
#define CPCAP_BIT_UNUSED_947_10		0x00000400
#define CPCAP_BIT_GPIO3VLEV		0x00000200
#define CPCAP_BIT_UNUSED_947_8		0x00000100
#define CPCAP_BIT_GPIO3MUX1		0x00000080
#define CPCAP_BIT_GPIO3MUX0		0x00000040
#define CPCAP_BIT_GPIO3OT		0x00000020
#define CPCAP_BIT_SPARE_947_4		0x00000010
#define CPCAP_BIT_GPIO3PUEN		0x00000008
#define CPCAP_BIT_GPIO3DIR		0x00000004
#define CPCAP_BIT_GPIO3DRV		0x00000002
#define CPCAP_BIT_GPIO3S		0x00000001

/*
 * Register 949 - CPCAP_REG_GPIO4 bits
 */
#define CPCAP_BIT_GPIO4MACROINITL	0x00008000
#define CPCAP_BIT_GPIO4MACROINITH	0x00004000
#define CPCAP_BIT_GPIO4MACROML		0x00002000
#define CPCAP_BIT_GPIO4MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_949_11		0x00000800
#define CPCAP_BIT_UNUSED_949_10		0x00000400
#define CPCAP_BIT_GPIO4VLEV		0x00000200
#define CPCAP_BIT_UNUSED_949_8		0x00000100
#define CPCAP_BIT_GPIO4MUX1		0x00000080
#define CPCAP_BIT_GPIO4MUX0		0x00000040
#define CPCAP_BIT_GPIO4OT		0x00000020
#define CPCAP_BIT_SPARE_949_4		0x00000010
#define CPCAP_BIT_GPIO4PUEN		0x00000008
#define CPCAP_BIT_GPIO4DIR		0x00000004
#define CPCAP_BIT_GPIO4DRV		0x00000002
#define CPCAP_BIT_GPIO4S		0x00000001

/*
 * Register 951 - CPCAP_REG_GPIO5 bits
 */
#define CPCAP_BIT_GPIO5MACROINITL	0x00008000
#define CPCAP_BIT_GPIO5MACROINITH	0x00004000
#define CPCAP_BIT_GPIO5MACROML		0x00002000
#define CPCAP_BIT_GPIO5MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_951_11		0x00000800
#define CPCAP_BIT_UNUSED_951_10		0x00000400
#define CPCAP_BIT_GPIO5VLEV		0x00000200
#define CPCAP_BIT_GPIO5MUX2		0x00000100
#define CPCAP_BIT_GPIO5MUX1		0x00000080
#define CPCAP_BIT_GPIO5MUX0		0x00000040
#define CPCAP_BIT_GPIO5OT		0x00000020
#define CPCAP_BIT_SPARE_951_4		0x00000010
#define CPCAP_BIT_GPIO5PUEN		0x00000008
#define CPCAP_BIT_GPIO5DIR		0x00000004
#define CPCAP_BIT_GPIO5DRV		0x00000002
#define CPCAP_BIT_GPIO5S		0x00000001

/*
 * Register 953 - CPCAP_REG_GPIO6 bits
 */
#define CPCAP_BIT_GPIO6MACROINITL	0x00008000
#define CPCAP_BIT_GPIO6MACROINITH	0x00004000
#define CPCAP_BIT_GPIO6MACROML		0x00002000
#define CPCAP_BIT_GPIO6MACROMH		0x00001000
#define CPCAP_BIT_UNUSED_953_11		0x00000800
#define CPCAP_BIT_UNUSED_953_10		0x00000400
#define CPCAP_BIT_GPIO6VLEV		0x00000200
#define CPCAP_BIT_GPIO6MUX2		0x00000100
#define CPCAP_BIT_GPIO6MUX1		0x00000080
#define CPCAP_BIT_GPIO6MUX0		0x00000040
#define CPCAP_BIT_GPIO6OT		0x00000020
#define CPCAP_BIT_SPARE_953_4		0x00000010
#define CPCAP_BIT_GPIO6PUEN		0x00000008
#define CPCAP_BIT_GPIO6DIR		0x00000004
#define CPCAP_BIT_GPIO6DRV		0x00000002
#define CPCAP_BIT_GPIO6S		0x00000001

#endif /* __CPCAP_REGBITS_H__ */
