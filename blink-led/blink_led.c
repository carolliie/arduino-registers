// Inclui a biblioteca AVR para acessar os registradores
#include <avr/io.h>
#include <util/delay.h>

int main() {
    // Configura o pino 13 como saída (onde está conectado o LED no Arduino Uno)
    DDRB |= (1 << PB5);

    while(1) {
        // Liga o LED
        PORTB |= (1 << PB5);
        
        // Aguarda um curto período de tempo
        _delay_ms(500);
        
        // Desliga o LED
        PORTB &= ~(1 << PB5);
        
        // Aguarda um curto período de tempo
        _delay_ms(500);
    }

    return 0;
}
