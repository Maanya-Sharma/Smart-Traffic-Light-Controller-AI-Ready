#include "stm32f1xx_hal.h"
#include "pin_config.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_USART1_UART_Init(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_USART1_UART_Init();

    while (1)
    {
        // 1. Read vehicle sensors
        // 2. Calculate traffic density
        // 3. Control traffic lights
        // 4. Send data to AI module via UART
    }
}
