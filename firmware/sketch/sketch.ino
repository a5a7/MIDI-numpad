#include <USB.h>
#include <USBMIDI.h>

USBMIDI MIDI;

void setup(){
  USB.productName("a5a7 MIDI Numpad");
  MIDI.begin();
  USB.begin();
}

void loop(){
  MIDI.noteOn(60, 100, 1);
  delay(500);
  MIDI.noteOff(60, 0, 1);
  delay(500);
}