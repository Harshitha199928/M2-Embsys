# 1 About the  Smart Airquality Monitoring System
# 1.1 Abstract
- This project is an Smart  Airquality Monitoring System , which will be detect the amount of pollutants present  in the air of the  environment. If we know the amount of pollutants present in the air, then precaution can be taken to minimize the level of pollution in the air
# 1.2 Identifying features
-	The main feature of this project is:
-	The LCD will display the percentage of Carbon dioxide and oxygen in the air
-	The LED will glow to indicate when air quality is pure. 
-	The user will get to know easily about the quality of air they are sourrounded by and take precautions for there safety.
-	The cost of sensor used in project is low.
# 1.3 State of art
- This project makes use of Potentiometer assumed as gas sensors,switch 2 as lambda sensors for sensing oxygen.The LCD diplays the percentage of CO2 and O2 present in the gas. 
-  By combining all these components a final system  is made called as S.A.M.S. As the technology is increasing rapidly these kind of system are very useful in our daily          lives.
# 1.4 5Ws & 1H
![Inked5W1H Method_LI](https://user-images.githubusercontent.com/55775183/157224474-67137cf7-8d15-47e7-88d2-9ed95d3a6a04.jpg) 

# 1.5 Swot Analysis
![swotm2](https://user-images.githubusercontent.com/55775183/157224649-4304b3d7-f0fa-4538-8470-b035599e64dd.png)

# High Level Requirements
| ID | High Level Requirements |
|---------- | --------------- |
| HLR1 | System shall measure the quantity of O2 and CO2 |
| HLR2 | There should be interface |
| HLR3 | Potentiometer shall be controlled |
| HLR4 | System shall detect the air is pure or not |

# Low Level Requirements
| ID | Low Level Requirements |
|---------- | --------------- |
| LLR1 | Based on the requirement of user quantity of pollutants can be known |
| LLR2 | Based on the percentage of O2 airquality  can be determined |
| LLR3 | If the Air quality is pure the LED shall be on |
| LLR4 | Percentage of gas present in air shall displayed on screen |

# 1 Block Diagram and Blocks explanation
# 1.1 BLOCK DIAGRAM
![m2block](https://user-images.githubusercontent.com/55775183/157248196-b968ee57-8072-48c6-a705-77782aab8a01.png)
# 1.2 Microcontroller(ATmega328)

ATmega328 is an 8-bit, 28-Pin AVR Microcontroller, manufactured by Microchip, follows RISC Architecture and has a flash-type program memory of 32KB.
It has an EEPROM memory of 1KB and its SRAM memory is 2KB. 
Its excellent features include cost-efficiency, low power dissipation, programming lock for security purposes, real timer counter with separate oscillator.

# 1.3 Sensors

- Potentiometer(Air Sensor-MQ135)  

A potentiometer assumed as air quality sensor measures the quality of the airquality in percentage 
Air quality sensors are devices used to detect contaminants in the air. This includes particulates, pollutants and noxious gases that may be harmful to human health. 
It detect gases like carbon monoxide and carbon dioxide by measuring the absorption of infrared light.

- Switch(Oxygen sensor)
A Switch assumed as oxygen sensor measures the percentage of O2
An oxygen sensor is an electronic device that measures the proportion of oxygen (O2) in the gas or liquid being analysed.

# 1.4 Actuators

- LCD Display  

A liquid-crystal display (LCD) is a flat-panel display or other electronically modulated optical device.
It uses the light-modulating properties of liquid crystals combined with polarizers. Liquid crystals do not emit light directly, instead using a backlight or reflector to produce images in color or monochrome.

- LED  

A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. 
Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.

- Resister 

A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element.
In electronic circuits, resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses.
# 1.5 Other

- Voltage Source

   A voltage source is a two-terminal device which can maintain a fixed voltage. An ideal voltage source can maintain the fixed voltage independent of the load resistance or      the output current.

# 2 Architecture



# 2.1 High Level flowchart
- High level flow chart Behaviour Diagram

![fhm2](https://user-images.githubusercontent.com/55775183/157248308-3d04470d-60ea-4223-b450-74e21bdb21b5.png)



# 2.2 Structural Diagram

![loem2](https://user-images.githubusercontent.com/55775183/157318059-81d92515-a40a-496e-9982-fe5ccbad70ec.png)



1 . HIGH LEVEL TEST PLAN
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Passed or Not |
|---------|-------------|---------|---------|---------------|---------------|
| HLT01 | Examine if the code is working as expected | Initialize circuit | Correct Output | Correct Output | Passed |
| HLT02 | Examine if the system works when no power is given | No Power | Switch Off | Switch Off | Passed |
| HLT03 | Examine if the system works when power is given | Power | Switch On | Switch On | Passed |
| HLT04 | Examine if the LED glows when the switch is Off | Switch2 Off | No LED Glows | No LED Glows | Passed |
| HLT05 | Examine if the Switch1 works when the Sensor is On and LED glows| Sensor On | Correct Output | Correct Output | Passed | 

2 . LOW LEVEL TEST PLAN
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Passed or Not |
|---------|-------------|---------|---------|---------------|---------------| 
| LLT01 | Display the percentage of air | Air  | Displays  CO2% | Displays as CO2% | Passed |
| LLT02 | Display Level Of Water | Air | Displays as O2% | Displays as O2% | Passed |
| LLT03 | The LED glows when O2 is in Common ratio | Information sent | LED Glows | LED Glows | Passed | 
| LLT04 | The LED doesn't glows  O2 is in Common ratio | Switch Off | LED doesn't glow | LED doesn't glow | Passed |
| LLT05 | When volt source turned Off | No Voltage | Off | Off | Passed | 

# Applications
- This system shall be used as Indoor Air Quality Monitoring System
- This system shall be used as Particulate Matter Monitoring
- This system shall be used as Gas Detection System
- This system shall be used as Outdoor Air Quality Monitoring System


# Output 

![of1](https://user-images.githubusercontent.com/55775183/157308250-1c52b7dc-eb60-4746-80e8-ec18e93d64db.png)
![of2](https://user-images.githubusercontent.com/55775183/157308282-b6049dd0-2e0d-4af6-94a9-3d83e54358b9.png)
![of3](https://user-images.githubusercontent.com/55775183/157308295-a37cc4d2-59da-4a55-8176-e9248298c4f7.png)
![of4](https://user-images.githubusercontent.com/55775183/157308329-761d564c-f059-4a47-b97c-8a3560f3bae0.png)
![of5](https://user-images.githubusercontent.com/55775183/157308347-11087c6d-d5b7-4e47-9466-6aa1eede8828.png)



![of6_hex _elf](https://user-images.githubusercontent.com/55775183/157308504-2e096be0-65c4-461a-b793-e8b69067c253.png)

# Conclusion
- Therefore, improving air quality can deliver substantial health benefits; reducing air pollution levels means reducing premature deaths and diseases from stroke, heart disease, lung cancer, and both chronic and acute respiratory diseases, including asthma. the most harmful air pollutant.

