#ifndef DEF_FILE
#define DEF_FILE

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include <string.h>
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "lwip/err.h"
#include "lwip/sys.h"


#define EXAMPLE_ESP_WIFI_SSID      "S10"

#define EXAMPLE_ESP_WIFI_PASS      "yasser123"

#define EXAMPLE_ESP_MAXIMUM_RETRY 10

#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA_PSK

#define WIFI_CONNECTED_BIT BIT0

#define WIFI_FAIL_BIT      BIT1


static void event_handler(void* arg, esp_event_base_t event_base,
                                int32_t event_id, void* event_data);
void wifi_init_sta(void);

#endif