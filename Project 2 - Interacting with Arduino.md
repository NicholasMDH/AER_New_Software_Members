Steps:
1. Set up your environment
	1. Download the Arduino IDE from the [Arduino website](https://www.arduino.cc/en/software)
		1. I'd recommend downloading the newest version (2.3.2 at the time of writing)
	2. Once in the IDE, select the "Boards Manager" icon on the left sidebar
		1. Search for "Arduino ESP32 Boards" in the search bar, then install the package of the same name (again, just use the newest version)
2. Create & edit your file
	1. Back in WSL, navigate to your local repository, (make sure you're on the right branch) and create a new folder named `firstName_lastName_Project2`, then use `touch` to create the file `firstName_lastName_Project2.ino` in that new folder
		1. This is because Arduino requires each .ino file to be inside of a parent folder with the same name
	2. Then, back in the Arduino IDE, open that file and start editing it
		2. Using the resources and wiring diagram below, write a script that will turn the LED on and off every second or so, the timing itself doesn't matter as long as the code turns the light on and off consistently
3. Wiring Diagram
	1. ![[Wiring_diagram.png]]
	2. To clarify:
		1. The board shown in the picture is actually an Arduino Nano R3, not an ESP32 nano like we have, but the pinouts are the same for our use case here
		2. The resistor shown is not the same as the resistor we will be using, this will not affect your code at all, I just wanted to clarify that the wiring diagram is mostly there for you to be able to visualize the system in which your code will be running
		3. The pin that you will be controlling to send the voltages to will be D3
4. Resources (Credit to Emily Stratoudis for helping put this together)
   1. https://www.circuito.io/blog/arduino-code/
	   1. This is a very good website to tell you the basic things you need to know about coding with Arduino.
   2. https://docs.arduino.cc/built-in-examples/basics/BareMinimum/
	   1. This is from the Arduino website and it has very good tutorials on how to do some of the basic things you can do with your Arduino. 
   3. https://manual.eg.poly.edu/index.php/Arduino_Coding_Guide
	   1. This is a big index for many of the things you will be able to use in the Arduino IDE which you will use when coding the things you want to do. 
  