#include <stm32f10x.h>
#include <stm32f10x_rcc.h>
#include <stm32f10x_gpio.h>

void Delay(uint32_t nTime);

int main(void) {
	GPIO_InitTypeDef GPIO_InitStructure;


	//Enable Peripheral Clocks

	//Configure pins

	//Configure Systick Timer


	while (1) {
		static int ledval = 0;

		// toggle led

		Delay(250);
	}
}

//Timer Code

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line) {
/*infinite loop*/
/* Use gdbb to find out why we're here */

while (1);
}
#endif
