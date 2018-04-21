# include <stdio.h>
# include <math.h>
# include <string.h>

/* This program is more or less a calculator for electronics. It will do most basic calculations in DC and AC along with some electromagnetism. I will be adding more functions as I go along with learning electronics since I'm still a student in the EE shop at my high school. 

I cannot guaruntee that this will be as good as something like SPICE. It is more for my electronics class and for furutre projects.


Electronics toolkit. A simple electronics calculator. 
Copyright (C) 2018 Ian Mitchell <Ian.Mitchell_001@gmx.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// The main menu
float main(){
int menu_choice;

printf("Electronics Toolkit\n");
printf("___________________\n\n");

break(menu_choice){

}
	return 0;
}

// Functions below
// ---------------


// Ohm's law. No electronics program is complete without it!

float ohm();
float ohm(){
// Main variables for voltage, resistance, current, and power.
// Volts, ohms, amps, watts
float V, R, I, P; 
// Variables for AC circuits. Just mainly reactance. 
// Ohms
float chi;

// Menu choice
int ohm_choice;
/*
V = I * R;
R = V / I;
I = V / R;
*/
printf("Solving for...\n(1) Voltage\n(2) Resistance\n(3) Current\n\n----->");
scanf("%d", ohm_choice);

switch (ohm_choice){
case 1:
printf("\nPlease input current and resistance...\nI = ");
scanf("%f", I);
printf("\nR = ");

V = I * R;

printf("V = %f [volts]\nI = %f [Amperes]\nR = %f", V, I, R);
break;

main();
}

// DC circuit calculations. Will work with series and parallel circuits. 

float dc();
float dc(){

}

// AC circuit calculations

float ac();
float ac(){

}
/* *ALSO TODO:** LEARN RL, RC, AND RLC CIRCUITS.
// Capacitor and inductor calculations. **TODO:** RL, RC, and RLC circuits

float capnind();
float capnind(){

}
*/

// Basic electromagnetism calculations

float electromag();
float electromag(){

}
