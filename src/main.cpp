#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_ADDRESS);
void setup() {
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC,OLED_ADDRESS)) {
        Serial.println('OLed not found');
        while (true);
    }
    display.clearDisplay();
// write your initialization code here
    display.setTextColor(1);
    display.setTextSize(SSD1306_WHITE);

    display.setCursor(0,0);
    display.println("Ardunio UNO R4");
    display.println("OLED with I2C");
    display.println("Hello World");
display.display();
}

void loop() {
// write your code here
}