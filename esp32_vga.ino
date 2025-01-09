#include <ESP32Video.h>
#include <Ressources/Font6x8.h>
const int redPin = 14;
const int greenPin = 19;
const int bluePin = 27;
const int hsyncPin = 32;
const int vsyncPin = 33;
VGA1BitI videodisplay;
const uint8_t frontColors[] = {0x2, 0x0, 0x1, 0x4, 0x1, 0x7, 0x3};
const uint8_t backColors[] = {0x0, 0x7, 0x0, 0x6, 0x7, 0x0, 0x4};
void setup() {
videodisplay.init(VGAMode::MODE320x240, redPin, greenPin, bluePin, hsyncPin, vsyncPin);
videodisplay.setFont(Font6x8);
displayProjectInfo();
delay(5000);
videodisplay.clear();
}
void loop() {
for (int i = 0; i < 10; i++) {
videodisplay.setCursor(random(1, 300), random(1, 220));
videodisplay.println("Hello World!");
delay(250);
}
delay(1000);
videodisplay.clear();
displayProjectInfo();
delay(5000);
videodisplay.clear();
}
void displayProjectInfo() {
videodisplay.setCursor(60, 50);
videodisplay.println("OUR MPMC PROJECT");
videodisplay.setCursor(20, 80);
videodisplay.println("Submitted to :");
videodisplay.setCursor(20, 95);
videodisplay.println("Ananya Dastidar ,");
videodisplay.setCursor(20, 110);
videodisplay.println("Dilip Kumar Sahoo");
videodisplay.setCursor(20, 140);
videodisplay.println("Submitted by :");
videodisplay.setCursor(20, 155);
videodisplay.println("Abhijit , Sibashish , Ronak");
videodisplay.setCursor(20, 180);
videodisplay.print("Date: ");
videodisplay.println("11/11/2024");
delay(2000);
}
