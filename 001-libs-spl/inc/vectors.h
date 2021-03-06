/*-----------------------------------------------------------------------------
* Author: Boris Vinogradov(nis) : no111u3@gmail.com
* File: vectors.h
* Type: C header file
* Project: STM32F4D
* 2013
*-----------------------------------------------------------------------------*/
/* default(weak) handler */
void default_handler(void);
/* prototypes of functions with weak defenition */
void reset_handler(void) __attribute__ ((weak, alias ("default_handler")));
void nmi_handler(void) __attribute__ ((weak, alias ("default_handler")));
void hard_fault_handler(void) __attribute__ ((weak, alias ("default_handler")));
void mem_manage_handler(void) __attribute__ ((weak, alias ("default_handler")));
void bus_fault_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usage_fault_handler(void) __attribute__ ((weak, alias ("default_handler")));
void svcall_handler(void) __attribute__ ((weak, alias ("default_handler")));
void debug_monitor_handler(void) __attribute__ ((weak, alias ("default_handler")));
void pend_sv_handler(void) __attribute__ ((weak, alias ("default_handler")));
void systic_handler(void) __attribute__ ((weak, alias ("default_handler")));
void wwdg_handler(void) __attribute__ ((weak, alias ("default_handler")));
void pvd_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tamp_stamp_handler(void) __attribute__ ((weak, alias ("default_handler")));
void rtc_wkup_handler(void) __attribute__ ((weak, alias ("default_handler")));
void flash_handler(void) __attribute__ ((weak, alias ("default_handler")));
void rcc_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti0_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti4_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str0_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str4_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str5_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str6_handler(void) __attribute__ ((weak, alias ("default_handler")));
void adc_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can1_tx_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can1_rx0_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can1_rx1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can1_sce_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exit9_5_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim1_brk_tim9_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim1_up_tim10_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim1_trg_com_tim11_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim1_cc_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim4_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c1_ev_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c1_er_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c2_ev_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c2_er_handler(void) __attribute__ ((weak, alias ("default_handler")));
void spi1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void spi2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usart1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usart2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usart3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void exti15_10_handler(void) __attribute__ ((weak, alias ("default_handler")));
void rtc_alarm_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usb_otg_fs_wkup_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim8_brk_tim12_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim8_up_tim13_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim8_trg_com_tim14_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim8_cc_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma1_str7_handler(void) __attribute__ ((weak, alias ("default_handler")));
void fsmc_handler(void) __attribute__ ((weak, alias ("default_handler")));
void sdio_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim5_handler(void) __attribute__ ((weak, alias ("default_handler")));
void spi3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void uart4_handler(void) __attribute__ ((weak, alias ("default_handler")));
void uart5_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim6_dac_handler(void) __attribute__ ((weak, alias ("default_handler")));
void tim7_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str0_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str2_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str3_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str4_handler(void) __attribute__ ((weak, alias ("default_handler")));
void eth_handler(void) __attribute__ ((weak, alias ("default_handler")));
void eth_wkup_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can2_tx_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can2_rx0_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can2_rx1_handler(void) __attribute__ ((weak, alias ("default_handler")));
void can2_sce_handler(void) __attribute__ ((weak, alias ("default_handler")));
void otg_fs_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str5_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str6_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dma2_str7_handler(void) __attribute__ ((weak, alias ("default_handler")));
void usart6_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c3_ev_handler(void) __attribute__ ((weak, alias ("default_handler")));
void i2c3_er_handler(void) __attribute__ ((weak, alias ("default_handler")));
void otg_hs_ep1_out_handler(void) __attribute__ ((weak, alias ("default_handler")));
void otg_hs_ep1_in_handler(void) __attribute__ ((weak, alias ("default_handler")));
void otg_hs_wkup_handler(void) __attribute__ ((weak, alias ("default_handler")));
void oth_hs_handler(void) __attribute__ ((weak, alias ("default_handler")));
void dcmi_handler(void) __attribute__ ((weak, alias ("default_handler")));
void cryp_handler(void) __attribute__ ((weak, alias ("default_handler")));
void hash_rng_handler(void) __attribute__ ((weak, alias ("default_handler")));
void fpu_handler(void) __attribute__ ((weak, alias ("default_handler")));