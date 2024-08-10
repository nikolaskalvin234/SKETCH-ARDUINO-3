//#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremote.h>
const int IRpin = A1;
IRrecv irrecv(IRpin);
decode_results results;

void setup() {
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume();
  }
  delay (100);
}
