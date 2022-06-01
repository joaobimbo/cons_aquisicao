#include <cstdio>
#include "ADS1263.h"

int main() {
	printf("hello world\n");

	DEV_Module_Init();
	ADS1263_ConfigADC1(ADS1263_GAIN_1, ADS1263_5SPS, ADS1263_DELAY_0s);

	if (ADS1263_init_ADC1(ADS1263_38400SPS) == 1) {
		printf("\r\n END \r\n");
		DEV_Module_Exit();
		exit(0);
	}


	ADS1263_SetMode(1); //differential mode



	return(0);
}