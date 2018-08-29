# PV ANALYZER

The Photovoltaic module has a nonlinear PV characteristic, whose output power varies as function of the irradiance and temperature. Though, theoretically it is known to be nonlinear, practically there is a need to verify the accurate values and characteristics properties of the module. This can be implemented using a PV analyser. This chapter explains about the PV analyser circuit implemented, components used and their properties, software code implemented in Arduino IDE and the generated output results.

The 100W Solar panel has to be examined and verified for its accuracy in absorbing the power and voltage values, in comparison with the specified values from the manufacturer. Hence, the solar panel is analysed with the power and voltage values it can handle, using this PV analyser circuit. The PV analyser circuit is rigged up for measuring the Power and Voltage curves graph, which is received from the solar panel for measuring its parameters values.
 
               
 COMPONENTS USED:
The following components are used in PV analyser.
1) Arduino Uno Board 
The Arduino Uno is a microcontroller board based on the ATmega328. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with an AC-to-DC adapter or battery to get started. The Uno differs from all preceding boards in that it does not use the FTDI USB-to-serial driver chip. Instead, it features the Atmega8U2 programmed as a USB-to-serial converter [13].

Technical Specifications:
Microcontroller	ATmeg¬a328P
Operating Voltage	5V
Input Voltage (recommended)	7-12V
Input Voltage (limit)	6-20V
Digital I/O Pins	14 (of which 6 provide PWM output)
PWM Digital I/O Pins	6
Analog Input Pins	6
DC Current per I/O Pin	20 mA
DC Current for 3.3V Pin	50 mA
Flash Memory	32KB (ATmega328P)
of which 0.5 KB used by bootloader
SRAM	2 KB (ATmega328P)
EEPROM	1 KB (ATmega328P)
Clock Speed	16 MHz
LED_BUILTIN	13
Length	68.6 mm
Width	53.4 mm
Weight	25	


2) Voltage Sensor 
The Arduino Voltage sensor of range ≥ 25V, measures the voltage values and these are sent to the Arduino Uno board. It consists of a voltage divider circuit and input – output ports. The input port consists of Vcc and Ground terminal, which is connected to the solar panel. Similarly, the output connection is given to Arduino Uno analog terminals [14]. 

3) Current Sensor 
The Arduino Uno board is connected to the current sensor ACS712, which operates from 5V and the output analog voltage proportional to current measured on the sensing terminals. The current sensor chip is ACS712ELC-5A. The module can measure the positive and negative 30 amps, corresponding to the analog output 66mV/A. Pin 5V power supply, on-board power indicator. Sensing terminal can even measure current for loads operating at high voltages like 230V AC mains while output sensed voltage is isolated from measuring part [14].

4) Temperature Sensor

The Temperature sensor LM35, are precision integrated-circuit temperature devices with an output voltage linearly proportional to the Centigrade temperature. The LM35 device has an advantage over linear temperature sensors calibrated in Kelvin, as the user is not required to subtract a large constant voltage from the output to obtain convenient Centigrade scaling. Lower cost is assured by trimming and calibration at the wafer level. The low-output impedance, linear output and precise inherent calibration of the LM35 device makes interfacing to readout or control circuitry especially easy.

The device is used with single power supplies, or with plus and minus supplies. As the LM35 device draws only 60 μA from the supply, it has very low self-heating of less than 0.1°C in still air. 

The LM35 device is rated to operate over a −55°C to 150°C temperature range, while the LM35C device is rated for a −40°C to 110°C range (−10° with improved accuracy). This operates from 4 to 30 Volts and less than 60A current drain [14].

5) Light Dependent Resistor (LDR)

A Light Dependent Resistor (LDR) or a photo resistor is a device whose resist-ivity is a function of the incident electromagnetic radiation. Hence, they are light sensitive devices. They are also called as photo conductors, photo conductive cells or simply photocells. They are made up of semicon-ductor materials having high resistance. There are many different symbols used to indicate a LDR, one of the most commonly used symbol is shown in the figure 3.2.5 below. The arrow indicates light falling on it.

Working Principle of LDR
A light dependent resistor works on the principle of photo conductivity. Photo conductivity is an optical phenomenon in which the materials conductivity is increased when light is absorbed by the material. When light falls i.e. when the photons fall on the device, the electrons in the valence band of the semiconductor material are excited to the conduction band. 
These photons in the incident light should have energy greater than the band gap of the semiconductor material to make the electrons jump from the valence band to the conduction band. Hence when light having enough energy strikes on the device, more and more electrons are excited to the conduction band which results in large number of charge ca¬rriers. The result of this process is more and more cur¬rent starts flowing through the device when the circuit is closed and hence it is said that the resis¬tance of the device has been decreased. This is the most common working principle of LDR.

6) Rheostats

A rheostat is a variable resistor which is used to control current. They are able to vary the resistance in a circuit without interruption. The construction is very similar to the construction of potentio¬meters. It uses only two connections, even when 3 terminals (as in a potentio¬meter) are present. The first connection is made to one end of the resistive element and the other connection to the wiper (sliding contact).  In contrast to poten¬tiometers, rheostats have to carry a significant current. Therefore, they are mostly constructed as wire wound resistors. Here, we have used two rheostats of resistance value 25Ω.

