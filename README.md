# Ultrsonic with 7 segments 2 digits

![Access Control System](https://github.com/ahmed-eldesoky284/Quiz-3/blob/main/Capture3.png)


## Requirements

This project about presenting a distance sent from an ultrasonic sensor on two digits seven segments’ cells in meters and centimeters and controlled by an Arduino uno.
The project consists of two different seven segments, the first one is used to present the number of meters sent from ultrasonic sensor and the second seven segment is used to present the centimeters.


## Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/ahmed-eldesoky284/Quiz3.git
   ```

2. Connect the Arduino board to your computer using a USB cable.

3. Connect the keypad and fingerprint sensor to the Arduino board as per the circuit diagram provided in the repository.

4. Open the Arduino IDE (Integrated Development Environment) on your computer.

5. In the Arduino IDE, go to **File** > **Open** and navigate to the cloned repository folder. Open the `Project-Ultrsonic.ino` file.


## Usage

As known every seven segment need at least a 7 different pins from the digital I/O pins but as also known the Arduino uno have only 14 digital I/O pins, so if there are two seven segments the whole digital pins are going to occupy by the seven segments and this means that there is not any available pins for any further sensors like ultrasonic, because the ultrasonic sensor needs at least two different digital pins, one for the trig and another one for echo pin.

## Customization

The challenge here in such project is the limited number of pins in Arduino Uno and there are many different solutions for such problems but here the solution is very simple also helping to minimize the code and the number of used pins as well.

As shown in the following diagram the frist seven segment has connected with just only 6 pins instead of seven and this trick had been made because the maximum distance can be measured by the ultrsonic sensor is 3 meters, So the numbers may appear on the first seven segments are 1,2,3 meters only, but according to the next representations



## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue on the GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE).
