#include "includes/defines.h"
#include <esp_websocket_client.h>


void app_main(void)
{
	//Initialize NVS
	esp_err_t ret = nvs_flash_init();
	wifi_init_sta();

	const esp_websocket_client_config_t ws_cfg = {
    	.uri = "ws://192.168.71.164",
    	.port = 3000,
	};
	esp_websocket_client_handle_t client = esp_websocket_client_init(&ws_cfg);
	esp_websocket_client_start(client);

	while(1)
	{
		esp_websocket_client_send_text(client, "hi", 3, 0);
		vTaskDelay(50 / portTICK_PERIOD_MS);
	}

	esp_websocket_client_stop(client);
	esp_websocket_client_destroy(client);
}