# Nucleo example project with HC-06 bluetooth module

## About


EMECSthon example project which shows how to use bluetooth with Nucleo board. A humidity sensor is read and a water pump activated from an App by the user. 


## Hardware Prerequisites 


1. Development Board [NUCLEO-F303RE](https://www.st.com/en/evaluation-tools/nucleo-f303re.html)
2. Bluetooth module [HC06](https://www.olimex.com/Products/Components/RF/BLUETOOTH-SERIAL-HC-06/resources/hc06.pdf)
3. Hygrometer (user choice)
4. Water pump (user choice)
5. MOSFET (user choice)
6. Resistors: 1k and 100k
7. Some cables


## General description

The realization of the project consists of two parts: hardware and software.

- Hardware: the circuit to be built will be detailed and has no complications.

- Software: the Nucleo board will be programmed from the MBED environment and from the Arduino IDE, so that the user can choose to use the one with which he feels most comfortable.

## Circuit scheme

![Overview](circuit_design.png?raw=true "Circuit scheme")

* Connect Bluetooth module

| HC06  | Nucleo F303 |
| ------------- | ------------- |
| VCC  | 5V  |
| GND  | GND  |
| TX  | D2 (RX) |
| RX  | D8 (TX)  |


* Connect Hygrometer


| Hygrometer  | Nucleo F303 |
| ------------- | ------------- |
| VCC  | 3.3V  |
| GND  | GND  |
| A0  | A0  |


### MBED. 

MBED platform is used to program the MCU


* Create empty MBED project [here](https://ide.mbed.com/compiler)

* Import `main.cpp` (or copy it)

* Compile

### Arduino IDE. 

Arduino IDE can be used as well to program the MCU

* Download Arduino IDE [here](https://www.arduino.cc/en/Main/Software).

* Go to Files -> Preferences and enter the link 'https://raw.githubusercontent.com/stm32duino/BoardManagerFiles/master/STM32/package_stm_index.json' into the "Additional Boards Manager URLs".

* Go to Tools -> Board, look for 'STM32 Core' package and install it.

* Go to Tools -> Board, select Nucleo-64.

* Go to Tools -> Board part number and select Nucleo F303RE.

* Go to Tools -> Port and select the corresponding port of the Nucleo Board

* Open the files provided

* Compile and download them on the board


### App.

The design of the App can be done at the user's choice. In this case, Appinventor will be used for its simplicity and speed.

* Create empty AppInventor project [here](http://appinventor.mit.edu/explore/).

* Import the corresponding .aia file.

* Connect your phone to the same Wi-Fi network as your laptop.

* Download MIT AI2 Companion on your phone

* Go to Connect -> AI Companion in your laptop

* Connect your phone using the numerical code or the QR code

![Sensor_app](sensor_app.png?raw=true "Sensor App")
![Pump_app](pump_app.png?raw=true "Pump App")


## Functionality

Two diferent programs have been created. One of them to read the humidity sensor and receive that information on an App. The second one to activate or desactivate a water pump to water the plants. 

These two programs are designed to see the functionality of bluetooth with the Nucleo board. That is why the watering has not been automated, which would be very easy to implement.


## Full System view


![Overview](Circuit.jpeg?raw=true "Overview")


## Authors
[Isabel Garcia](https://github.com/igarciab/)
