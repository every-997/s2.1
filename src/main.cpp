#include <mbed.h>

DigitalOut   red(LED_RED);
DigitalOut green(LED_GREEN);

void on(void)
{
    red.write(0);
    puts("rising 0->1");
}
void off(void)
{
    red.write(1);
    puts("falling 1->0");
}

int main() {
    InterruptIn  left(SW2);
    InterruptIn right(SW3);
    InterruptIn topLeft(A4);
    InterruptIn topRight(A5);
    InterruptIn topUp(A2);
    InterruptIn topDown(A3);
    InterruptIn topCenter(D4);

    left.rise(on);
    right.fall(off);
    topLeft.rise(on);
    topRight.fall(off);
    topUp.rise(on);
    topDown.fall(off);
    topCenter.rise(on);
    while(1) {
        /* GNDN */
    }
}
