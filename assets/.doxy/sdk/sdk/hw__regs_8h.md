

# File hw\_regs.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**hw\_regs.h**](hw__regs_8h.md)

[Go to the source code of this file](hw__regs_8h_source.md)



* `#include <types.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_RAMRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0x80000000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) [**\_\_CPRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC000000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) [**\_\_PERegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC001000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) [**\_\_VIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC002000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_PIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC003000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) [**\_\_MIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC004000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) [**\_\_DSPRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC005000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_DIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC006000) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_SIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC006400) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_EXIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC006800) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) [**\_\_AIRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC006C00) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) [**\_\_GXRegs**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[] | [**AT\_ADDRESS**](#function-at_address) (0xCC008000) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**AI\_CR**](hw__regs_8h.md#define-ai_cr)  `(0)`<br> |
| define  | [**AI\_IT**](hw__regs_8h.md#define-ai_it)  `(3)`<br> |
| define  | [**AI\_SCNT**](hw__regs_8h.md#define-ai_scnt)  `(2)`<br> |
| define  | [**AI\_VR**](hw__regs_8h.md#define-ai_vr)  `(1)`<br> |
| define  | [**CP\_BBBOTTOM**](hw__regs_8h.md#define-cp_bbbottom)  `(11)`<br> |
| define  | [**CP\_BBLEFT**](hw__regs_8h.md#define-cp_bbleft)  `(8)`<br> |
| define  | [**CP\_BBRIGHT**](hw__regs_8h.md#define-cp_bbright)  `(9)`<br> |
| define  | [**CP\_BBTOP**](hw__regs_8h.md#define-cp_bbtop)  `(10)`<br> |
| define  | [**CP\_CLEAR**](hw__regs_8h.md#define-cp_clear)  `(2)`<br> |
| define  | [**CP\_CR**](hw__regs_8h.md#define-cp_cr)  `(1)`<br> |
| define  | [**CP\_FIFO\_BASE**](hw__regs_8h.md#define-cp_fifo_base)  `(16)`<br> |
| define  | [**CP\_FIFO\_BASE\_U**](hw__regs_8h.md#define-cp_fifo_base_u)  `(17)`<br> |
| define  | [**CP\_FIFO\_BP**](hw__regs_8h.md#define-cp_fifo_bp)  `(30)`<br> |
| define  | [**CP\_FIFO\_BP\_U**](hw__regs_8h.md#define-cp_fifo_bp_u)  `(31)`<br> |
| define  | [**CP\_FIFO\_DIST**](hw__regs_8h.md#define-cp_fifo_dist)  `(24)`<br> |
| define  | [**CP\_FIFO\_DIST\_U**](hw__regs_8h.md#define-cp_fifo_dist_u)  `(25)`<br> |
| define  | [**CP\_FIFO\_END**](hw__regs_8h.md#define-cp_fifo_end)  `(18)`<br> |
| define  | [**CP\_FIFO\_END\_U**](hw__regs_8h.md#define-cp_fifo_end_u)  `(19)`<br> |
| define  | [**CP\_FIFO\_HIGH\_MARK**](hw__regs_8h.md#define-cp_fifo_high_mark)  `(20)`<br> |
| define  | [**CP\_FIFO\_HIGH\_MARK\_U**](hw__regs_8h.md#define-cp_fifo_high_mark_u)  `(21)`<br> |
| define  | [**CP\_FIFO\_LOW\_MARK**](hw__regs_8h.md#define-cp_fifo_low_mark)  `(22)`<br> |
| define  | [**CP\_FIFO\_LOW\_MARK\_U**](hw__regs_8h.md#define-cp_fifo_low_mark_u)  `(23)`<br> |
| define  | [**CP\_FIFO\_READ**](hw__regs_8h.md#define-cp_fifo_read)  `(28)`<br> |
| define  | [**CP\_FIFO\_READ\_U**](hw__regs_8h.md#define-cp_fifo_read_u)  `(29)`<br> |
| define  | [**CP\_FIFO\_WRITE**](hw__regs_8h.md#define-cp_fifo_write)  `(26)`<br> |
| define  | [**CP\_FIFO\_WRITE\_U**](hw__regs_8h.md#define-cp_fifo_write_u)  `(27)`<br> |
| define  | [**CP\_SR**](hw__regs_8h.md#define-cp_sr)  `(0)`<br> |
| define  | [**CP\_TOKEN**](hw__regs_8h.md#define-cp_token)  `(4)`<br> |
| define  | [**DI\_CFG**](hw__regs_8h.md#define-di_cfg)  `(9)`<br> |
| define  | [**DI\_CMDBUF\_0**](hw__regs_8h.md#define-di_cmdbuf_0)  `(2)`<br> |
| define  | [**DI\_CMDBUF\_1**](hw__regs_8h.md#define-di_cmdbuf_1)  `(3)`<br> |
| define  | [**DI\_CMDBUF\_2**](hw__regs_8h.md#define-di_cmdbuf_2)  `(4)`<br> |
| define  | [**DI\_CR**](hw__regs_8h.md#define-di_cr)  `(7)`<br> |
| define  | [**DI\_CVR**](hw__regs_8h.md#define-di_cvr)  `(1)`<br> |
| define  | [**DI\_IMMBUF**](hw__regs_8h.md#define-di_immbuf)  `(8)`<br> |
| define  | [**DI\_LENGTH**](hw__regs_8h.md#define-di_length)  `(6)`<br> |
| define  | [**DI\_MAR**](hw__regs_8h.md#define-di_mar)  `(5)`<br> |
| define  | [**DI\_SR**](hw__regs_8h.md#define-di_sr)  `(0)`<br> |
| define  | [**DSP\_AR\_DMA\_ARAM**](hw__regs_8h.md#define-dsp_ar_dma_aram)  `(18)`<br> |
| define  | [**DSP\_AR\_DMA\_ARAM\_U**](hw__regs_8h.md#define-dsp_ar_dma_aram_u)  `(19)`<br> |
| define  | [**DSP\_AR\_DMA\_MM**](hw__regs_8h.md#define-dsp_ar_dma_mm)  `(16)`<br> |
| define  | [**DSP\_AR\_DMA\_MM\_U**](hw__regs_8h.md#define-dsp_ar_dma_mm_u)  `(17)`<br> |
| define  | [**DSP\_AR\_DMA\_SIZE**](hw__regs_8h.md#define-dsp_ar_dma_size)  `(20)`<br> |
| define  | [**DSP\_AR\_DMA\_SIZE\_U**](hw__regs_8h.md#define-dsp_ar_dma_size_u)  `(21)`<br> |
| define  | [**DSP\_AR\_MODE**](hw__regs_8h.md#define-dsp_ar_mode)  `(11)`<br> |
| define  | [**DSP\_AR\_REFRESH**](hw__regs_8h.md#define-dsp_ar_refresh)  `(13)`<br> |
| define  | [**DSP\_AR\_SIZE**](hw__regs_8h.md#define-dsp_ar_size)  `(9)`<br> |
| define  | [**DSP\_CSR**](hw__regs_8h.md#define-dsp_csr)  `(5)`<br> |
| define  | [**DSP\_DMA\_BYTES\_LEFT**](hw__regs_8h.md#define-dsp_dma_bytes_left)  `(29)`<br> |
| define  | [**DSP\_DMA\_CONTROL\_LEN**](hw__regs_8h.md#define-dsp_dma_control_len)  `(27)`<br> |
| define  | [**DSP\_DMA\_START**](hw__regs_8h.md#define-dsp_dma_start)  `(24)`<br> |
| define  | [**DSP\_DMA\_START\_U**](hw__regs_8h.md#define-dsp_dma_start_u)  `(25)`<br> |
| define  | [**DSP\_MAILBOX\_IN**](hw__regs_8h.md#define-dsp_mailbox_in)  `(0)`<br> |
| define  | [**DSP\_MAILBOX\_IN\_U**](hw__regs_8h.md#define-dsp_mailbox_in_u)  `(1)`<br> |
| define  | [**DSP\_MAILBOX\_OUT**](hw__regs_8h.md#define-dsp_mailbox_out)  `(2)`<br> |
| define  | [**DSP\_MAILBOX\_OUT\_U**](hw__regs_8h.md#define-dsp_mailbox_out_u)  `(3)`<br> |
| define  | [**EXI\_C0\_CR**](hw__regs_8h.md#define-exi_c0_cr)  `(3)`<br> |
| define  | [**EXI\_C0\_DATA**](hw__regs_8h.md#define-exi_c0_data)  `(4)`<br> |
| define  | [**EXI\_C0\_LENGTH**](hw__regs_8h.md#define-exi_c0_length)  `(2)`<br> |
| define  | [**EXI\_C0\_MAR**](hw__regs_8h.md#define-exi_c0_mar)  `(1)`<br> |
| define  | [**EXI\_C0\_SR**](hw__regs_8h.md#define-exi_c0_sr)  `(0)`<br> |
| define  | [**EXI\_C1\_CR**](hw__regs_8h.md#define-exi_c1_cr)  `(8)`<br> |
| define  | [**EXI\_C1\_DATA**](hw__regs_8h.md#define-exi_c1_data)  `(9)`<br> |
| define  | [**EXI\_C1\_LENGTH**](hw__regs_8h.md#define-exi_c1_length)  `(7)`<br> |
| define  | [**EXI\_C1\_MAR**](hw__regs_8h.md#define-exi_c1_mar)  `(6)`<br> |
| define  | [**EXI\_C1\_SR**](hw__regs_8h.md#define-exi_c1_sr)  `(5)`<br> |
| define  | [**EXI\_C2\_CR**](hw__regs_8h.md#define-exi_c2_cr)  `(13)`<br> |
| define  | [**EXI\_C2\_DATA**](hw__regs_8h.md#define-exi_c2_data)  `(14)`<br> |
| define  | [**EXI\_C2\_LENGTH**](hw__regs_8h.md#define-exi_c2_length)  `(12)`<br> |
| define  | [**EXI\_C2\_MAR**](hw__regs_8h.md#define-exi_c2_mar)  `(11)`<br> |
| define  | [**EXI\_C2\_SR**](hw__regs_8h.md#define-exi_c2_sr)  `(10)`<br> |
| define  | [**MI\_ACK**](hw__regs_8h.md#define-mi_ack)  `(8)`<br> |
| define  | [**MI\_INT\_CAUSE**](hw__regs_8h.md#define-mi_int_cause)  `(7)`<br> |
| define  | [**MI\_INT\_MASK**](hw__regs_8h.md#define-mi_int_mask)  `(6)`<br> |
| define  | [**MI\_PROT\_1**](hw__regs_8h.md#define-mi_prot_1)  `(0)`<br> |
| define  | [**MI\_PROT\_2**](hw__regs_8h.md#define-mi_prot_2)  `(1)`<br> |
| define  | [**MI\_PROT\_3**](hw__regs_8h.md#define-mi_prot_3)  `(2)`<br> |
| define  | [**MI\_PROT\_4**](hw__regs_8h.md#define-mi_prot_4)  `(3)`<br> |
| define  | [**MI\_PROT\_TYPE**](hw__regs_8h.md#define-mi_prot_type)  `(4)`<br> |
| define  | [**MI\_REG**](hw__regs_8h.md#define-mi_reg)  `(9)`<br> |
| define  | [**MI\_REG\_U**](hw__regs_8h.md#define-mi_reg_u)  `(10)`<br> |
| define  | [**PE\_PI\_ALPHA\_THRESHOLD\_ID**](hw__regs_8h.md#define-pe_pi_alpha_threshold_id)  `(0x03)`<br> |
| define  | [**PE\_PI\_CMODE0\_ID**](hw__regs_8h.md#define-pe_pi_cmode0_id)  `(0x01)`<br> |
| define  | [**PE\_PI\_CMODE1\_ID**](hw__regs_8h.md#define-pe_pi_cmode1_id)  `(0x02)`<br> |
| define  | [**PE\_PI\_CTL\_ID**](hw__regs_8h.md#define-pe_pi_ctl_id)  `(0x04)`<br> |
| define  | [**PE\_PI\_INTRCTL\_ID**](hw__regs_8h.md#define-pe_pi_intrctl_id)  `(0x05)`<br> |
| define  | [**PE\_PI\_INTRSTAT\_ID**](hw__regs_8h.md#define-pe_pi_intrstat_id)  `(0x06)`<br> |
| define  | [**PE\_PI\_TOKEN\_ID**](hw__regs_8h.md#define-pe_pi_token_id)  `(0x07)`<br> |
| define  | [**PE\_PI\_XBOUND0\_ID**](hw__regs_8h.md#define-pe_pi_xbound0_id)  `(0x08)`<br> |
| define  | [**PE\_PI\_XBOUND1\_ID**](hw__regs_8h.md#define-pe_pi_xbound1_id)  `(0x09)`<br> |
| define  | [**PE\_PI\_YBOUND0\_ID**](hw__regs_8h.md#define-pe_pi_ybound0_id)  `(0x0A)`<br> |
| define  | [**PE\_PI\_YBOUND1\_ID**](hw__regs_8h.md#define-pe_pi_ybound1_id)  `(0x0B)`<br> |
| define  | [**PE\_PI\_ZMODE\_ID**](hw__regs_8h.md#define-pe_pi_zmode_id)  `(0x00)`<br> |
| define  | [**PI\_EAR**](hw__regs_8h.md#define-pi_ear)  `(6)`<br> |
| define  | [**PI\_ESR**](hw__regs_8h.md#define-pi_esr)  `(5)`<br> |
| define  | [**PI\_FIFO\_BASE\_END**](hw__regs_8h.md#define-pi_fifo_base_end)  `(3)`<br> |
| define  | [**PI\_FIFO\_BASE\_START**](hw__regs_8h.md#define-pi_fifo_base_start)  `(2)`<br> |
| define  | [**PI\_FIFO\_WRITE\_PTR**](hw__regs_8h.md#define-pi_fifo_write_ptr)  `(4)`<br> |
| define  | [**PI\_INTMR**](hw__regs_8h.md#define-pi_intmr)  `(1)`<br> |
| define  | [**PI\_INTSR**](hw__regs_8h.md#define-pi_intsr)  `(0)`<br> |
| define  | [**PI\_RESET**](hw__regs_8h.md#define-pi_reset)  `(7)`<br> |
| define  | [**PI\_RESET\_CODE**](hw__regs_8h.md#define-pi_reset_code)  `(9)`<br> |
| define  | [**PI\_TYPE**](hw__regs_8h.md#define-pi_type)  `(8)`<br> |
| define  | [**RAM\_ARAM\_SIZE**](hw__regs_8h.md#define-ram_aram_size)  `(52)`<br> |
| define  | [**RAM\_ARENA**](hw__regs_8h.md#define-ram_arena)  `(12)`<br> |
| define  | [**RAM\_ARENA\_U**](hw__regs_8h.md#define-ram_arena_u)  `(13)`<br> |
| define  | [**RAM\_BUS\_CLOCK\_SPEED**](hw__regs_8h.md#define-ram_bus_clock_speed)  `(62)`<br> |
| define  | [**RAM\_CONSOLE\_TYPE**](hw__regs_8h.md#define-ram_console_type)  `(11)`<br> |
| define  | [**RAM\_CPU\_CLOCK\_SPEED**](hw__regs_8h.md#define-ram_cpu_clock_speed)  `(63)`<br> |
| define  | [**RAM\_DBG\_EXCEPT\_HOOK\_DEST**](hw__regs_8h.md#define-ram_dbg_except_hook_dest)  `(18)`<br> |
| define  | [**RAM\_DBG\_EXCEPT\_MASK**](hw__regs_8h.md#define-ram_dbg_except_mask)  `(17)`<br> |
| define  | [**RAM\_DBG\_FLAG**](hw__regs_8h.md#define-ram_dbg_flag)  `(16)`<br> |
| define  | [**RAM\_DBG\_HOOK\_PTR**](hw__regs_8h.md#define-ram_dbg_hook_ptr)  `(24)`<br> |
| define  | [**RAM\_DBG\_LR\_TEMP**](hw__regs_8h.md#define-ram_dbg_lr_temp)  `(19)`<br> |
| define  | [**RAM\_DBG\_MONITOR\_PTR**](hw__regs_8h.md#define-ram_dbg_monitor_ptr)  `(58)`<br> |
| define  | [**RAM\_DBG\_MONITOR\_SIZE**](hw__regs_8h.md#define-ram_dbg_monitor_size)  `(57)`<br> |
| define  | [**RAM\_DVD\_BI2\_POS**](hw__regs_8h.md#define-ram_dvd_bi2_pos)  `(61)`<br> |
| define  | [**RAM\_DVD\_INFO**](hw__regs_8h.md#define-ram_dvd_info)  `(0)`<br> |
| define  | [**RAM\_DVD\_MAGIC\_WORD**](hw__regs_8h.md#define-ram_dvd_magic_word)  `(7)`<br> |
| define  | [**RAM\_FST\_MAX\_LENGTH**](hw__regs_8h.md#define-ram_fst_max_length)  `(15)`<br> |
| define  | [**RAM\_FST\_POS**](hw__regs_8h.md#define-ram_fst_pos)  `(14)`<br> |
| define  | [**RAM\_IRQ\_ALIGN**](hw__regs_8h.md#define-ram_irq_align)  `(284)`<br> |
| define  | [**RAM\_IRQ\_DECREMENTER**](hw__regs_8h.md#define-ram_irq_decrementer)  `(576)`<br> |
| define  | [**RAM\_IRQ\_DSI**](hw__regs_8h.md#define-ram_irq_dsi)  `(192)`<br> |
| define  | [**RAM\_IRQ\_EXT**](hw__regs_8h.md#define-ram_irq_ext)  `(320)`<br> |
| define  | [**RAM\_IRQ\_FP\_UNAVAIL**](hw__regs_8h.md#define-ram_irq_fp_unavail)  `(512)`<br> |
| define  | [**RAM\_IRQ\_IABR**](hw__regs_8h.md#define-ram_irq_iabr)  `(1216)`<br> |
| define  | [**RAM\_IRQ\_ISI**](hw__regs_8h.md#define-ram_irq_isi)  `(256)`<br> |
| define  | [**RAM\_IRQ\_MACHINECHECK**](hw__regs_8h.md#define-ram_irq_machinecheck)  `(128)`<br> |
| define  | [**RAM\_IRQ\_PERFORMANCE\_MONITOR**](hw__regs_8h.md#define-ram_irq_performance_monitor)  `(960)`<br> |
| define  | [**RAM\_IRQ\_PROG**](hw__regs_8h.md#define-ram_irq_prog)  `(448)`<br> |
| define  | [**RAM\_IRQ\_RESET**](hw__regs_8h.md#define-ram_irq_reset)  `(64)`<br> |
| define  | [**RAM\_IRQ\_SYSCALL**](hw__regs_8h.md#define-ram_irq_syscall)  `(768)`<br> |
| define  | [**RAM\_IRQ\_THERMAL**](hw__regs_8h.md#define-ram_irq_thermal)  `(1472)`<br> |
| define  | [**RAM\_IRQ\_TRACE**](hw__regs_8h.md#define-ram_irq_trace)  `(832)`<br> |
| define  | [**RAM\_MAGIC\_WORD**](hw__regs_8h.md#define-ram_magic_word)  `(8)`<br> |
| define  | [**RAM\_OS\_CONTEXT\_LOGICAL\_CURR**](hw__regs_8h.md#define-ram_os_context_logical_curr)  `(53)`<br> |
| define  | [**RAM\_OS\_CONTX\_PHYS\_CURR**](hw__regs_8h.md#define-ram_os_contx_phys_curr)  `(48)`<br> |
| define  | [**RAM\_OS\_INT\_MASK\_CURR**](hw__regs_8h.md#define-ram_os_int_mask_curr)  `(50)`<br> |
| define  | [**RAM\_OS\_INT\_MASK\_PREV**](hw__regs_8h.md#define-ram_os_int_mask_prev)  `(49)`<br> |
| define  | [**RAM\_OS\_THREAD\_ACTIVE\_HEAD**](hw__regs_8h.md#define-ram_os_thread_active_head)  `(55)`<br> |
| define  | [**RAM\_OS\_THREAD\_ACTIVE\_TAIL**](hw__regs_8h.md#define-ram_os_thread_active_tail)  `(56)`<br> |
| define  | [**RAM\_OS\_THREAD\_CURRENT**](hw__regs_8h.md#define-ram_os_thread_current)  `(56)`<br> |
| define  | [**RAM\_OS\_THREAD\_LOGICAL\_DEF**](hw__regs_8h.md#define-ram_os_thread_logical_def)  `(54)`<br> |
| define  | [**RAM\_PHYS\_MEM\_SIZE**](hw__regs_8h.md#define-ram_phys_mem_size)  `(10)`<br> |
| define  | [**RAM\_TV\_MODE**](hw__regs_8h.md#define-ram_tv_mode)  `(51)`<br> |
| define  | [**RAM\_VERSION**](hw__regs_8h.md#define-ram_version)  `(9)`<br> |
| define  | [**RAM\_VIRT\_MEM\_SIZE**](hw__regs_8h.md#define-ram_virt_mem_size)  `(60)`<br> |
| define  | [**SI\_BUFFER**](hw__regs_8h.md#define-si_buffer)  `(16)`<br> |
| define  | [**SI\_C0\_INBUF**](hw__regs_8h.md#define-si_c0_inbuf)  `(1)`<br> |
| define  | [**SI\_C0\_INBUF\_U**](hw__regs_8h.md#define-si_c0_inbuf_u)  `(2)`<br> |
| define  | [**SI\_C0\_OUTBUF**](hw__regs_8h.md#define-si_c0_outbuf)  `(0)`<br> |
| define  | [**SI\_C1\_INBUF**](hw__regs_8h.md#define-si_c1_inbuf)  `(4)`<br> |
| define  | [**SI\_C1\_INBUF\_U**](hw__regs_8h.md#define-si_c1_inbuf_u)  `(5)`<br> |
| define  | [**SI\_C1\_OUTBUF**](hw__regs_8h.md#define-si_c1_outbuf)  `(3)`<br> |
| define  | [**SI\_C2\_INBUF**](hw__regs_8h.md#define-si_c2_inbuf)  `(7)`<br> |
| define  | [**SI\_C2\_INBUF\_U**](hw__regs_8h.md#define-si_c2_inbuf_u)  `(8)`<br> |
| define  | [**SI\_C2\_OUTBUF**](hw__regs_8h.md#define-si_c2_outbuf)  `(6)`<br> |
| define  | [**SI\_C3\_INBUF**](hw__regs_8h.md#define-si_c3_inbuf)  `(10)`<br> |
| define  | [**SI\_C3\_INBUF\_U**](hw__regs_8h.md#define-si_c3_inbuf_u)  `(11)`<br> |
| define  | [**SI\_C3\_OUTBUF**](hw__regs_8h.md#define-si_c3_outbuf)  `(9)`<br> |
| define  | [**SI\_COMCSR**](hw__regs_8h.md#define-si_comcsr)  `(13)`<br> |
| define  | [**SI\_EXILK**](hw__regs_8h.md#define-si_exilk)  `(15)`<br> |
| define  | [**SI\_POLL**](hw__regs_8h.md#define-si_poll)  `(12)`<br> |
| define  | [**SI\_SR**](hw__regs_8h.md#define-si_sr)  `(14)`<br> |
| define  | [**VI\_BBI\_EVEN**](hw__regs_8h.md#define-vi_bbi_even)  `(12)`<br> |
| define  | [**VI\_BBI\_EVEN\_U**](hw__regs_8h.md#define-vi_bbi_even_u)  `(13)`<br> |
| define  | [**VI\_BBI\_ODD**](hw__regs_8h.md#define-vi_bbi_odd)  `(10)`<br> |
| define  | [**VI\_BBI\_ODD\_U**](hw__regs_8h.md#define-vi_bbi_odd_u)  `(11)`<br> |
| define  | [**VI\_BTTM\_FIELD\_BASE\_LEFT**](hw__regs_8h.md#define-vi_bttm_field_base_left)  `(18)`<br> |
| define  | [**VI\_BTTM\_FIELD\_BASE\_LEFT\_U**](hw__regs_8h.md#define-vi_bttm_field_base_left_u)  `(19)`<br> |
| define  | [**VI\_BTTM\_FIELD\_BASE\_RIGHT**](hw__regs_8h.md#define-vi_bttm_field_base_right)  `(20)`<br> |
| define  | [**VI\_BTTM\_FIELD\_BASE\_RIGHT\_U**](hw__regs_8h.md#define-vi_bttm_field_base_right_u)  `(21)`<br> |
| define  | [**VI\_CLOCK\_SEL**](hw__regs_8h.md#define-vi_clock_sel)  `(54)`<br> |
| define  | [**VI\_DISP\_CONFIG**](hw__regs_8h.md#define-vi_disp_config)  `(1)`<br> |
| define  | [**VI\_DISP\_INT\_0**](hw__regs_8h.md#define-vi_disp_int_0)  `(24)`<br> |
| define  | [**VI\_DISP\_INT\_0\_U**](hw__regs_8h.md#define-vi_disp_int_0_u)  `(25)`<br> |
| define  | [**VI\_DISP\_INT\_1**](hw__regs_8h.md#define-vi_disp_int_1)  `(26)`<br> |
| define  | [**VI\_DISP\_INT\_1\_U**](hw__regs_8h.md#define-vi_disp_int_1_u)  `(27)`<br> |
| define  | [**VI\_DISP\_INT\_2**](hw__regs_8h.md#define-vi_disp_int_2)  `(28)`<br> |
| define  | [**VI\_DISP\_INT\_2\_U**](hw__regs_8h.md#define-vi_disp_int_2_u)  `(29)`<br> |
| define  | [**VI\_DISP\_INT\_3**](hw__regs_8h.md#define-vi_disp_int_3)  `(30)`<br> |
| define  | [**VI\_DISP\_INT\_3\_U**](hw__regs_8h.md#define-vi_disp_int_3_u)  `(31)`<br> |
| define  | [**VI\_DISP\_LAT\_0**](hw__regs_8h.md#define-vi_disp_lat_0)  `(32)`<br> |
| define  | [**VI\_DISP\_LAT\_1**](hw__regs_8h.md#define-vi_disp_lat_1)  `(34)`<br> |
| define  | [**VI\_DTV\_STAT**](hw__regs_8h.md#define-vi_dtv_stat)  `(55)`<br> |
| define  | [**VI\_FCT\_0**](hw__regs_8h.md#define-vi_fct_0)  `(38)`<br> |
| define  | [**VI\_FCT\_0\_U**](hw__regs_8h.md#define-vi_fct_0_u)  `(39)`<br> |
| define  | [**VI\_FCT\_1**](hw__regs_8h.md#define-vi_fct_1)  `(40)`<br> |
| define  | [**VI\_FCT\_1\_U**](hw__regs_8h.md#define-vi_fct_1_u)  `(41)`<br> |
| define  | [**VI\_FCT\_2**](hw__regs_8h.md#define-vi_fct_2)  `(42)`<br> |
| define  | [**VI\_FCT\_2\_U**](hw__regs_8h.md#define-vi_fct_2_u)  `(43)`<br> |
| define  | [**VI\_FCT\_3**](hw__regs_8h.md#define-vi_fct_3)  `(44)`<br> |
| define  | [**VI\_FCT\_3\_U**](hw__regs_8h.md#define-vi_fct_3_u)  `(45)`<br> |
| define  | [**VI\_FCT\_4**](hw__regs_8h.md#define-vi_fct_4)  `(46)`<br> |
| define  | [**VI\_FCT\_4\_U**](hw__regs_8h.md#define-vi_fct_4_u)  `(47)`<br> |
| define  | [**VI\_FCT\_5**](hw__regs_8h.md#define-vi_fct_5)  `(48)`<br> |
| define  | [**VI\_FCT\_5\_U**](hw__regs_8h.md#define-vi_fct_5_u)  `(49)`<br> |
| define  | [**VI\_FCT\_6**](hw__regs_8h.md#define-vi_fct_6)  `(50)`<br> |
| define  | [**VI\_FCT\_6\_U**](hw__regs_8h.md#define-vi_fct_6_u)  `(51)`<br> |
| define  | [**VI\_HBE**](hw__regs_8h.md#define-vi_hbe)  `(57)`<br> |
| define  | [**VI\_HBS**](hw__regs_8h.md#define-vi_hbs)  `(58)`<br> |
| define  | [**VI\_HLINE**](hw__regs_8h.md#define-vi_hline)  `[**VI\_VERT\_COUNT**](hw__regs_8h.md#define-vi_vert_count)`<br> |
| define  | [**VI\_HORIZ\_COUNT**](hw__regs_8h.md#define-vi_horiz_count)  `(23)`<br> |
| define  | [**VI\_HORIZ\_TIMING\_0**](hw__regs_8h.md#define-vi_horiz_timing_0)  `(2)`<br> |
| define  | [**VI\_HORIZ\_TIMING\_0\_U**](hw__regs_8h.md#define-vi_horiz_timing_0_u)  `(3)`<br> |
| define  | [**VI\_HORIZ\_TIMING\_1**](hw__regs_8h.md#define-vi_horiz_timing_1)  `(4)`<br> |
| define  | [**VI\_HORIZ\_TIMING\_1\_U**](hw__regs_8h.md#define-vi_horiz_timing_1_u)  `(5)`<br> |
| define  | [**VI\_HSR**](hw__regs_8h.md#define-vi_hsr)  `(37)`<br> |
| define  | [**VI\_HSW**](hw__regs_8h.md#define-vi_hsw)  `(36)`<br> |
| define  | [**VI\_TOP\_FIELD\_BASE\_LEFT**](hw__regs_8h.md#define-vi_top_field_base_left)  `(14)`<br> |
| define  | [**VI\_TOP\_FIELD\_BASE\_LEFT\_U**](hw__regs_8h.md#define-vi_top_field_base_left_u)  `(15)`<br> |
| define  | [**VI\_TOP\_FIELD\_BASE\_RIGHT**](hw__regs_8h.md#define-vi_top_field_base_right)  `(16)`<br> |
| define  | [**VI\_TOP\_FIELD\_BASE\_RIGHT\_U**](hw__regs_8h.md#define-vi_top_field_base_right_u)  `(17)`<br> |
| define  | [**VI\_VERT\_COUNT**](hw__regs_8h.md#define-vi_vert_count)  `(22)`<br> |
| define  | [**VI\_VERT\_TIMING**](hw__regs_8h.md#define-vi_vert_timing)  `(0)`<br> |
| define  | [**VI\_VERT\_TIMING\_EVEN**](hw__regs_8h.md#define-vi_vert_timing_even)  `(8)`<br> |
| define  | [**VI\_VERT\_TIMING\_EVEN\_U**](hw__regs_8h.md#define-vi_vert_timing_even_u)  `(9)`<br> |
| define  | [**VI\_VERT\_TIMING\_ODD**](hw__regs_8h.md#define-vi_vert_timing_odd)  `(6)`<br> |
| define  | [**VI\_VERT\_TIMING\_ODD\_U**](hw__regs_8h.md#define-vi_vert_timing_odd_u)  `(7)`<br> |
| define  | [**VI\_WIDTH**](hw__regs_8h.md#define-vi_width)  `(56)`<br> |
| define  | [**VI\_XFB1**](hw__regs_8h.md#define-vi_xfb1)  `[**VI\_TOP\_FIELD\_BASE\_LEFT**](hw__regs_8h.md#define-vi_top_field_base_left)`<br> |
| define  | [**VI\_XFB2**](hw__regs_8h.md#define-vi_xfb2)  `[**VI\_BTTM\_FIELD\_BASE\_LEFT**](hw__regs_8h.md#define-vi_bttm_field_base_left)`<br> |

## Public Functions Documentation




### function AT\_ADDRESS 

```C++
volatile  u32  __RAMRegs [] AT_ADDRESS (
    0x80000000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u16  __CPRegs [] AT_ADDRESS (
    0xCC000000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u16  __PERegs [] AT_ADDRESS (
    0xCC001000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u16  __VIRegs [] AT_ADDRESS (
    0xCC002000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u32  __PIRegs [] AT_ADDRESS (
    0xCC003000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u16  __MIRegs [] AT_ADDRESS (
    0xCC004000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u16  __DSPRegs [] AT_ADDRESS (
    0xCC005000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u32  __DIRegs [] AT_ADDRESS (
    0xCC006000
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u32  __SIRegs [] AT_ADDRESS (
    0xCC006400
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u32  __EXIRegs [] AT_ADDRESS (
    0xCC006800
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u32  __AIRegs [] AT_ADDRESS (
    0xCC006C00
) 
```




<hr>



### function AT\_ADDRESS 

```C++
volatile  u8  __GXRegs [] AT_ADDRESS (
    0xCC008000
) 
```




<hr>
## Macro Definition Documentation





### define AI\_CR 

```C++
#define AI_CR `(0)`
```




<hr>



### define AI\_IT 

```C++
#define AI_IT `(3)`
```




<hr>



### define AI\_SCNT 

```C++
#define AI_SCNT `(2)`
```




<hr>



### define AI\_VR 

```C++
#define AI_VR `(1)`
```




<hr>



### define CP\_BBBOTTOM 

```C++
#define CP_BBBOTTOM `(11)`
```




<hr>



### define CP\_BBLEFT 

```C++
#define CP_BBLEFT `(8)`
```




<hr>



### define CP\_BBRIGHT 

```C++
#define CP_BBRIGHT `(9)`
```




<hr>



### define CP\_BBTOP 

```C++
#define CP_BBTOP `(10)`
```




<hr>



### define CP\_CLEAR 

```C++
#define CP_CLEAR `(2)`
```




<hr>



### define CP\_CR 

```C++
#define CP_CR `(1)`
```




<hr>



### define CP\_FIFO\_BASE 

```C++
#define CP_FIFO_BASE `(16)`
```




<hr>



### define CP\_FIFO\_BASE\_U 

```C++
#define CP_FIFO_BASE_U `(17)`
```




<hr>



### define CP\_FIFO\_BP 

```C++
#define CP_FIFO_BP `(30)`
```




<hr>



### define CP\_FIFO\_BP\_U 

```C++
#define CP_FIFO_BP_U `(31)`
```




<hr>



### define CP\_FIFO\_DIST 

```C++
#define CP_FIFO_DIST `(24)`
```




<hr>



### define CP\_FIFO\_DIST\_U 

```C++
#define CP_FIFO_DIST_U `(25)`
```




<hr>



### define CP\_FIFO\_END 

```C++
#define CP_FIFO_END `(18)`
```




<hr>



### define CP\_FIFO\_END\_U 

```C++
#define CP_FIFO_END_U `(19)`
```




<hr>



### define CP\_FIFO\_HIGH\_MARK 

```C++
#define CP_FIFO_HIGH_MARK `(20)`
```




<hr>



### define CP\_FIFO\_HIGH\_MARK\_U 

```C++
#define CP_FIFO_HIGH_MARK_U `(21)`
```




<hr>



### define CP\_FIFO\_LOW\_MARK 

```C++
#define CP_FIFO_LOW_MARK `(22)`
```




<hr>



### define CP\_FIFO\_LOW\_MARK\_U 

```C++
#define CP_FIFO_LOW_MARK_U `(23)`
```




<hr>



### define CP\_FIFO\_READ 

```C++
#define CP_FIFO_READ `(28)`
```




<hr>



### define CP\_FIFO\_READ\_U 

```C++
#define CP_FIFO_READ_U `(29)`
```




<hr>



### define CP\_FIFO\_WRITE 

```C++
#define CP_FIFO_WRITE `(26)`
```




<hr>



### define CP\_FIFO\_WRITE\_U 

```C++
#define CP_FIFO_WRITE_U `(27)`
```




<hr>



### define CP\_SR 

```C++
#define CP_SR `(0)`
```




<hr>



### define CP\_TOKEN 

```C++
#define CP_TOKEN `(4)`
```




<hr>



### define DI\_CFG 

```C++
#define DI_CFG `(9)`
```




<hr>



### define DI\_CMDBUF\_0 

```C++
#define DI_CMDBUF_0 `(2)`
```




<hr>



### define DI\_CMDBUF\_1 

```C++
#define DI_CMDBUF_1 `(3)`
```




<hr>



### define DI\_CMDBUF\_2 

```C++
#define DI_CMDBUF_2 `(4)`
```




<hr>



### define DI\_CR 

```C++
#define DI_CR `(7)`
```




<hr>



### define DI\_CVR 

```C++
#define DI_CVR `(1)`
```




<hr>



### define DI\_IMMBUF 

```C++
#define DI_IMMBUF `(8)`
```




<hr>



### define DI\_LENGTH 

```C++
#define DI_LENGTH `(6)`
```




<hr>



### define DI\_MAR 

```C++
#define DI_MAR `(5)`
```




<hr>



### define DI\_SR 

```C++
#define DI_SR `(0)`
```




<hr>



### define DSP\_AR\_DMA\_ARAM 

```C++
#define DSP_AR_DMA_ARAM `(18)`
```




<hr>



### define DSP\_AR\_DMA\_ARAM\_U 

```C++
#define DSP_AR_DMA_ARAM_U `(19)`
```




<hr>



### define DSP\_AR\_DMA\_MM 

```C++
#define DSP_AR_DMA_MM `(16)`
```




<hr>



### define DSP\_AR\_DMA\_MM\_U 

```C++
#define DSP_AR_DMA_MM_U `(17)`
```




<hr>



### define DSP\_AR\_DMA\_SIZE 

```C++
#define DSP_AR_DMA_SIZE `(20)`
```




<hr>



### define DSP\_AR\_DMA\_SIZE\_U 

```C++
#define DSP_AR_DMA_SIZE_U `(21)`
```




<hr>



### define DSP\_AR\_MODE 

```C++
#define DSP_AR_MODE `(11)`
```




<hr>



### define DSP\_AR\_REFRESH 

```C++
#define DSP_AR_REFRESH `(13)`
```




<hr>



### define DSP\_AR\_SIZE 

```C++
#define DSP_AR_SIZE `(9)`
```




<hr>



### define DSP\_CSR 

```C++
#define DSP_CSR `(5)`
```




<hr>



### define DSP\_DMA\_BYTES\_LEFT 

```C++
#define DSP_DMA_BYTES_LEFT `(29)`
```




<hr>



### define DSP\_DMA\_CONTROL\_LEN 

```C++
#define DSP_DMA_CONTROL_LEN `(27)`
```




<hr>



### define DSP\_DMA\_START 

```C++
#define DSP_DMA_START `(24)`
```




<hr>



### define DSP\_DMA\_START\_U 

```C++
#define DSP_DMA_START_U `(25)`
```




<hr>



### define DSP\_MAILBOX\_IN 

```C++
#define DSP_MAILBOX_IN `(0)`
```




<hr>



### define DSP\_MAILBOX\_IN\_U 

```C++
#define DSP_MAILBOX_IN_U `(1)`
```




<hr>



### define DSP\_MAILBOX\_OUT 

```C++
#define DSP_MAILBOX_OUT `(2)`
```




<hr>



### define DSP\_MAILBOX\_OUT\_U 

```C++
#define DSP_MAILBOX_OUT_U `(3)`
```




<hr>



### define EXI\_C0\_CR 

```C++
#define EXI_C0_CR `(3)`
```




<hr>



### define EXI\_C0\_DATA 

```C++
#define EXI_C0_DATA `(4)`
```




<hr>



### define EXI\_C0\_LENGTH 

```C++
#define EXI_C0_LENGTH `(2)`
```




<hr>



### define EXI\_C0\_MAR 

```C++
#define EXI_C0_MAR `(1)`
```




<hr>



### define EXI\_C0\_SR 

```C++
#define EXI_C0_SR `(0)`
```




<hr>



### define EXI\_C1\_CR 

```C++
#define EXI_C1_CR `(8)`
```




<hr>



### define EXI\_C1\_DATA 

```C++
#define EXI_C1_DATA `(9)`
```




<hr>



### define EXI\_C1\_LENGTH 

```C++
#define EXI_C1_LENGTH `(7)`
```




<hr>



### define EXI\_C1\_MAR 

```C++
#define EXI_C1_MAR `(6)`
```




<hr>



### define EXI\_C1\_SR 

```C++
#define EXI_C1_SR `(5)`
```




<hr>



### define EXI\_C2\_CR 

```C++
#define EXI_C2_CR `(13)`
```




<hr>



### define EXI\_C2\_DATA 

```C++
#define EXI_C2_DATA `(14)`
```




<hr>



### define EXI\_C2\_LENGTH 

```C++
#define EXI_C2_LENGTH `(12)`
```




<hr>



### define EXI\_C2\_MAR 

```C++
#define EXI_C2_MAR `(11)`
```




<hr>



### define EXI\_C2\_SR 

```C++
#define EXI_C2_SR `(10)`
```




<hr>



### define MI\_ACK 

```C++
#define MI_ACK `(8)`
```




<hr>



### define MI\_INT\_CAUSE 

```C++
#define MI_INT_CAUSE `(7)`
```




<hr>



### define MI\_INT\_MASK 

```C++
#define MI_INT_MASK `(6)`
```




<hr>



### define MI\_PROT\_1 

```C++
#define MI_PROT_1 `(0)`
```




<hr>



### define MI\_PROT\_2 

```C++
#define MI_PROT_2 `(1)`
```




<hr>



### define MI\_PROT\_3 

```C++
#define MI_PROT_3 `(2)`
```




<hr>



### define MI\_PROT\_4 

```C++
#define MI_PROT_4 `(3)`
```




<hr>



### define MI\_PROT\_TYPE 

```C++
#define MI_PROT_TYPE `(4)`
```




<hr>



### define MI\_REG 

```C++
#define MI_REG `(9)`
```




<hr>



### define MI\_REG\_U 

```C++
#define MI_REG_U `(10)`
```




<hr>



### define PE\_PI\_ALPHA\_THRESHOLD\_ID 

```C++
#define PE_PI_ALPHA_THRESHOLD_ID `(0x03)`
```




<hr>



### define PE\_PI\_CMODE0\_ID 

```C++
#define PE_PI_CMODE0_ID `(0x01)`
```




<hr>



### define PE\_PI\_CMODE1\_ID 

```C++
#define PE_PI_CMODE1_ID `(0x02)`
```




<hr>



### define PE\_PI\_CTL\_ID 

```C++
#define PE_PI_CTL_ID `(0x04)`
```




<hr>



### define PE\_PI\_INTRCTL\_ID 

```C++
#define PE_PI_INTRCTL_ID `(0x05)`
```




<hr>



### define PE\_PI\_INTRSTAT\_ID 

```C++
#define PE_PI_INTRSTAT_ID `(0x06)`
```




<hr>



### define PE\_PI\_TOKEN\_ID 

```C++
#define PE_PI_TOKEN_ID `(0x07)`
```




<hr>



### define PE\_PI\_XBOUND0\_ID 

```C++
#define PE_PI_XBOUND0_ID `(0x08)`
```




<hr>



### define PE\_PI\_XBOUND1\_ID 

```C++
#define PE_PI_XBOUND1_ID `(0x09)`
```




<hr>



### define PE\_PI\_YBOUND0\_ID 

```C++
#define PE_PI_YBOUND0_ID `(0x0A)`
```




<hr>



### define PE\_PI\_YBOUND1\_ID 

```C++
#define PE_PI_YBOUND1_ID `(0x0B)`
```




<hr>



### define PE\_PI\_ZMODE\_ID 

```C++
#define PE_PI_ZMODE_ID `(0x00)`
```




<hr>



### define PI\_EAR 

```C++
#define PI_EAR `(6)`
```




<hr>



### define PI\_ESR 

```C++
#define PI_ESR `(5)`
```




<hr>



### define PI\_FIFO\_BASE\_END 

```C++
#define PI_FIFO_BASE_END `(3)`
```




<hr>



### define PI\_FIFO\_BASE\_START 

```C++
#define PI_FIFO_BASE_START `(2)`
```




<hr>



### define PI\_FIFO\_WRITE\_PTR 

```C++
#define PI_FIFO_WRITE_PTR `(4)`
```




<hr>



### define PI\_INTMR 

```C++
#define PI_INTMR `(1)`
```




<hr>



### define PI\_INTSR 

```C++
#define PI_INTSR `(0)`
```




<hr>



### define PI\_RESET 

```C++
#define PI_RESET `(7)`
```




<hr>



### define PI\_RESET\_CODE 

```C++
#define PI_RESET_CODE `(9)`
```




<hr>



### define PI\_TYPE 

```C++
#define PI_TYPE `(8)`
```




<hr>



### define RAM\_ARAM\_SIZE 

```C++
#define RAM_ARAM_SIZE `(52)`
```




<hr>



### define RAM\_ARENA 

```C++
#define RAM_ARENA `(12)`
```




<hr>



### define RAM\_ARENA\_U 

```C++
#define RAM_ARENA_U `(13)`
```




<hr>



### define RAM\_BUS\_CLOCK\_SPEED 

```C++
#define RAM_BUS_CLOCK_SPEED `(62)`
```




<hr>



### define RAM\_CONSOLE\_TYPE 

```C++
#define RAM_CONSOLE_TYPE `(11)`
```




<hr>



### define RAM\_CPU\_CLOCK\_SPEED 

```C++
#define RAM_CPU_CLOCK_SPEED `(63)`
```




<hr>



### define RAM\_DBG\_EXCEPT\_HOOK\_DEST 

```C++
#define RAM_DBG_EXCEPT_HOOK_DEST `(18)`
```




<hr>



### define RAM\_DBG\_EXCEPT\_MASK 

```C++
#define RAM_DBG_EXCEPT_MASK `(17)`
```




<hr>



### define RAM\_DBG\_FLAG 

```C++
#define RAM_DBG_FLAG `(16)`
```




<hr>



### define RAM\_DBG\_HOOK\_PTR 

```C++
#define RAM_DBG_HOOK_PTR `(24)`
```




<hr>



### define RAM\_DBG\_LR\_TEMP 

```C++
#define RAM_DBG_LR_TEMP `(19)`
```




<hr>



### define RAM\_DBG\_MONITOR\_PTR 

```C++
#define RAM_DBG_MONITOR_PTR `(58)`
```




<hr>



### define RAM\_DBG\_MONITOR\_SIZE 

```C++
#define RAM_DBG_MONITOR_SIZE `(57)`
```




<hr>



### define RAM\_DVD\_BI2\_POS 

```C++
#define RAM_DVD_BI2_POS `(61)`
```




<hr>



### define RAM\_DVD\_INFO 

```C++
#define RAM_DVD_INFO `(0)`
```




<hr>



### define RAM\_DVD\_MAGIC\_WORD 

```C++
#define RAM_DVD_MAGIC_WORD `(7)`
```




<hr>



### define RAM\_FST\_MAX\_LENGTH 

```C++
#define RAM_FST_MAX_LENGTH `(15)`
```




<hr>



### define RAM\_FST\_POS 

```C++
#define RAM_FST_POS `(14)`
```




<hr>



### define RAM\_IRQ\_ALIGN 

```C++
#define RAM_IRQ_ALIGN `(284)`
```




<hr>



### define RAM\_IRQ\_DECREMENTER 

```C++
#define RAM_IRQ_DECREMENTER `(576)`
```




<hr>



### define RAM\_IRQ\_DSI 

```C++
#define RAM_IRQ_DSI `(192)`
```




<hr>



### define RAM\_IRQ\_EXT 

```C++
#define RAM_IRQ_EXT `(320)`
```




<hr>



### define RAM\_IRQ\_FP\_UNAVAIL 

```C++
#define RAM_IRQ_FP_UNAVAIL `(512)`
```




<hr>



### define RAM\_IRQ\_IABR 

```C++
#define RAM_IRQ_IABR `(1216)`
```




<hr>



### define RAM\_IRQ\_ISI 

```C++
#define RAM_IRQ_ISI `(256)`
```




<hr>



### define RAM\_IRQ\_MACHINECHECK 

```C++
#define RAM_IRQ_MACHINECHECK `(128)`
```




<hr>



### define RAM\_IRQ\_PERFORMANCE\_MONITOR 

```C++
#define RAM_IRQ_PERFORMANCE_MONITOR `(960)`
```




<hr>



### define RAM\_IRQ\_PROG 

```C++
#define RAM_IRQ_PROG `(448)`
```




<hr>



### define RAM\_IRQ\_RESET 

```C++
#define RAM_IRQ_RESET `(64)`
```




<hr>



### define RAM\_IRQ\_SYSCALL 

```C++
#define RAM_IRQ_SYSCALL `(768)`
```




<hr>



### define RAM\_IRQ\_THERMAL 

```C++
#define RAM_IRQ_THERMAL `(1472)`
```




<hr>



### define RAM\_IRQ\_TRACE 

```C++
#define RAM_IRQ_TRACE `(832)`
```




<hr>



### define RAM\_MAGIC\_WORD 

```C++
#define RAM_MAGIC_WORD `(8)`
```




<hr>



### define RAM\_OS\_CONTEXT\_LOGICAL\_CURR 

```C++
#define RAM_OS_CONTEXT_LOGICAL_CURR `(53)`
```




<hr>



### define RAM\_OS\_CONTX\_PHYS\_CURR 

```C++
#define RAM_OS_CONTX_PHYS_CURR `(48)`
```




<hr>



### define RAM\_OS\_INT\_MASK\_CURR 

```C++
#define RAM_OS_INT_MASK_CURR `(50)`
```




<hr>



### define RAM\_OS\_INT\_MASK\_PREV 

```C++
#define RAM_OS_INT_MASK_PREV `(49)`
```




<hr>



### define RAM\_OS\_THREAD\_ACTIVE\_HEAD 

```C++
#define RAM_OS_THREAD_ACTIVE_HEAD `(55)`
```




<hr>



### define RAM\_OS\_THREAD\_ACTIVE\_TAIL 

```C++
#define RAM_OS_THREAD_ACTIVE_TAIL `(56)`
```




<hr>



### define RAM\_OS\_THREAD\_CURRENT 

```C++
#define RAM_OS_THREAD_CURRENT `(56)`
```




<hr>



### define RAM\_OS\_THREAD\_LOGICAL\_DEF 

```C++
#define RAM_OS_THREAD_LOGICAL_DEF `(54)`
```




<hr>



### define RAM\_PHYS\_MEM\_SIZE 

```C++
#define RAM_PHYS_MEM_SIZE `(10)`
```




<hr>



### define RAM\_TV\_MODE 

```C++
#define RAM_TV_MODE `(51)`
```




<hr>



### define RAM\_VERSION 

```C++
#define RAM_VERSION `(9)`
```




<hr>



### define RAM\_VIRT\_MEM\_SIZE 

```C++
#define RAM_VIRT_MEM_SIZE `(60)`
```




<hr>



### define SI\_BUFFER 

```C++
#define SI_BUFFER `(16)`
```




<hr>



### define SI\_C0\_INBUF 

```C++
#define SI_C0_INBUF `(1)`
```




<hr>



### define SI\_C0\_INBUF\_U 

```C++
#define SI_C0_INBUF_U `(2)`
```




<hr>



### define SI\_C0\_OUTBUF 

```C++
#define SI_C0_OUTBUF `(0)`
```




<hr>



### define SI\_C1\_INBUF 

```C++
#define SI_C1_INBUF `(4)`
```




<hr>



### define SI\_C1\_INBUF\_U 

```C++
#define SI_C1_INBUF_U `(5)`
```




<hr>



### define SI\_C1\_OUTBUF 

```C++
#define SI_C1_OUTBUF `(3)`
```




<hr>



### define SI\_C2\_INBUF 

```C++
#define SI_C2_INBUF `(7)`
```




<hr>



### define SI\_C2\_INBUF\_U 

```C++
#define SI_C2_INBUF_U `(8)`
```




<hr>



### define SI\_C2\_OUTBUF 

```C++
#define SI_C2_OUTBUF `(6)`
```




<hr>



### define SI\_C3\_INBUF 

```C++
#define SI_C3_INBUF `(10)`
```




<hr>



### define SI\_C3\_INBUF\_U 

```C++
#define SI_C3_INBUF_U `(11)`
```




<hr>



### define SI\_C3\_OUTBUF 

```C++
#define SI_C3_OUTBUF `(9)`
```




<hr>



### define SI\_COMCSR 

```C++
#define SI_COMCSR `(13)`
```




<hr>



### define SI\_EXILK 

```C++
#define SI_EXILK `(15)`
```




<hr>



### define SI\_POLL 

```C++
#define SI_POLL `(12)`
```




<hr>



### define SI\_SR 

```C++
#define SI_SR `(14)`
```




<hr>



### define VI\_BBI\_EVEN 

```C++
#define VI_BBI_EVEN `(12)`
```




<hr>



### define VI\_BBI\_EVEN\_U 

```C++
#define VI_BBI_EVEN_U `(13)`
```




<hr>



### define VI\_BBI\_ODD 

```C++
#define VI_BBI_ODD `(10)`
```




<hr>



### define VI\_BBI\_ODD\_U 

```C++
#define VI_BBI_ODD_U `(11)`
```




<hr>



### define VI\_BTTM\_FIELD\_BASE\_LEFT 

```C++
#define VI_BTTM_FIELD_BASE_LEFT `(18)`
```




<hr>



### define VI\_BTTM\_FIELD\_BASE\_LEFT\_U 

```C++
#define VI_BTTM_FIELD_BASE_LEFT_U `(19)`
```




<hr>



### define VI\_BTTM\_FIELD\_BASE\_RIGHT 

```C++
#define VI_BTTM_FIELD_BASE_RIGHT `(20)`
```




<hr>



### define VI\_BTTM\_FIELD\_BASE\_RIGHT\_U 

```C++
#define VI_BTTM_FIELD_BASE_RIGHT_U `(21)`
```




<hr>



### define VI\_CLOCK\_SEL 

```C++
#define VI_CLOCK_SEL `(54)`
```




<hr>



### define VI\_DISP\_CONFIG 

```C++
#define VI_DISP_CONFIG `(1)`
```




<hr>



### define VI\_DISP\_INT\_0 

```C++
#define VI_DISP_INT_0 `(24)`
```




<hr>



### define VI\_DISP\_INT\_0\_U 

```C++
#define VI_DISP_INT_0_U `(25)`
```




<hr>



### define VI\_DISP\_INT\_1 

```C++
#define VI_DISP_INT_1 `(26)`
```




<hr>



### define VI\_DISP\_INT\_1\_U 

```C++
#define VI_DISP_INT_1_U `(27)`
```




<hr>



### define VI\_DISP\_INT\_2 

```C++
#define VI_DISP_INT_2 `(28)`
```




<hr>



### define VI\_DISP\_INT\_2\_U 

```C++
#define VI_DISP_INT_2_U `(29)`
```




<hr>



### define VI\_DISP\_INT\_3 

```C++
#define VI_DISP_INT_3 `(30)`
```




<hr>



### define VI\_DISP\_INT\_3\_U 

```C++
#define VI_DISP_INT_3_U `(31)`
```




<hr>



### define VI\_DISP\_LAT\_0 

```C++
#define VI_DISP_LAT_0 `(32)`
```




<hr>



### define VI\_DISP\_LAT\_1 

```C++
#define VI_DISP_LAT_1 `(34)`
```




<hr>



### define VI\_DTV\_STAT 

```C++
#define VI_DTV_STAT `(55)`
```




<hr>



### define VI\_FCT\_0 

```C++
#define VI_FCT_0 `(38)`
```




<hr>



### define VI\_FCT\_0\_U 

```C++
#define VI_FCT_0_U `(39)`
```




<hr>



### define VI\_FCT\_1 

```C++
#define VI_FCT_1 `(40)`
```




<hr>



### define VI\_FCT\_1\_U 

```C++
#define VI_FCT_1_U `(41)`
```




<hr>



### define VI\_FCT\_2 

```C++
#define VI_FCT_2 `(42)`
```




<hr>



### define VI\_FCT\_2\_U 

```C++
#define VI_FCT_2_U `(43)`
```




<hr>



### define VI\_FCT\_3 

```C++
#define VI_FCT_3 `(44)`
```




<hr>



### define VI\_FCT\_3\_U 

```C++
#define VI_FCT_3_U `(45)`
```




<hr>



### define VI\_FCT\_4 

```C++
#define VI_FCT_4 `(46)`
```




<hr>



### define VI\_FCT\_4\_U 

```C++
#define VI_FCT_4_U `(47)`
```




<hr>



### define VI\_FCT\_5 

```C++
#define VI_FCT_5 `(48)`
```




<hr>



### define VI\_FCT\_5\_U 

```C++
#define VI_FCT_5_U `(49)`
```




<hr>



### define VI\_FCT\_6 

```C++
#define VI_FCT_6 `(50)`
```




<hr>



### define VI\_FCT\_6\_U 

```C++
#define VI_FCT_6_U `(51)`
```




<hr>



### define VI\_HBE 

```C++
#define VI_HBE `(57)`
```




<hr>



### define VI\_HBS 

```C++
#define VI_HBS `(58)`
```




<hr>



### define VI\_HLINE 

```C++
#define VI_HLINE `VI_VERT_COUNT`
```




<hr>



### define VI\_HORIZ\_COUNT 

```C++
#define VI_HORIZ_COUNT `(23)`
```




<hr>



### define VI\_HORIZ\_TIMING\_0 

```C++
#define VI_HORIZ_TIMING_0 `(2)`
```




<hr>



### define VI\_HORIZ\_TIMING\_0\_U 

```C++
#define VI_HORIZ_TIMING_0_U `(3)`
```




<hr>



### define VI\_HORIZ\_TIMING\_1 

```C++
#define VI_HORIZ_TIMING_1 `(4)`
```




<hr>



### define VI\_HORIZ\_TIMING\_1\_U 

```C++
#define VI_HORIZ_TIMING_1_U `(5)`
```




<hr>



### define VI\_HSR 

```C++
#define VI_HSR `(37)`
```




<hr>



### define VI\_HSW 

```C++
#define VI_HSW `(36)`
```




<hr>



### define VI\_TOP\_FIELD\_BASE\_LEFT 

```C++
#define VI_TOP_FIELD_BASE_LEFT `(14)`
```




<hr>



### define VI\_TOP\_FIELD\_BASE\_LEFT\_U 

```C++
#define VI_TOP_FIELD_BASE_LEFT_U `(15)`
```




<hr>



### define VI\_TOP\_FIELD\_BASE\_RIGHT 

```C++
#define VI_TOP_FIELD_BASE_RIGHT `(16)`
```




<hr>



### define VI\_TOP\_FIELD\_BASE\_RIGHT\_U 

```C++
#define VI_TOP_FIELD_BASE_RIGHT_U `(17)`
```




<hr>



### define VI\_VERT\_COUNT 

```C++
#define VI_VERT_COUNT `(22)`
```




<hr>



### define VI\_VERT\_TIMING 

```C++
#define VI_VERT_TIMING `(0)`
```




<hr>



### define VI\_VERT\_TIMING\_EVEN 

```C++
#define VI_VERT_TIMING_EVEN `(8)`
```




<hr>



### define VI\_VERT\_TIMING\_EVEN\_U 

```C++
#define VI_VERT_TIMING_EVEN_U `(9)`
```




<hr>



### define VI\_VERT\_TIMING\_ODD 

```C++
#define VI_VERT_TIMING_ODD `(6)`
```




<hr>



### define VI\_VERT\_TIMING\_ODD\_U 

```C++
#define VI_VERT_TIMING_ODD_U `(7)`
```




<hr>



### define VI\_WIDTH 

```C++
#define VI_WIDTH `(56)`
```




<hr>



### define VI\_XFB1 

```C++
#define VI_XFB1 `VI_TOP_FIELD_BASE_LEFT`
```




<hr>



### define VI\_XFB2 

```C++
#define VI_XFB2 `VI_BTTM_FIELD_BASE_LEFT`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/hw_regs.h`

