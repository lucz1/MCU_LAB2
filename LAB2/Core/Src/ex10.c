/*
 * ex10.c
 *
 *  Created on: Oct 4, 2025
 *      Author: ADMIN
 */
#include "ex10.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
int start;
int i;
int count;
void updateLEDMatrix(int index){
	switch (count){
	case 0:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 1:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 2:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_SET );
		break;
	default:
		break;
	}
	GPIOB->ODR &= 0x00FF;
	GPIOB->ODR |= (matrix_buffer[index] << 8);
}

void ex10_init(){
	matrix_buffer[0] = 0x18;
	matrix_buffer[1] = 0x24;
	matrix_buffer[2] = 0x66;
	matrix_buffer[3] = 0x99;
	matrix_buffer[4] = 0x99;
	matrix_buffer[5] = 0x66;
	matrix_buffer[6] = 0x24;
	matrix_buffer[7] = 0x18;
	start = 0;
	i = 7;
	count = 7;
}
void ex10_run(){
	updateLEDMatrix(i);
	i--;
	count--;
	if(count < 0) {
		count = 7;
		i = start;
		start = (start + 1) % 8;
	}
	if(i < 0) i = 7;
}


