#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

typedef struct 
{
  uint8_t (*wifi_send)(char cmd[], int length, int retry);
  uint8_t (*wifi_receive)(char *bufferr);
} ESP_Opt_t;

uint8_t send(char cmd[], int length, int retry)
{
  printf("cmd : %s cmd_len : %d cmd_retry : %d\n", cmd, length, retry);
  return true;
}

uint8_t receive(char *bufferr)
{
  strcpy(bufferr, "OK");
  printf("%s\n", bufferr);
  return true;
}
int main()
{
  printf("example 1 : function pointer with strucher\n");
  static ESP_Opt_t ESP32_Opt =
  {
    .wifi_send = send,
    .wifi_receive = receive,
  };
  char rx_buff[10];
  char tx_buff[]= "AT";
  ESP32_Opt.wifi_send(tx_buff, strlen(tx_buff), 2);
  ESP32_Opt.wifi_receive(rx_buff);
  
  return 0;
}
