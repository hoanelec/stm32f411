#include "PWM.h"
void setDutyCycle(TIM_HandleTypeDef htimx,uint32_t channel,uint8_t duty,uint8_t freq)
{
	__HAL_TIM_SET_COMPARE(&htimx,channel,duty/100 *freq);
}
uint8_t getDutyCycle(TIM_HandleTypeDef htimx,uint32_t channel)
{

}
uint8_t getInputPulseFreq(TIM_HandleTypeDef htimx,uint32_t channel)
{

}
