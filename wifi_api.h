#include "esp_wifi.h"
#include <stdio.h>
#include <string.h> 

void wifi_connection(char * ssid, char * passwd);
void wifi_init();
void wifi_scan(wifi_ap_record_t *ap_records);