.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* LCD_LCDPort */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT0_PC0
.set LCD_LCDPort__0__PORT, 0
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU0_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT0_PC1
.set LCD_LCDPort__1__PORT, 0
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU0_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT0_PC2
.set LCD_LCDPort__2__PORT, 0
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU0_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT0_PC3
.set LCD_LCDPort__3__PORT, 0
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU0_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT0_PC4
.set LCD_LCDPort__4__PORT, 0
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU0_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT0_PC5
.set LCD_LCDPort__5__PORT, 0
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU0_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT0_PC6
.set LCD_LCDPort__6__PORT, 0
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT0_AG
.set LCD_LCDPort__AMUX, CYREG_PRT0_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT0_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT0_BYP
.set LCD_LCDPort__CTL, CYREG_PRT0_CTL
.set LCD_LCDPort__DM0, CYREG_PRT0_DM0
.set LCD_LCDPort__DM1, CYREG_PRT0_DM1
.set LCD_LCDPort__DM2, CYREG_PRT0_DM2
.set LCD_LCDPort__DR, CYREG_PRT0_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT0_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT0_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 0
.set LCD_LCDPort__PRT, CYREG_PRT0_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT0_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT0_SLW

/* LED */
.set LED__0__INTTYPE, CYREG_PICU6_INTTYPE3
.set LED__0__MASK, 0x08
.set LED__0__PC, CYREG_PRT6_PC3
.set LED__0__PORT, 6
.set LED__0__SHIFT, 3
.set LED__AG, CYREG_PRT6_AG
.set LED__AMUX, CYREG_PRT6_AMUX
.set LED__BIE, CYREG_PRT6_BIE
.set LED__BIT_MASK, CYREG_PRT6_BIT_MASK
.set LED__BYP, CYREG_PRT6_BYP
.set LED__CTL, CYREG_PRT6_CTL
.set LED__DM0, CYREG_PRT6_DM0
.set LED__DM1, CYREG_PRT6_DM1
.set LED__DM2, CYREG_PRT6_DM2
.set LED__DR, CYREG_PRT6_DR
.set LED__INP_DIS, CYREG_PRT6_INP_DIS
.set LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU6_BASE
.set LED__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set LED__LCD_EN, CYREG_PRT6_LCD_EN
.set LED__MASK, 0x08
.set LED__PORT, 6
.set LED__PRT, CYREG_PRT6_PRT
.set LED__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set LED__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set LED__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set LED__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set LED__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set LED__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set LED__PS, CYREG_PRT6_PS
.set LED__SHIFT, 3
.set LED__SLW, CYREG_PRT6_SLW

/* SPI_BSPIM */
.set SPI_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set SPI_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set SPI_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set SPI_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set SPI_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set SPI_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set SPI_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set SPI_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set SPI_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set SPI_BSPIM_BitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set SPI_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set SPI_BSPIM_BitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set SPI_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set SPI_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_BitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set SPI_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set SPI_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set SPI_BSPIM_BitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set SPI_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set SPI_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set SPI_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set SPI_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set SPI_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set SPI_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B1_UDB10_11_ST
.set SPI_BSPIM_RxStsReg__4__MASK, 0x10
.set SPI_BSPIM_RxStsReg__4__POS, 4
.set SPI_BSPIM_RxStsReg__5__MASK, 0x20
.set SPI_BSPIM_RxStsReg__5__POS, 5
.set SPI_BSPIM_RxStsReg__6__MASK, 0x40
.set SPI_BSPIM_RxStsReg__6__POS, 6
.set SPI_BSPIM_RxStsReg__MASK, 0x70
.set SPI_BSPIM_RxStsReg__MASK_REG, CYREG_B1_UDB10_MSK
.set SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set SPI_BSPIM_RxStsReg__STATUS_REG, CYREG_B1_UDB10_ST
.set SPI_BSPIM_sR8_Dp_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set SPI_BSPIM_sR8_Dp_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set SPI_BSPIM_sR8_Dp_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set SPI_BSPIM_sR8_Dp_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set SPI_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set SPI_BSPIM_sR8_Dp_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set SPI_BSPIM_sR8_Dp_u0__A0_REG, CYREG_B1_UDB09_A0
.set SPI_BSPIM_sR8_Dp_u0__A1_REG, CYREG_B1_UDB09_A1
.set SPI_BSPIM_sR8_Dp_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set SPI_BSPIM_sR8_Dp_u0__D0_REG, CYREG_B1_UDB09_D0
.set SPI_BSPIM_sR8_Dp_u0__D1_REG, CYREG_B1_UDB09_D1
.set SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set SPI_BSPIM_sR8_Dp_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set SPI_BSPIM_sR8_Dp_u0__F0_REG, CYREG_B1_UDB09_F0
.set SPI_BSPIM_sR8_Dp_u0__F1_REG, CYREG_B1_UDB09_F1
.set SPI_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set SPI_BSPIM_TxStsReg__0__MASK, 0x01
.set SPI_BSPIM_TxStsReg__0__POS, 0
.set SPI_BSPIM_TxStsReg__1__MASK, 0x02
.set SPI_BSPIM_TxStsReg__1__POS, 1
.set SPI_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set SPI_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B1_UDB08_09_ST
.set SPI_BSPIM_TxStsReg__2__MASK, 0x04
.set SPI_BSPIM_TxStsReg__2__POS, 2
.set SPI_BSPIM_TxStsReg__3__MASK, 0x08
.set SPI_BSPIM_TxStsReg__3__POS, 3
.set SPI_BSPIM_TxStsReg__4__MASK, 0x10
.set SPI_BSPIM_TxStsReg__4__POS, 4
.set SPI_BSPIM_TxStsReg__MASK, 0x1F
.set SPI_BSPIM_TxStsReg__MASK_REG, CYREG_B1_UDB08_MSK
.set SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set SPI_BSPIM_TxStsReg__STATUS_REG, CYREG_B1_UDB08_ST

/* SPI_CLK */
.set SPI_CLK__0__INTTYPE, CYREG_PICU5_INTTYPE0
.set SPI_CLK__0__MASK, 0x01
.set SPI_CLK__0__PC, CYREG_PRT5_PC0
.set SPI_CLK__0__PORT, 5
.set SPI_CLK__0__SHIFT, 0
.set SPI_CLK__AG, CYREG_PRT5_AG
.set SPI_CLK__AMUX, CYREG_PRT5_AMUX
.set SPI_CLK__BIE, CYREG_PRT5_BIE
.set SPI_CLK__BIT_MASK, CYREG_PRT5_BIT_MASK
.set SPI_CLK__BYP, CYREG_PRT5_BYP
.set SPI_CLK__CTL, CYREG_PRT5_CTL
.set SPI_CLK__DM0, CYREG_PRT5_DM0
.set SPI_CLK__DM1, CYREG_PRT5_DM1
.set SPI_CLK__DM2, CYREG_PRT5_DM2
.set SPI_CLK__DR, CYREG_PRT5_DR
.set SPI_CLK__INP_DIS, CYREG_PRT5_INP_DIS
.set SPI_CLK__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU5_BASE
.set SPI_CLK__LCD_COM_SEG, CYREG_PRT5_LCD_COM_SEG
.set SPI_CLK__LCD_EN, CYREG_PRT5_LCD_EN
.set SPI_CLK__MASK, 0x01
.set SPI_CLK__PORT, 5
.set SPI_CLK__PRT, CYREG_PRT5_PRT
.set SPI_CLK__PRTDSI__CAPS_SEL, CYREG_PRT5_CAPS_SEL
.set SPI_CLK__PRTDSI__DBL_SYNC_IN, CYREG_PRT5_DBL_SYNC_IN
.set SPI_CLK__PRTDSI__OE_SEL0, CYREG_PRT5_OE_SEL0
.set SPI_CLK__PRTDSI__OE_SEL1, CYREG_PRT5_OE_SEL1
.set SPI_CLK__PRTDSI__OUT_SEL0, CYREG_PRT5_OUT_SEL0
.set SPI_CLK__PRTDSI__OUT_SEL1, CYREG_PRT5_OUT_SEL1
.set SPI_CLK__PRTDSI__SYNC_OUT, CYREG_PRT5_SYNC_OUT
.set SPI_CLK__PS, CYREG_PRT5_PS
.set SPI_CLK__SHIFT, 0
.set SPI_CLK__SLW, CYREG_PRT5_SLW

/* SPI_Clock */
.set SPI_Clock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set SPI_Clock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set SPI_Clock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set SPI_Clock__CFG2_SRC_SEL_MASK, 0x07
.set SPI_Clock__INDEX, 0x00
.set SPI_Clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set SPI_Clock__PM_ACT_MSK, 0x01
.set SPI_Clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set SPI_Clock__PM_STBY_MSK, 0x01

/* SPI_CS */
.set SPI_CS__0__INTTYPE, CYREG_PICU5_INTTYPE2
.set SPI_CS__0__MASK, 0x04
.set SPI_CS__0__PC, CYREG_PRT5_PC2
.set SPI_CS__0__PORT, 5
.set SPI_CS__0__SHIFT, 2
.set SPI_CS__AG, CYREG_PRT5_AG
.set SPI_CS__AMUX, CYREG_PRT5_AMUX
.set SPI_CS__BIE, CYREG_PRT5_BIE
.set SPI_CS__BIT_MASK, CYREG_PRT5_BIT_MASK
.set SPI_CS__BYP, CYREG_PRT5_BYP
.set SPI_CS__CTL, CYREG_PRT5_CTL
.set SPI_CS__DM0, CYREG_PRT5_DM0
.set SPI_CS__DM1, CYREG_PRT5_DM1
.set SPI_CS__DM2, CYREG_PRT5_DM2
.set SPI_CS__DR, CYREG_PRT5_DR
.set SPI_CS__INP_DIS, CYREG_PRT5_INP_DIS
.set SPI_CS__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU5_BASE
.set SPI_CS__LCD_COM_SEG, CYREG_PRT5_LCD_COM_SEG
.set SPI_CS__LCD_EN, CYREG_PRT5_LCD_EN
.set SPI_CS__MASK, 0x04
.set SPI_CS__PORT, 5
.set SPI_CS__PRT, CYREG_PRT5_PRT
.set SPI_CS__PRTDSI__CAPS_SEL, CYREG_PRT5_CAPS_SEL
.set SPI_CS__PRTDSI__DBL_SYNC_IN, CYREG_PRT5_DBL_SYNC_IN
.set SPI_CS__PRTDSI__OE_SEL0, CYREG_PRT5_OE_SEL0
.set SPI_CS__PRTDSI__OE_SEL1, CYREG_PRT5_OE_SEL1
.set SPI_CS__PRTDSI__OUT_SEL0, CYREG_PRT5_OUT_SEL0
.set SPI_CS__PRTDSI__OUT_SEL1, CYREG_PRT5_OUT_SEL1
.set SPI_CS__PRTDSI__SYNC_OUT, CYREG_PRT5_SYNC_OUT
.set SPI_CS__PS, CYREG_PRT5_PS
.set SPI_CS__SHIFT, 2
.set SPI_CS__SLW, CYREG_PRT5_SLW

/* SPI_MISO */
.set SPI_MISO__0__INTTYPE, CYREG_PICU5_INTTYPE4
.set SPI_MISO__0__MASK, 0x10
.set SPI_MISO__0__PC, CYREG_PRT5_PC4
.set SPI_MISO__0__PORT, 5
.set SPI_MISO__0__SHIFT, 4
.set SPI_MISO__AG, CYREG_PRT5_AG
.set SPI_MISO__AMUX, CYREG_PRT5_AMUX
.set SPI_MISO__BIE, CYREG_PRT5_BIE
.set SPI_MISO__BIT_MASK, CYREG_PRT5_BIT_MASK
.set SPI_MISO__BYP, CYREG_PRT5_BYP
.set SPI_MISO__CTL, CYREG_PRT5_CTL
.set SPI_MISO__DM0, CYREG_PRT5_DM0
.set SPI_MISO__DM1, CYREG_PRT5_DM1
.set SPI_MISO__DM2, CYREG_PRT5_DM2
.set SPI_MISO__DR, CYREG_PRT5_DR
.set SPI_MISO__INP_DIS, CYREG_PRT5_INP_DIS
.set SPI_MISO__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU5_BASE
.set SPI_MISO__LCD_COM_SEG, CYREG_PRT5_LCD_COM_SEG
.set SPI_MISO__LCD_EN, CYREG_PRT5_LCD_EN
.set SPI_MISO__MASK, 0x10
.set SPI_MISO__PORT, 5
.set SPI_MISO__PRT, CYREG_PRT5_PRT
.set SPI_MISO__PRTDSI__CAPS_SEL, CYREG_PRT5_CAPS_SEL
.set SPI_MISO__PRTDSI__DBL_SYNC_IN, CYREG_PRT5_DBL_SYNC_IN
.set SPI_MISO__PRTDSI__OE_SEL0, CYREG_PRT5_OE_SEL0
.set SPI_MISO__PRTDSI__OE_SEL1, CYREG_PRT5_OE_SEL1
.set SPI_MISO__PRTDSI__OUT_SEL0, CYREG_PRT5_OUT_SEL0
.set SPI_MISO__PRTDSI__OUT_SEL1, CYREG_PRT5_OUT_SEL1
.set SPI_MISO__PRTDSI__SYNC_OUT, CYREG_PRT5_SYNC_OUT
.set SPI_MISO__PS, CYREG_PRT5_PS
.set SPI_MISO__SHIFT, 4
.set SPI_MISO__SLW, CYREG_PRT5_SLW

/* SPI_MOSI */
.set SPI_MOSI__0__INTTYPE, CYREG_PICU5_INTTYPE6
.set SPI_MOSI__0__MASK, 0x40
.set SPI_MOSI__0__PC, CYREG_PRT5_PC6
.set SPI_MOSI__0__PORT, 5
.set SPI_MOSI__0__SHIFT, 6
.set SPI_MOSI__AG, CYREG_PRT5_AG
.set SPI_MOSI__AMUX, CYREG_PRT5_AMUX
.set SPI_MOSI__BIE, CYREG_PRT5_BIE
.set SPI_MOSI__BIT_MASK, CYREG_PRT5_BIT_MASK
.set SPI_MOSI__BYP, CYREG_PRT5_BYP
.set SPI_MOSI__CTL, CYREG_PRT5_CTL
.set SPI_MOSI__DM0, CYREG_PRT5_DM0
.set SPI_MOSI__DM1, CYREG_PRT5_DM1
.set SPI_MOSI__DM2, CYREG_PRT5_DM2
.set SPI_MOSI__DR, CYREG_PRT5_DR
.set SPI_MOSI__INP_DIS, CYREG_PRT5_INP_DIS
.set SPI_MOSI__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU5_BASE
.set SPI_MOSI__LCD_COM_SEG, CYREG_PRT5_LCD_COM_SEG
.set SPI_MOSI__LCD_EN, CYREG_PRT5_LCD_EN
.set SPI_MOSI__MASK, 0x40
.set SPI_MOSI__PORT, 5
.set SPI_MOSI__PRT, CYREG_PRT5_PRT
.set SPI_MOSI__PRTDSI__CAPS_SEL, CYREG_PRT5_CAPS_SEL
.set SPI_MOSI__PRTDSI__DBL_SYNC_IN, CYREG_PRT5_DBL_SYNC_IN
.set SPI_MOSI__PRTDSI__OE_SEL0, CYREG_PRT5_OE_SEL0
.set SPI_MOSI__PRTDSI__OE_SEL1, CYREG_PRT5_OE_SEL1
.set SPI_MOSI__PRTDSI__OUT_SEL0, CYREG_PRT5_OUT_SEL0
.set SPI_MOSI__PRTDSI__OUT_SEL1, CYREG_PRT5_OUT_SEL1
.set SPI_MOSI__PRTDSI__SYNC_OUT, CYREG_PRT5_SYNC_OUT
.set SPI_MOSI__PS, CYREG_PRT5_PS
.set SPI_MOSI__SHIFT, 6
.set SPI_MOSI__SLW, CYREG_PRT5_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 18
.set CYDEV_CHIP_DIE_PSOC4A, 10
.set CYDEV_CHIP_DIE_PSOC5LP, 17
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 10
.set CYDEV_CHIP_MEMBER_4C, 15
.set CYDEV_CHIP_MEMBER_4D, 6
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 11
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 9
.set CYDEV_CHIP_MEMBER_4I, 14
.set CYDEV_CHIP_MEMBER_4J, 7
.set CYDEV_CHIP_MEMBER_4K, 8
.set CYDEV_CHIP_MEMBER_4L, 13
.set CYDEV_CHIP_MEMBER_4M, 12
.set CYDEV_CHIP_MEMBER_4N, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 17
.set CYDEV_CHIP_MEMBER_5B, 16
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
