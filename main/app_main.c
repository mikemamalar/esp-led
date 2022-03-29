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


//�û�������ڣ��൱��main����
void app_main()
{
    int time=100;    

    initLed();//LED IO�ڳ�ʼ��
    while(1) {
          led_red(LED_ON);//�򿪺��
          vTaskDelay(time);              //��ʱ
          led_red(LED_OFF);//�رպ��
          vTaskDelay(time);              //��ʱ

          led_green(LED_ON);//���̵�
          vTaskDelay(time);
          led_green(LED_OFF);//�ر��̵�
          vTaskDelay(time);

          led_blue(LED_ON);//������
          vTaskDelay(time);
          led_blue(LED_OFF);//�ر�����
          vTaskDelay(time);
    }
}


