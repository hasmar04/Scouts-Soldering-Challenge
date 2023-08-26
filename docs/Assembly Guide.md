# Assembly Guide
## Before Proceeding
Ensure that you have all components listed in the [Procurement Guide](https://github.com/hasmar04/Scouts-Soldering-Challenge/blob/main/docs/Procurement%20Guide.md), as well as a soldering iron and some solder. Lead-free solder is recommended, although it does require a higher temperature on the soldering iron. 
## Step 1: Test Arduinos
Before starting on the assembly, it is a good idea to test the Arduinos to ensure they are functioning correctly and code can be uploaded to them. It is recommended to upload the boardTest code by following the [Arduino IDE Installation and Getting Started](https://github.com/hasmar04/Scouts-Soldering-Challenge/blob/main/docs/Arduino%20IDE%20Installation%20&%20Getting%20Started%20V1.0.pdf) guide. 
## Step 2: Sort Components Into Sets
This is recommended to be done before the night to make it easier to get the Scouts started on the project. Check out the [README](../README.md) for the list of required components. 
## Step 3: Start with the Resistors
It is always a good idea to start with the flattest components, which in this project are the resistors. There is no wrong orientation to install them, but make sure the correct resistors are installed in the correct places. Poke the legs of the resistor through the holes, trying to make it as flat against the PCB as possible. Once in place, solder from the back side of the PCB and cut the excess legs off with sidecutters. 
## Step 4: Move onto the LEDs
The LEDs are the next tallest components, and require slighly more care than the resistors to install. Ensure the short leg of the LED goes to the square pad, putting it the other way around will not work. The legs can be bent to hold it in place. Once soldered in place, cut off extra leg length with sidecutters. For future reference, the square pad is typically for Ground, and the round pad for Power. The short leg of the LED is always for Ground, while the long leg is for Power. 
## Step 5: Insert and Solder the Button
The button has no polarity, and can go in either way. It should grab onto the PCB, making soldering it in place a breeze. Once soldered, and excess leg can be removed if desired. 
## Step 6: Solder the Arduino into Place.
The component which is tallest and also requires the most work is the Arduino itself. All the legs, even those not used, should be soldered in place. Make sure the Arduino is orrientated the correct way, so that the USB port lines up with the white box on the silskcreen (the white lines in the PCB). It is recommended to start with soldering two opposite corners to ensure the Arduino doesn't move as it is being soldered. Once all the legs are soldered, use sidecutters to remove excess leg length. 
## Step 7: Test!
Plug the Arduino into power and ensure that the button and the LEDs are all working as intended. 