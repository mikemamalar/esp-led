#include <stdio.h>
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "esp_err.h"
#include "nvs_flash.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/ledc.h"
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "string.h"
#include "led.h"


//用户函数入口，相当于main函数
void app_main()
{
    int time=100;    

    initLed();//LED IO口初始化
    while(1) {
          led_red(LED_ON);//打开红灯
          vTaskDelay(time);              //延时
          led_red(LED_OFF);//关闭红灯
          vTaskDelay(time);              //延时

          led_green(LED_ON);//打开绿灯
          vTaskDelay(time);
          led_green(LED_OFF);//关闭绿灯
          vTaskDelay(time);

          led_blue(LED_ON);//打开蓝灯
          vTaskDelay(time);
          led_blue(LED_OFF);//关闭蓝灯
          vTaskDelay(time);
    }
}


