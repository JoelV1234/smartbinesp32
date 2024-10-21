#include <stdio.h> //for basic printf commands
#include <string.h> //for handling strings
#include "nvs_flash.h" //non volatile storage
#include "freertos/FreeRTOS.h" //for delay,mutexs,semphrs rtos operations
#include "wifi_api.h"
#include "ble_api.h"

void app_main(void) {
    nvs_flash_init();
    
}