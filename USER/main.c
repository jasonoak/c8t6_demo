#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

 int main(void)
 {	
	delay_init();	    //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
	while(1)
	{
	
	}
 }

