    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; ss
ss__0__INTTYPE EQU CYREG_PICU5_INTTYPE3
ss__0__MASK EQU 0x08
ss__0__PC EQU CYREG_PRT5_PC3
ss__0__PORT EQU 5
ss__0__SHIFT EQU 3
ss__AG EQU CYREG_PRT5_AG
ss__AMUX EQU CYREG_PRT5_AMUX
ss__BIE EQU CYREG_PRT5_BIE
ss__BIT_MASK EQU CYREG_PRT5_BIT_MASK
ss__BYP EQU CYREG_PRT5_BYP
ss__CTL EQU CYREG_PRT5_CTL
ss__DM0 EQU CYREG_PRT5_DM0
ss__DM1 EQU CYREG_PRT5_DM1
ss__DM2 EQU CYREG_PRT5_DM2
ss__DR EQU CYREG_PRT5_DR
ss__INP_DIS EQU CYREG_PRT5_INP_DIS
ss__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
ss__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
ss__LCD_EN EQU CYREG_PRT5_LCD_EN
ss__MASK EQU 0x08
ss__PORT EQU 5
ss__PRT EQU CYREG_PRT5_PRT
ss__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
ss__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
ss__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
ss__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
ss__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
ss__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
ss__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
ss__PS EQU CYREG_PRT5_PS
ss__SHIFT EQU 3
ss__SLW EQU CYREG_PRT5_SLW

; LCD_LCDPort
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; SPIM_BSPIM
SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
SPIM_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B1_UDB10_CTL
SPIM_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
SPIM_BSPIM_BitCounter__COUNT_REG EQU CYREG_B1_UDB10_CTL
SPIM_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B1_UDB10_MSK
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
SPIM_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B1_UDB10_MSK
SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB10_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB10_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B1_UDB10_ST
SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
SPIM_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_RxStsReg__4__POS EQU 4
SPIM_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_BSPIM_RxStsReg__5__POS EQU 5
SPIM_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_BSPIM_RxStsReg__6__POS EQU 6
SPIM_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_BSPIM_RxStsReg__MASK_REG EQU CYREG_B1_UDB09_MSK
SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
SPIM_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B1_UDB09_ST
SPIM_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
SPIM_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
SPIM_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
SPIM_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
SPIM_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
SPIM_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
SPIM_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
SPIM_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
SPIM_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B1_UDB10_A0
SPIM_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B1_UDB10_A1
SPIM_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
SPIM_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B1_UDB10_D0
SPIM_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B1_UDB10_D1
SPIM_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
SPIM_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
SPIM_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B1_UDB10_F0
SPIM_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B1_UDB10_F1
SPIM_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
SPIM_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_BSPIM_TxStsReg__0__POS EQU 0
SPIM_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_BSPIM_TxStsReg__1__POS EQU 1
SPIM_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_BSPIM_TxStsReg__2__POS EQU 2
SPIM_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_BSPIM_TxStsReg__3__POS EQU 3
SPIM_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_TxStsReg__4__POS EQU 4
SPIM_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_BSPIM_TxStsReg__MASK_REG EQU CYREG_B1_UDB11_MSK
SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
SPIM_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B1_UDB11_ST

; miso
miso__0__INTTYPE EQU CYREG_PICU5_INTTYPE1
miso__0__MASK EQU 0x02
miso__0__PC EQU CYREG_PRT5_PC1
miso__0__PORT EQU 5
miso__0__SHIFT EQU 1
miso__AG EQU CYREG_PRT5_AG
miso__AMUX EQU CYREG_PRT5_AMUX
miso__BIE EQU CYREG_PRT5_BIE
miso__BIT_MASK EQU CYREG_PRT5_BIT_MASK
miso__BYP EQU CYREG_PRT5_BYP
miso__CTL EQU CYREG_PRT5_CTL
miso__DM0 EQU CYREG_PRT5_DM0
miso__DM1 EQU CYREG_PRT5_DM1
miso__DM2 EQU CYREG_PRT5_DM2
miso__DR EQU CYREG_PRT5_DR
miso__INP_DIS EQU CYREG_PRT5_INP_DIS
miso__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
miso__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
miso__LCD_EN EQU CYREG_PRT5_LCD_EN
miso__MASK EQU 0x02
miso__PORT EQU 5
miso__PRT EQU CYREG_PRT5_PRT
miso__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
miso__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
miso__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
miso__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
miso__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
miso__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
miso__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
miso__PS EQU CYREG_PRT5_PS
miso__SHIFT EQU 1
miso__SLW EQU CYREG_PRT5_SLW

; mosi
mosi__0__INTTYPE EQU CYREG_PICU5_INTTYPE2
mosi__0__MASK EQU 0x04
mosi__0__PC EQU CYREG_PRT5_PC2
mosi__0__PORT EQU 5
mosi__0__SHIFT EQU 2
mosi__AG EQU CYREG_PRT5_AG
mosi__AMUX EQU CYREG_PRT5_AMUX
mosi__BIE EQU CYREG_PRT5_BIE
mosi__BIT_MASK EQU CYREG_PRT5_BIT_MASK
mosi__BYP EQU CYREG_PRT5_BYP
mosi__CTL EQU CYREG_PRT5_CTL
mosi__DM0 EQU CYREG_PRT5_DM0
mosi__DM1 EQU CYREG_PRT5_DM1
mosi__DM2 EQU CYREG_PRT5_DM2
mosi__DR EQU CYREG_PRT5_DR
mosi__INP_DIS EQU CYREG_PRT5_INP_DIS
mosi__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
mosi__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
mosi__LCD_EN EQU CYREG_PRT5_LCD_EN
mosi__MASK EQU 0x04
mosi__PORT EQU 5
mosi__PRT EQU CYREG_PRT5_PRT
mosi__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
mosi__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
mosi__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
mosi__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
mosi__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
mosi__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
mosi__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
mosi__PS EQU CYREG_PRT5_PS
mosi__SHIFT EQU 2
mosi__SLW EQU CYREG_PRT5_SLW

; sclk
sclk__0__INTTYPE EQU CYREG_PICU5_INTTYPE0
sclk__0__MASK EQU 0x01
sclk__0__PC EQU CYREG_PRT5_PC0
sclk__0__PORT EQU 5
sclk__0__SHIFT EQU 0
sclk__AG EQU CYREG_PRT5_AG
sclk__AMUX EQU CYREG_PRT5_AMUX
sclk__BIE EQU CYREG_PRT5_BIE
sclk__BIT_MASK EQU CYREG_PRT5_BIT_MASK
sclk__BYP EQU CYREG_PRT5_BYP
sclk__CTL EQU CYREG_PRT5_CTL
sclk__DM0 EQU CYREG_PRT5_DM0
sclk__DM1 EQU CYREG_PRT5_DM1
sclk__DM2 EQU CYREG_PRT5_DM2
sclk__DR EQU CYREG_PRT5_DR
sclk__INP_DIS EQU CYREG_PRT5_INP_DIS
sclk__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
sclk__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
sclk__LCD_EN EQU CYREG_PRT5_LCD_EN
sclk__MASK EQU 0x01
sclk__PORT EQU 5
sclk__PRT EQU CYREG_PRT5_PRT
sclk__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
sclk__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
sclk__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
sclk__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
sclk__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
sclk__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
sclk__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
sclk__PS EQU CYREG_PRT5_PS
sclk__SHIFT EQU 0
sclk__SLW EQU CYREG_PRT5_SLW

; Clock
Clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock__CFG2_SRC_SEL_MASK EQU 0x07
Clock__INDEX EQU 0x00
Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock__PM_ACT_MSK EQU 0x01
Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock__PM_STBY_MSK EQU 0x01

; DMA_RX
DMA_RX__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DMA_RX__DRQ_NUMBER EQU 0
DMA_RX__NUMBEROF_TDS EQU 0
DMA_RX__PRIORITY EQU 2
DMA_RX__TERMIN_EN EQU 0
DMA_RX__TERMIN_SEL EQU 0
DMA_RX__TERMOUT0_EN EQU 0
DMA_RX__TERMOUT0_SEL EQU 0
DMA_RX__TERMOUT1_EN EQU 0
DMA_RX__TERMOUT1_SEL EQU 0

; DMA_TX
DMA_TX__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DMA_TX__DRQ_NUMBER EQU 1
DMA_TX__NUMBEROF_TDS EQU 0
DMA_TX__PRIORITY EQU 2
DMA_TX__TERMIN_EN EQU 0
DMA_TX__TERMIN_SEL EQU 0
DMA_TX__TERMOUT0_EN EQU 0
DMA_TX__TERMOUT0_SEL EQU 0
DMA_TX__TERMOUT1_EN EQU 0
DMA_TX__TERMOUT1_SEL EQU 0

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
