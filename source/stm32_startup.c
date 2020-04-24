
#include<stdint.h>

#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128U * 1024U) //128KB
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))

#define STACK_START   SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _la_data;

extern uint32_t _sbss;
extern uint32_t _ebss;

//prototype of main

int main(void);

void __libc_init_array(void);


/* function prototypes of STM32F407x system exception and IRQ handlers */

void Reset_Handler(void);

void NMI_Handler 					(void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler 			(void) __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler 					(void) __attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler   				(void) __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler  				(void) __attribute__ ((weak, alias("Default_Handler")));
void WWDG_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void PVD_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void TAMP_STAMP_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));      
void RTC_WKUP_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));                               
void RCC_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void EXTI0_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI1_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI3_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI4_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void DMA1_Stream0_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream1_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream2_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream3_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream4_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream5_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream6_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void ADC_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void CAN1_TX_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void CAN1_RX0_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void CAN1_RX1_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void CAN1_SCE_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void EXTI9_5_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM1_BRK_TIM9_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));   
void TIM1_UP_TIM10_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));   
void TIM1_TRG_COM_TIM11_IRQHandler 	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM3_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM4_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void I2C1_EV_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C1_ER_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C2_EV_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C2_ER_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void SPI1_IRQHandler  				(void) __attribute__ ((weak, alias("Default_Handler")));           
void SPI2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void USART1_IRQHandler  			(void) __attribute__ ((weak, alias("Default_Handler")));         
void USART2_IRQHandler  			(void) __attribute__ ((weak, alias("Default_Handler")));        
void USART3_IRQHandler   			(void) __attribute__ ((weak, alias("Default_Handler")));        
void EXTI15_10_IRQHandler   		(void) __attribute__ ((weak, alias("Default_Handler")));     
void RTC_Alarm_IRQHandler    		(void) __attribute__ ((weak, alias("Default_Handler")));    
void OTG_FS_WKUP_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler"))); 
void TIM8_BRK_TIM12_IRQHandler   	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_IRQHandler    	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_IRQHandler 	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_CC_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void FSMC_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void SDIO_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM5_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void SPI3_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void UART4_IRQHandler            	(void) __attribute__ ((weak, alias("Default_Handler")));
void UART5_IRQHandler            	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM6_DAC_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM7_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_IRQHandler              	(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_WKUP_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_TX_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX0_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX1_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_SCE_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void USART6_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_IRQHandler   	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_EP1_IN_IRQHandler    	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_WKUP_IRQHandler      	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void DCMI_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void CRYP_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void HASH_RNG_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void FPU_IRQHandler              	(void) __attribute__ ((weak, alias("Default_Handler")));                          


uint32_t vectors[] __attribute__((section(".isr_vector")))   = {
	STACK_START,
	(uint32_t)Reset_Handler,
	(uint32_t)NMI_Handler,
	(uint32_t)HardFault_Handler,
	(uint32_t)MemManage_Handler,
	(uint32_t)BusFault_Handler,
	(uint32_t)UsageFault_Handler,
	0,
	0,
	0,
	0,
	(uint32_t)SVC_Handler,
	(uint32_t)DebugMon_Handler,
	0,
	(uint32_t)PendSV_Handler,
	(uint32_t)SysTick_Handler,
	(uint32_t)WWDG_IRQHandler,
	(uint32_t)PVD_IRQHandler,         
	(uint32_t)TAMP_STAMP_IRQHandler,  
	(uint32_t)RTC_WKUP_IRQHandler,    
	0,                      
	(uint32_t)RCC_IRQHandler,         
	(uint32_t)EXTI0_IRQHandler,       
	(uint32_t)EXTI1_IRQHandler,       
	(uint32_t)EXTI2_IRQHandler,       
	(uint32_t)EXTI3_IRQHandler,       
	(uint32_t)EXTI4_IRQHandler,       
	(uint32_t)DMA1_Stream0_IRQHandler,
	(uint32_t)DMA1_Stream1_IRQHandler,
	(uint32_t)DMA1_Stream2_IRQHandler,
	(uint32_t)DMA1_Stream3_IRQHandler,
	(uint32_t)DMA1_Stream4_IRQHandler,
	(uint32_t)DMA1_Stream5_IRQHandler,
	(uint32_t)DMA1_Stream6_IRQHandler,
	(uint32_t)ADC_IRQHandler,         
	(uint32_t)CAN1_TX_IRQHandler,     
	(uint32_t)CAN1_RX0_IRQHandler,    
	(uint32_t)CAN1_RX1_IRQHandler,    
	(uint32_t)CAN1_SCE_IRQHandler,    
	(uint32_t)EXTI9_5_IRQHandler,     
	(uint32_t)TIM1_BRK_TIM9_IRQHandler,
	(uint32_t)TIM1_UP_TIM10_IRQHandler,
	(uint32_t)TIM1_TRG_COM_TIM11_IRQHandler,
	(uint32_t)TIM1_CC_IRQHandler,     
	(uint32_t)TIM2_IRQHandler,        
	(uint32_t)TIM3_IRQHandler,        
	(uint32_t)TIM4_IRQHandler,        
	(uint32_t)I2C1_EV_IRQHandler,     
	(uint32_t)I2C1_ER_IRQHandler,     
	(uint32_t)I2C2_EV_IRQHandler,     
	(uint32_t)I2C2_ER_IRQHandler,     
	(uint32_t)SPI1_IRQHandler,        
	(uint32_t)SPI2_IRQHandler,        
	(uint32_t)USART1_IRQHandler,      
	(uint32_t)USART2_IRQHandler,      
	(uint32_t)USART3_IRQHandler,      
	(uint32_t)EXTI15_10_IRQHandler,   
	(uint32_t)RTC_Alarm_IRQHandler,   
	(uint32_t)OTG_FS_WKUP_IRQHandler, 
	(uint32_t)TIM8_BRK_TIM12_IRQHandler,
	(uint32_t)TIM8_UP_TIM13_IRQHandler,
	(uint32_t)TIM8_TRG_COM_TIM14_IRQHandler,
	(uint32_t)TIM8_CC_IRQHandler,     
	(uint32_t)DMA1_Stream7_IRQHandler,
	(uint32_t)FSMC_IRQHandler,        
	(uint32_t)SDIO_IRQHandler,        
	(uint32_t)TIM5_IRQHandler,        
	(uint32_t)SPI3_IRQHandler,        
	(uint32_t)UART4_IRQHandler,       
	(uint32_t)UART5_IRQHandler,       
	(uint32_t)TIM6_DAC_IRQHandler,    
	(uint32_t)TIM7_IRQHandler,        
	(uint32_t)DMA2_Stream0_IRQHandler,
	(uint32_t)DMA2_Stream1_IRQHandler,
	(uint32_t)DMA2_Stream2_IRQHandler,
	(uint32_t)DMA2_Stream3_IRQHandler,
	(uint32_t)DMA2_Stream4_IRQHandler,
	(uint32_t)ETH_IRQHandler,         
	(uint32_t)ETH_WKUP_IRQHandler,    
	(uint32_t)CAN2_TX_IRQHandler,     
	(uint32_t)CAN2_RX0_IRQHandler,    
	(uint32_t)CAN2_RX1_IRQHandler,    
	(uint32_t)CAN2_SCE_IRQHandler,    
	(uint32_t)OTG_FS_IRQHandler,      
	(uint32_t)DMA2_Stream5_IRQHandler,
	(uint32_t)DMA2_Stream6_IRQHandler,
	(uint32_t)DMA2_Stream7_IRQHandler,
	(uint32_t)USART6_IRQHandler,      
	(uint32_t)I2C3_EV_IRQHandler,     
	(uint32_t)I2C3_ER_IRQHandler,     
	(uint32_t)OTG_HS_EP1_OUT_IRQHandler,
	(uint32_t)OTG_HS_EP1_IN_IRQHandler,
	(uint32_t)OTG_HS_WKUP_IRQHandler, 
	(uint32_t)OTG_HS_IRQHandler,      
	(uint32_t)DCMI_IRQHandler,        
	(uint32_t)CRYP_IRQHandler,        
	(uint32_t)HASH_RNG_IRQHandler,    
	(uint32_t)FPU_IRQHandler,         
};


void Default_Handler(void)
{
	while(1);
}

void Reset_Handler(void)
{
	//copy .data section to SRAM
	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
	
	uint8_t *pDst = (uint8_t*)&_sdata; //sram
	uint8_t *pSrc = (uint8_t*)&_la_data; //flash
	
	for(uint32_t i =0 ; i < size ; i++)
	{
		*pDst++ = *pSrc++;
	}
	
	//Init. the .bss section to zero in SRAM
	size = (uint32_t)&_ebss - (uint32_t)&_sbss;
	pDst = (uint8_t*)&_sbss;
	for(uint32_t i =0 ; i < size ; i++)
	{
		*pDst++ = 0;
	}

	__libc_init_array();
	
	main();
	
}







