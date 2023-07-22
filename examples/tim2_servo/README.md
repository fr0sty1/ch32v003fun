# Demonstration of PWM RC Servo Control using Timer 2
This example shows how to set up Timer 2 (the General Purpose Timer) to generate Pulse-Width Modulation (PWM) on two output pins.
The Pulse frequency is 50Hz and the pulse width is adjustable from MIN to MAX (default 0.5-2.5ms) defined in servo.h 

## Use
Connect one or both of the GPIO pins PD4 and PD3 to the "Signal" pin of an RC servo. Connect other pins are V+(4.8-6V) and Gnd.
The example will sweep both servos through their ranges.
