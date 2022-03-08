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
