In this exercise I controlled a DC-motor/fan with a temperaturesensor. 
Over 30 degree Celsius the DC-motor/fan goes on maximum speed, between 30-15 degree Celsius the DC-motor/fan adjust 
it's speed accordingly, and under 15 degree Celsius it doesn't start.

*** Code ***
temp_motor.ino    - is the main code.
max_min_mean.ino  - finds the maximum and minimum values of the temperature array, and calculates the mean value.
sortering.ino     - Contains a sorting function and a function that sets the speed of the DC-motor/fan.

*** products used ***
- Arduino UNO   - TMP 36 (temperatursensor)
- DC motor      - L293D (h-bridge)
- Wires
