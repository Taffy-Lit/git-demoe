GPIO_Init();
if (Read_GPIO_Pin(GPIO_PIN_0) == GPIO_PIN_SET) {
    // Pin is high
    GPIO_WritePin(GPIO_PIN_1, GPIO_PIN_SET); // Set another pin high
} else {
    // Pin is low
    GPIO_WritePin(GPIO_PIN_1, GPIO_PIN_RESET); // Set another pin low
}

uint8_t count ;
count++;
if(count == 500)
{
    GPIO_DeInit();
}