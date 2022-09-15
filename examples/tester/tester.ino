#include <MAX7219Segment.h>

#define DIN 12
#define CLK 11
#define CS  10

MAX7219Segment display = MAX7219Segment(DIN, CS, CLK);

void setup() {
  display.setBright(10); // 1 - 15
  display.setDigitLimit(8);

  display.printDigit(-123, 4);
  display.printDot(2);
  display.printDigit(-456);
  display.printDot(6);
}

void loop() {

}
