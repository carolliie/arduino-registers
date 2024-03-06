# blink-led with c language

## Descrição

Neste pequeno projeto, os conhecimentos básicos sobre arquitetura de computadores foram necessários para o desenvolvimento do código, em C, e para a análise do microcontrolador utilizado, o Arduino Nano.

As principais características e partes do computador a serem estudadas neste projeto, serão os registradores.

### O que são os registradores?

No contexto do Arduino, os registradores são componentes fundamentais dos microcontroladores AVR (Advanced Virtual RISC) que são comumente utilizados nos modelos de placas Arduino, como o ATmega168 no Arduino Nano. Os registradores são espaços de armazenamento de dados diretamente acessíveis na arquitetura do microcontrolador ou computador.

Existem vários tipos de registradores nos microcontroladores AVR, incluindo registradores de propósito geral (GPRs), registradores de controle, registradores de status, entre outros. Os registradores são usados para armazenar dados temporários e informações de controle.

Ao interagir com o hardware em nível mais baixo em linguagens de programação como C/C++/Assembly, pode-se acessar diretamente esses registradores para manipular portas de entrada/saída, configurar timers, controlar interrupções e realizar outras operações de baixo nível.

## Código

Este projeto possui um programa básico que utiliza a linguagem C, no microcontrolador AVR, que pode ser usado em placas Arduino baseadas em ATmega168 (como o Arduino Nano).

Nesse código, DDRB e PORTB são registradores específicos utilizados em microcontroladores da família AVR, que inclui o Atmel ATMega168P utilizado no Arduino Nano.

#### DDRB (Data Direction Register B):

É um registrador responsável por configurar os pinos do Port B como entrada (0) ou saída (1).

No trecho DDRB |= (1 << PB5);, o bit correspondente ao pino PB5 (bit 5 do Port B) é configurado como 1, indicando que o pino está configurado como saída.

#### PORTB (Port B Output Register):

É um registrador que controla o estado de saída dos pinos do Port B.

No trecho PORTB |= (1 << PB5);, o bit correspondente ao pino PB5 é configurado como 1, colocando o pino em estado lógico alto (nível de tensão 5V no Arduino Nano), o que, no caso de um LED conectado a esse pino, faz o LED acender.

No trecho PORTB &= ~(1 << PB5);, o bit correspondente ao pino PB5 é configurado como 0, colocando o pino em estado lógico baixo (nível de tensão 0V no Arduino), o que faz o LED apagar.

O resultado final é um programa que pisca o LED conectado ao pino 13 em um intervalo de 1 segundo (ligado por 0,5 segundos, desligado por 0,5 segundos). 

Esse é um exemplo simples de manipulação direta de registradores para controle de E/S em um microcontrolador AVR usando o ambiente de desenvolvimento do Arduino. 

## Circuito

<img src="circuit.png"/>

A imagem acima ilustra o circuito feito para ligar o LED à placa.

Na imagem, o microcontrolador ilustrado é o Arduino UNO, mas, no circuito montado manualmente, foi utilizado o Arduino Nano.

O LED foi conectado ao pino 13 e ao pino GND (ground), como declarado no código.

Como foi feita a conexão do LED no pino em que o LED bult-in também é conectado, os dois elementos foram ligados.

Para ver o projeto em prática, entre <a href="https://drive.google.com/file/d/1tkWVF4WT-O8KCogvRmqjVSquw-wzlUKv/view?usp=sharing">aqui</a>.

#### Elementos utilizados:
- 2 cabos jumper
- Protoboard
- LED
- Resistor
- Placa Arduino Nano

## Conclusão

Para maioria dos projetos com Arduino e entre outros microcontroladores, não é necessário manipular diretamente os registradores, visto que as funções de alto nível fornecidas pelas bibliotecas padrão do Arduino são suficientes e mais simples para desenvolvimento de projetos elaborados.

No entanto, o conhecimento acerca dos registradores e outros componentes de um computador/microcontrolador, pode ser útil para projetos que necessitam de otimização de desempenho ou para controle mais preciso do hardware.

### Referências

Este código foi feito com base em análise de vídeos relacionados a Arquitetura de Computadores, em específico, os registradores.

Além dos vídeos, o conteúdo do projeto também foi apresentado durante as aulas da disciplina de Organização e Arquitetura de Computadores.



#### Videos assistidos para contribuição ao projeto
<a href="https://youtu.be/iXJGeQNUdpI?si=gtdrWItd7indpYSd">_Blink LED Through Register Level Programming in Arduino #1_ </a>by FYOPRJ

<a href="https://youtu.be/9Q37tdEj1go?si=1lrTkTiQQZRpow_P">_SISTEMAS DIGITAIS: REGISTRADORES E MEMÓRIA_ </a>by Prof Romerson Oliveira

<a href="https://youtu.be/Zc_4NgoJthU?si=9-cMG0fH0TCDFkou">_O que são os Registradores no Arduino_ </a>by Silícios Lab
