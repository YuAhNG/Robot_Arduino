/***********************************************************/
//Hardware: 2 x LED Matrix module
//Board:  Arduino UNO R3
//Function: Display EYES
/***************************************************************/

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 4; // Attach CS to this pin, DIN to MOSI and CLK to SCK (cf http://arduino.cc/en/Reference/SPI )
int numberOfHorizontalDisplays = 1;
int numberOfVerticalDisplays = 1;

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);


void setup() {
 matrix.fillScreen(LOW);
 matrix.write();
 delay(400);
 matrix.fillScreen(HIGH);
 matrix.write();
 delay(400);

}

void loop() {
 
 matrix.drawPixel(2-1, 5-2, HIGH);
 matrix.drawPixel(3-1, 4-2, HIGH);
 matrix.drawPixel(4-1, 4-2, HIGH);
 matrix.drawPixel(4-1, 5-2, HIGH);
 matrix.drawPixel(5-1, 4-2, HIGH);
 matrix.drawPixel(5-1, 5-2, HIGH);
 matrix.drawPixel(6-1, 4-2, HIGH);
 matrix.drawPixel(7-1, 5-2, HIGH);
 matrix.write(); // Send bitmap to display
 delay(4700);
 matrix.fillScreen(LOW);
 matrix.write();
 delay(300);
}

