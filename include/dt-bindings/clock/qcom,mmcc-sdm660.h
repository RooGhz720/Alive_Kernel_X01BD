/*
 * Copyright (c) 2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_MSM_MMCC_660_H
#define _DT_BINDINGS_CLK_MSM_MMCC_660_H

#define MMSS_CAMSS_JPEG0_VOTE_CLK		 0
#define MMSS_CAMSS_JPEG0_DMA_VOTE_CLK		 1

#define AHB_CLK_SRC                              5
#define BYTE0_CLK_SRC                            6
#define BYTE1_CLK_SRC                            7
#define CAMSS_GP0_CLK_SRC                        8
#define CAMSS_GP1_CLK_SRC                        9
#define CCI_CLK_SRC                              10
#define CPP_CLK_SRC                              11
#define CSI0_CLK_SRC                             12
#define CSI0PHYTIMER_CLK_SRC                     13
#define CSI1_CLK_SRC                             14
#define CSI1PHYTIMER_CLK_SRC                     15
#define CSI2_CLK_SRC                             16
#define CSI2PHYTIMER_CLK_SRC                     17
#define CSI3_CLK_SRC                             18
#define CSIPHY_CLK_SRC                           19
#define DP_AUX_CLK_SRC                           20
#define DP_CRYPTO_CLK_SRC                        21
#define DP_GTC_CLK_SRC                           22
#define DP_LINK_CLK_SRC                          23
#define DP_PIXEL_CLK_SRC                         24
#define ESC0_CLK_SRC                             25
#define ESC1_CLK_SRC                             26
#define JPEG0_CLK_SRC                            27
#define MCLK0_CLK_SRC                            28
#define MCLK1_CLK_SRC                            29
#define MCLK2_CLK_SRC                            30
#define MCLK3_CLK_SRC                            31
#define MDP_CLK_SRC                              32
#define MMPLL0_PLL                               33
#define MMPLL0_PLL_OUT_AUX                       34
#define MMPLL0_PLL_OUT_AUX2                      35
#define MMPLL0_PLL_OUT_EARLY                     36
#define MMPLL0_PLL_OUT_MAIN                      37
#define MMPLL0_PLL_OUT_TEST                      38
#define MMPLL10_PLL                              39
#define MMPLL10_PLL_OUT_AUX                      40
#define MMPLL10_PLL_OUT_AUX2                     41
#define MMPLL10_PLL_OUT_EARLY                    42
#define MMPLL10_PLL_OUT_MAIN                     43
#define MMPLL10_PLL_OUT_TEST                     44
#define MMPLL1_PLL                               45
#define MMPLL1_PLL_OUT_AUX                       46
#define MMPLL1_PLL_OUT_AUX2                      47
#define MMPLL1_PLL_OUT_EARLY                     48
#define MMPLL1_PLL_OUT_MAIN                      49
#define MMPLL1_PLL_OUT_TEST                      50
#define MMPLL3_PLL                               51
#define MMPLL3_PLL_OUT_AUX                       52
#define MMPLL3_PLL_OUT_AUX2                      53
#define MMPLL3_PLL_OUT_EARLY                     54
#define MMPLL3_PLL_OUT_MAIN                      55
#define MMPLL3_PLL_OUT_TEST                      56
#define MMPLL4_PLL                               57
#define MMPLL4_PLL_OUT_AUX                       58
#define MMPLL4_PLL_OUT_AUX2                      59
#define MMPLL4_PLL_OUT_EARLY                     60
#define MMPLL4_PLL_OUT_MAIN                      61
#define MMPLL4_PLL_OUT_TEST                      62
#define MMPLL5_PLL                               63
#define MMPLL5_PLL_OUT_AUX                       64
#define MMPLL5_PLL_OUT_AUX2                      65
#define MMPLL5_PLL_OUT_EARLY                     66
#define MMPLL5_PLL_OUT_MAIN                      67
#define MMPLL5_PLL_OUT_TEST                      68
#define MMPLL6_PLL                               69
#define MMPLL6_PLL_OUT_AUX                       70
#define MMPLL6_PLL_OUT_AUX2                      71
#define MMPLL6_PLL_OUT_EARLY                     72
#define MMPLL6_PLL_OUT_MAIN                      73
#define MMPLL6_PLL_OUT_TEST                      74
#define MMPLL7_PLL                               75
#define MMPLL7_PLL_OUT_AUX                       76
#define MMPLL7_PLL_OUT_AUX2                      77
#define MMPLL7_PLL_OUT_EARLY                     78
#define MMPLL7_PLL_OUT_MAIN                      79
#define MMPLL7_PLL_OUT_TEST                      80
#define MMPLL8_PLL                               81
#define MMPLL8_PLL_OUT_AUX                       82
#define MMPLL8_PLL_OUT_AUX2                      83
#define MMPLL8_PLL_OUT_EARLY                     84
#define MMPLL8_PLL_OUT_MAIN                      85
#define MMPLL8_PLL_OUT_TEST                      86
#define MMSS_BIMC_SMMU_AHB_CLK                   87
#define MMSS_BIMC_SMMU_AXI_CLK                   88
#define MMSS_CAMSS_AHB_CLK                       89
#define MMSS_CAMSS_CCI_AHB_CLK                   90
#define MMSS_CAMSS_CCI_CLK                       91
#define MMSS_CAMSS_CPHY_CSID0_CLK                92
#define MMSS_CAMSS_CPHY_CSID1_CLK                93
#define MMSS_CAMSS_CPHY_CSID2_CLK                94
#define MMSS_CAMSS_CPHY_CSID3_CLK                95
#define MMSS_CAMSS_CPP_AHB_CLK                   96
#define MMSS_CAMSS_CPP_AXI_CLK                   97
#define MMSS_CAMSS_CPP_CLK                       98
#define MMSS_CAMSS_CPP_VBIF_AHB_CLK              99
#define MMSS_CAMSS_CSI0_AHB_CLK                  100
#define MMSS_CAMSS_CSI0_CLK                      101
#define MMSS_CAMSS_CSI0PHYTIMER_CLK              102
#define MMSS_CAMSS_CSI0PIX_CLK                   103
#define MMSS_CAMSS_CSI0RDI_CLK                   104
#define MMSS_CAMSS_CSI1_AHB_CLK                  105
#define MMSS_CAMSS_CSI1_CLK                      106
#define MMSS_CAMSS_CSI1PHYTIMER_CLK              107
#define MMSS_CAMSS_CSI1PIX_CLK                   108
#define MMSS_CAMSS_CSI1RDI_CLK                   109
#define MMSS_CAMSS_CSI2_AHB_CLK                  110
#define MMSS_CAMSS_CSI2_CLK                      111
#define MMSS_CAMSS_CSI2PHYTIMER_CLK              112
#define MMSS_CAMSS_CSI2PIX_CLK                   113
#define MMSS_CAMSS_CSI2RDI_CLK                   114
#define MMSS_CAMSS_CSI3_AHB_CLK                  115
#define MMSS_CAMSS_CSI3_CLK                      116
#define MMSS_CAMSS_CSI3PIX_CLK                   117
#define MMSS_CAMSS_CSI3RDI_CLK                   118
#define MMSS_CAMSS_CSI_VFE0_CLK                  119
#define MMSS_CAMSS_CSI_VFE1_CLK                  120
#define MMSS_CAMSS_CSIPHY0_CLK                   121
#define MMSS_CAMSS_CSIPHY1_CLK                   122
#define MMSS_CAMSS_CSIPHY2_CLK                   123
#define MMSS_CAMSS_GP0_CLK                       124
#define MMSS_CAMSS_GP1_CLK                       125
#define MMSS_CAMSS_ISPIF_AHB_CLK                 126
#define MMSS_CAMSS_JPEG0_CLK                     127
#define MMSS_CAMSS_JPEG_AHB_CLK                  128
#define MMSS_CAMSS_JPEG_AXI_CLK                  129
#define MMSS_CAMSS_MCLK0_CLK                     130
#define MMSS_CAMSS_MCLK1_CLK                     131
#define MMSS_CAMSS_MCLK2_CLK                     132
#define MMSS_CAMSS_MCLK3_CLK                     133
#define MMSS_CAMSS_MICRO_AHB_CLK                 134
#define MMSS_CAMSS_TOP_AHB_CLK                   135
#define MMSS_CAMSS_VFE0_AHB_CLK                  136
#define MMSS_CAMSS_VFE0_CLK                      137
#define MMSS_CAMSS_VFE0_STREAM_CLK               138
#define MMSS_CAMSS_VFE1_AHB_CLK                  139
#define MMSS_CAMSS_VFE1_CLK                      140
#define MMSS_CAMSS_VFE1_STREAM_CLK               141
#define MMSS_CAMSS_VFE_VBIF_AHB_CLK              142
#define MMSS_CAMSS_VFE_VBIF_AXI_CLK              143
#define MMSS_CSIPHY_AHB2CRIF_CLK                 144
#define MMSS_CXO_CLK                             145
#define MMSS_MDSS_AHB_CLK                        146
#define MMSS_MDSS_AXI_CLK                        147
#define MMSS_MDSS_BYTE0_CLK                      148
#define MMSS_MDSS_BYTE0_INTF_CLK                 149
#define MMSS_MDSS_BYTE0_INTF_DIV_CLK             150
#define MMSS_MDSS_BYTE1_CLK                      151
#define MMSS_MDSS_BYTE1_INTF_CLK                 152
#define MMSS_MDSS_DP_AUX_CLK                     153
#define MMSS_MDSS_DP_CRYPTO_CLK                  154
#define MMSS_MDSS_DP_GTC_CLK                     155
#define MMSS_MDSS_DP_LINK_CLK                    156
#define MMSS_MDSS_DP_LINK_INTF_CLK               157
#define MMSS_MDSS_DP_PIXEL_CLK                   158
#define MMSS_MDSS_ESC0_CLK                       159
#define MMSS_MDSS_ESC1_CLK                       160
#define MMSS_MDSS_HDMI_DP_AHB_CLK                161
#define MMSS_MDSS_MDP_CLK                        162
#define MMSS_MDSS_PCLK0_CLK                      163
#define MMSS_MDSS_PCLK1_CLK                      164
#define MMSS_MDSS_ROT_CLK                        165
#define MMSS_MDSS_VSYNC_CLK                      166
#define MMSS_MISC_AHB_CLK                        167
#define MMSS_MISC_CXO_CLK                        168
#define MMSS_MNOC_AHB_CLK                        169
#define MMSS_SNOC_DVM_AXI_CLK                    170
#define MMSS_THROTTLE_CAMSS_AHB_CLK              171
#define MMSS_THROTTLE_CAMSS_AXI_CLK              172
#define MMSS_THROTTLE_CAMSS_CXO_CLK              173
#define MMSS_THROTTLE_MDSS_AHB_CLK               174
#define MMSS_THROTTLE_MDSS_AXI_CLK               175
#define MMSS_THROTTLE_MDSS_CXO_CLK               176
#define MMSS_THROTTLE_VIDEO_AHB_CLK              177
#define MMSS_THROTTLE_VIDEO_AXI_CLK              178
#define MMSS_THROTTLE_VIDEO_CXO_CLK              179
#define MMSS_VIDEO_AHB_CLK                       180
#define MMSS_VIDEO_AXI_CLK                       181
#define MMSS_VIDEO_CORE_CLK                      182
#define MMSS_VIDEO_SUBCORE0_CLK                  183
#define PCLK0_CLK_SRC                            184
#define PCLK1_CLK_SRC                            185
#define ROT_CLK_SRC                              186
#define VFE0_CLK_SRC                             187
#define VFE1_CLK_SRC                             188
#define VIDEO_CORE_CLK_SRC                       189
#define VSYNC_CLK_SRC                            190

#define BIMC_SMMU_GDSC                           0
#define CAMSS_CPP_GDSC                           1
#define CAMSS_TOP_GDSC                           2
#define CAMSS_VFE0_GDSC                          3
#define CAMSS_VFE1_GDSC                          4
#define MDSS_GDSC                                5
#define VIDEO_SUBCORE0_GDSC                      6
#define VIDEO_TOP_GDSC                           7

#define CAMSS_MICRO_BCR				 0

#endif