# Documentation
This program was written in C++ as an assignment for a college class. The assignment was to create a digital clock that supports user-directed time change in hours, minutes and seconds. I designed the clock to update once in real time and then allow for adjustment as necessary. As part of the required functionality, the clock displays in double digit hours, minutes, and seconds in a 12-hour format as well as a 24-hour format simultaneously. The user menu allows the user to add time or exit.

## Classes 
The program includes a main class as well as Clock, Driver, and TimeDef classes to keep main compact and clean and more maintainable. Clock.cpp contains definitions for time change including functions addHour, addMinute, addSecond and addampm. TimeDef.cpp contains a conditional branch that determines if leading zero output is needed. Driver.cpp loops through main menu of the program and operates on a switch statement that allows the user to add time or exit the application.

## The Application
<p align="center">
    <img src="https://user-images.githubusercontent.com/110789514/211573425-96735ba2-31d2-4e6d-aa0e-e5ebb7679afe.png" />
  </a>
</p>
