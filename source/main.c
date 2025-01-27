#include <stdio.h>
#include <nds.h>
#include <gl2d.h>

int main(void) {
    consoleDemoInit();
    iprintf("Hello, World ! (on NDS)\n");
    iprintf("Press A to exit.");
    while (1) {
        scanKeys();
        const uint32_t keys = keysDown();

        if ((keys & KEY_A)) {
            break;
        }
    }
    systemShutDown();
    return 0;
}
