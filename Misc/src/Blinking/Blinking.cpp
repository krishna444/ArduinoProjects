#include "Blinking.h"

Blinking::Blinking(uint8_t _pin)
{
    pin=_pin;
    on_delay=500;
    off_delay=100;
    pinMode(_pin, OUTPUT);

}

Blinking::Blinking(uint8_t _pin, uint16_t _delay)
{
    pin = _pin;
    on_delay = _delay;
    off_delay = _delay;
    pinMode(_pin, OUTPUT);
}


Blinking::Blinking(uint8_t _pin, uint16_t _on_delay, uint16_t _off_delay)
{
    pin = _pin;
    on_delay = _on_delay;
    off_delay = _off_delay;
    pinMode(_pin, OUTPUT);
}

void Blinking::blink()
{
    digitalWrite(this->pin, HIGH);
    delay(this->on_delay);
    digitalWrite(this->pin, LOW);
    delay(this->off_delay);
}
