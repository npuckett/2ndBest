# Experiment 1: Analog Read Serial 5 Values

## Overview
This Arduino project reads analog values from five analog input pins (A0-A4) and outputs the values to the serial port in a comma-separated format. The code is designed for the **Arduino Nano ESP32** board.

## Hardware Requirements
- Arduino Nano ESP32
- 5 analog sensors connected to pins A0, A1, A2, A3, and A4

## Code Description

### Setup Function
```cpp
void setup()
```
- Initializes serial communication at **9600 baud rate**
- Runs once when the microcontroller starts or resets

### Loop Function
```cpp
void loop()
```
- Reads analog values from five pins (A0-A4)
- Each analog value ranges from 0-1023 (10-bit ADC on Arduino)
- Prints all five values in CSV format to the serial monitor
- Adds a 50ms delay between reads for stability
- Runs continuously in an infinite loop

### Global Variables
- `sensorValue0` - Stores the analog reading from pin A0
- `sensorValue1` - Stores the analog reading from pin A1
- `sensorValue2` - Stores the analog reading from pin A2
- `sensorValue3` - Stores the analog reading from pin A3
- `sensorValue4` - Stores the analog reading from pin A4

## Serial Output Format
The program outputs data in the following comma-separated format:
```
value0, value1, value2, value3, value4
```

Example output:
```
512, 768, 256, 1023, 0
```

## PlatformIO Configuration
- **Platform**: espressif32
- **Board**: arduino_nano_esp32
- **Framework**: Arduino

## Useful Links

### Arduino Documentation
- [analogRead() Reference](https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/)
- [Serial.begin() Reference](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/)
- [Serial.print() Reference](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/)
- [Serial.println() Reference](https://www.arduino.cc/reference/en/language/functions/communication/serial/println/)
- [delay() Reference](https://www.arduino.cc/reference/en/language/functions/time/delay/)
- [Original Tutorial: Analog Read Serial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial)

### PlatformIO Documentation
- [PlatformIO CLI Reference](https://docs.platformio.org/en/latest/core/userguide/index.html)
- [PlatformIO Project Configuration](https://docs.platformio.org/page/projectconf.html)
- [Arduino Nano ESP32 Board Info](https://docs.platformio.org/en/latest/boards/espressif32/arduino_nano_esp32.html)

### Common PlatformIO Commands
```bash
# Build the project
pio run

# Upload to board
pio run --target upload

# Open serial monitor
pio device monitor

# Build and upload
pio run -t upload

# Clean build files
pio run -t clean
```

## Course Information
**OCADU DIGF-6037 Creation & Computation**  
Taught by Kate Hartman & Nick Puckett

## License
Based on Arduino built-in examples, available under public domain.
