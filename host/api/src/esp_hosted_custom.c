#include "esp_hosted_custom.h"
#include "esp_hosted_transport.h"
#include "transport_drv.h"

esp_err_t esp_hosted_send_custom(uint8_t type, uint8_t* payload, uint16_t payload_length) {
    return send_custom(type, payload, payload_length);
}

esp_err_t esp_hosted_set_custom_callback(esp_hosted_custom_recv_cb_t callback) {
    return set_custom_callback(callback);
}