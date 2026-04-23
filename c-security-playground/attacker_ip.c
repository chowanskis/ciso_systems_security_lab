#include <stdio.h>
#include <stdint.h>

int main() {
    // Zmienne jako sensory
    uint32_t attacker_ip = 0xC0A80164; // 192.168.1.100 w systemie szesnastkowym
    uint16_t target_port = 443;
    uint8_t attack_severity = 5; 

    printf("Analiza incydentu...\n");
    
    // Prosta logika decyzyjna
    if (attack_severity > 3) {
        printf("ALARM: Wykryto atak na porcie %u!\n", target_port);
    }

    return 0;
}