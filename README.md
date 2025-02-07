# I2C_implementation
Hello everyone, here is the I2C implementation between Arduino Nano boards


one device (Master) communicates with another device (Slave) over the I2C bus. 
The Master initiates communication by sending a value (ASCII 65 = 'A') to the Slave.
The Slave receives this data and prints it for verification.
After sending, the Master requests a response from the Slave.
The Slave then sends back a predefined message ("hello"), which the Master receives and prints. 
This process continuously repeats every second, demonstrating a basic I2C data exchange between two iMXRT1062 devices.
