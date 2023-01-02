# CS210
Work for CS210 Programming Languages

This program was written in C++ as an assignment for a college class. The assignment was to create a digital clock that supports user-directed time change in hours, minutes and seconds. I designed the clock to update once in real time and then allow for adjustment as necessary. As part of the required functionality, the clock displays in double digit hours, minutes, and seconds in a 12-hour format as well as a 24-hour format simultaneously.

The program represents the logic of time very accurately in C++ code and easily accomplishes the goal of the program. Though this project was not particularly challenging for me, I found the most time-consuming part to be writing out the conditions for outputting leading zeros to produce the correct output format. For this part, I found that thinking of the clock in terms of permutations to be helpful to be sure that I accounted for all possible permutations of double and single digits for the hours, minutes, and seconds places.

This project will be useful going forward in many situations as it provided me with great practice implementing practical logic into my code. Additionally, it allowed me to create a functional clock application that I can incorporate into other work in the future. 

The program includes a main class as well as Clock, Driver, and TimeDef classes to keep main compact and clean as well as to make the program more adaptable and maintainable. Clock.cpp contains definitions for time change including functions addHour, addMinute, addSecond and addampm. TimeDef.cpp contains a conditional branch that determines if leading zero output is needed. Driver.cpp loops through main menu of the program and operates on a switch statement that allows the user to add time or exit the application. 


![clock](https://user-images.githubusercontent.com/110789514/210268253-48baef47-8b16-42dd-a49d-22600fdb93cf.png)
