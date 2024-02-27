// Inclui a biblioteca AVR para acessar os registradores
#include <avr/io.h> // libs para acesso aos registradores
#include <util/delay.h>

int main() {

    DDRB |= (1 << PB5);                     // o LED padrão do Arduino Uno está conectado ao pino 13, e este código configura esse pino como saída.

    while(1) {
        
        PORTB |= (1 << PB5);                // liga o LED
        
        _delay_ms(500);                     // aguarda um curto período de tempo
        
        PORTB &= ~(1 << PB5);               // desliga o LED
        
        _delay_ms(500);                     // aguarda um curto período de tempo
   
   }

    return 0;
}
