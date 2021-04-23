#ifndef PWM_H
#define PWM_H
#include "main.h"
void setDutyCycle(TIM_HandleTypeDef htimx,uint32_t channel,uint8_t duty,uint8_t freq);
uint8_t getDutyCycle(TIM_HandleTypeDef htimx,uint32_t channel);
uint8_t getInputPulseFreq(TIM_HandleTypeDef htimx,uint32_t channel);
#endif
