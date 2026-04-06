# arduino-lcd-display
Display custom message on LCD using Arduino Uno
# Arduino LCD Display Project

## 📌 Description
This project demonstrates how to use a 16x2 LCD with Arduino Uno to display a custom message. The system shows my name and college name on the LCD screen.

## 🛠️ Components Used
- Tinkering Lab IoT Dev Kit (IOBit Solutions)  
- Arduino Uno (included in the kit)  
- 16x2 LCD Display (included in the kit)  
- Breadboard (included in the kit)  
- Jumper Wires (external, not included in kit)

## ⚙️ Working

1. **Setup:** The 16x2 LCD is connected to Arduino Uno using digital pins (RS, EN, D4–D7). The Arduino is powered via the IoT Dev Kit.

2. **Initialization:** In the Arduino code, the LiquidCrystal library is used to initialize the LCD with the correct pins and set it to 16 columns × 2 rows.

3. **Displaying the Message:** 
   - The code sets the cursor to the first row (0,0) and prints your name: `"Ruchitha Reddy"`.
   - The cursor is then set to the second row (0,1) and prints your college name: `"SV College of Engineering"`.

4. **Continuous Display:** The LCD keeps showing this message continuously. No action is required in the loop function as the display remains static.

5. **Customization:** You can change the displayed text in the code to any custom message you want. The kit supports easy wiring and testing.

6. **Result:** When powered, the LCD clearly shows the name on the first row and the college name on the second row, making it ideal for demonstrating IoT Dev Kit projects.

## 💻 Code
The code is written in Arduino IDE and uploaded to Arduino Uno. See `lcd_display.ino` for full code.

## 🚀 Output
The LCD screen displays the name and college name clearly on two rows.
## 📹 Project Demo Video
[Watch Demo Video](https://photos.app.goo.gl/j6CQ6YzUiPN71bxCA
