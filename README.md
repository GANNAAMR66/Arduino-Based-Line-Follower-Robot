
### **Project Overview**

This project is a **Line Follower Robot** built using **Arduino**.
The robot moves automatically along a line on the ground using **IR sensors**.
It can move **forward, turn left, turn right, or stop** depending on the line's position.

---

### **Tools and Components Used**

* **Arduino Uno** – main microcontroller
* **DC Motors with Wheels** – for movement
* **Motor Driver (L298N or similar)** – to control motor direction and speed
* **Infrared (IR) Sensors** – to detect the line
* **Connecting Wires** – for connections
* **Battery Pack** – power supply
### **How the Project Works**

1. Arduino reads the **IR sensors** to detect the line.
2. If **both sensors detect the line**, the robot moves **forward**.
3. If **only the left sensor detects the line**, the robot **turns left**.
4. If **only the right sensor detects the line**, the robot **turns right**.
5. If **no sensor detects the line**, the robot **stops**.

---

### **How to Run the Project**

1. Connect the **motors** to the **motor driver** and the **motor driver** to **Arduino**.
2. Connect the **IR sensors** to the specified Arduino pins.
3. Power the Arduino and motors using the **battery pack**.
4. Upload the Arduino code to the board.
5. Place the robot on a **line (black line on white surface)**.
6. The robot will **follow the line automatically** without any manual control.


<video width="600" controls>
  <source src="Arduino-Based-Line-Follower-Robot.mp4" type="video/mp4">
</video>