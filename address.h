
/* MAIN ADDRESS */
#define FLASH_ADDR              0x08000000
#define SRAM_ADDR               0x20000000
#define PERIPH_BASE_ADDR        0x40000000


/* OFF SETS*/
#define RCC_OFF_SET             0x00021000

#define TIM1_OFF_SET            0x00012C00
#define TIM2_OFF_SET            0x00000000
#define TIM3_OFF_SET            0x00000400
#define TIM4_OFF_SET            0x00000800
#define RTC_OFF_SET             0x00002800

#define SPI1_OFF_SET            0x00013000
#define SPI2_OFF_SET            0x00003800

#define USART1_OFF_SET          0x00013800
#define USART2_OFF_SET          0x00004400
#define USART3_OFF_SET          0x00004800

#define I2C1_OFF_SET            0x00005400
#define I2C2_OFF_SET            0x00005800

#define AFIO_OFF_SET            0x00010000
#define EXTI_OFF_SET            0x00010400

#define GPIOA_OFF_SET           0x00010800
#define GPIOB_OFF_SET           0x00010C00
#define GPIOC_OFF_SET           0x00011000
#define GPIOD_OFF_SET           0x00011400
#define GPIOE_OFF_SET           0x00011800

#define ADC1_OFF_SET            0x00012400
#define ADC2_OFF_SET            0x00012800

#define CRC_OFF_SET             0x00023000

/* ADDRESS */
#define RCC_ADDR                PERIPH_BASE_ADDR + RCC_OFF_SET

#define TIM1_ADDR               PERIPH_BASE_ADDR + TIM1_OFF_SET
#define TIM2_ADDR               PERIPH_BASE_ADDR + TIM2_OFF_SET
#define TIM3_ADDR               PERIPH_BASE_ADDR + TIM3_OFF_SET
#define TIM4_ADDR               PERIPH_BASE_ADDR + TIM4_OFF_SET

#define RTC_ADDR                PERIPH_BASE_ADDR + RTC_OFF_SET

#define SPI1_ADDR               PERIPH_BASE_ADDR + SPI1_OFF_SET
#define SPI2_ADDR               PERIPH_BASE_ADDR + SPI2_OFF_SET

#define USART1_ADDR             PERIPH_BASE_ADDR + USART1_OFF_SET
#define USART2_ADDR             PERIPH_BASE_ADDR + USART2_OFF_SET
#define USART3_ADDR             PERIPH_BASE_ADDR + USART3_OFF_SET

#define I2C1_ADDR               PERIPH_BASE_ADDR + I2C1_OFF_SET
#define I2C2_ADDR               PERIPH_BASE_ADDR + I2C2_OFF_SET

#define AFIO_ADDR               PERIPH_BASE_ADDR + AFIO_OFF_SET

#define EXT1_ADDR               PERIPH_BASE_ADDR + EXTI_OFF_SET

#define GPIOA_ADDR              PERIPH_BASE_ADDR + GPIOA_OFF_SET
#define GPIOB_ADDR              PERIPH_BASE_ADDR + GPIOB_OFF_SET
#define GPIOC_ADDR              PERIPH_BASE_ADDR + GPIOC_OFF_SET
#define GPIOD_ADDR              PERIPH_BASE_ADDR + GPIOD_OFF_SET
#define GPIOE_ADDR              PERIPH_BASE_ADDR + GPIOE_OFF_SET

#define ADC1_ADDR               PERIPH_BASE_ADDR + ADC1_OFF_SET
#define ADC2_ADDR               PERIPH_BASE_ADDR + ADC2_OFF_SET

#define CRC_ADDR                PERIPH_BASE_ADDR + CRC_OFF_SET
