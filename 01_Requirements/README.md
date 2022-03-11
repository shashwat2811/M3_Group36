# Requirements 
## Content
| Sr. No.| Content |
| ----- | ---- |
| 1.| Problem statement |
| 2.| Solution |
| 3.| Abstract |
| 4.| Features |
| 5.| SWOT analysis |
| 6.| 5W'1 and 1H |
| 7.| High Level Requirements |
| 8.| Low Level Requirements |
-----------------------------------------------------------------------------------------------------

## Problem Statement: 
- ### Remote Keyless Entry System
    - The RKE system should unidirectionally perform operations like locking/unlocking the car, activating/deactivating alarm through the RKE key fob to the body control ECU which is intergrated with RKE.
- ### BiCom System
    - The BiCom system should perform the unidirectional features of the RKE. Along with that it should also communicate from the car to key fob by sending car status information the keyfob display. 
-----------------------------------------------------------------------------------------------------

## Solution: 
- ### Remote Keyless Entry System
    - To implement the following system our project performs these operations: 
        1. To lock the car: 
            Print lock (Blue switch on- All led on at the same time)
        2. To unlock the car:
            Print unlock (Blue switch press two times- All led off at the same time)
        3. To activate/deactivate alarm:
            Print alarm activation/deactivation (Blue switch press three times- All led on in clockwise manner)
        4. To turn on approaching lights:
            Print approach light (Blue switch press four times- All led on in anti-clockwise manner)

- ### BiCom System
    - To implement the following system our project performs these operations: 
        1. To show window status: 
            Print window status (Blue switch on- All led on at the same time)
        1. To show alarm status:
            Print alarm status (Blue switch press two times- All led off at the same time)
        2. To show car's battery status:
            Print car battery info (Blue switch press three times- All led on in clockwise manner)
        3. To show door status:
            Print door status (Blue switch press four times- All led on in anti-clockwise manner)
-----------------------------------------------------------------------------------------------------

## Abstract: 
- ### Remote Keyless Entry System
  - Remote keyless entry (RKE) has captivated automobile buyers, as evidenced by its popularity on new vehicles and as an aftermarket item. This application note provides an overview of RKE systems and discusses how they meet requirements such as range, battery life, reliability, cost, and regulatory compliance. It depicts some circuits and design approaches, as well as some predictions for future systems that will include two-way communications.
  -  Overall, the security of vehicles will, at best, not become worse by installing an aftermarket remote keyless entry system.

- ### BiCom System
-----------------------------------------------------------------------------------------------------

## Features: 
- ### Remote Keyless Entry System
    - Car is locked when the switch is pressed once.
    - Car is unlocked when the switch is pressed twice.
    - Alarm of the car gets activated/deactivated when the switch is pressed thrice.
    - Approaching lights are turned on when the switch is pressed four times.

- ### BiCom System
    - Window status of the car is displayed when the switch is pressed once.
    - Alarm status of the car is displayed when the switch is pressed twice.
    - Batter status of the car is displayed when the switch is pressed thrice.
    - Door status of the car is displayed when the switch is pressed four times.
-----------------------------------------------------------------------------------------------------

## SWOT Analysis: 
- ### Remote Keyless Entry System
- ### BiCom System
-----------------------------------------------------------------------------------------------------

## 5W's and 1H: 
- ### Remote Keyless Entry System
- ### BiCom System
-----------------------------------------------------------------------------------------------------

## High Level Requirements: 
- ### Remote Keyless Entry System
    |  ID  | Description                                                      |
    | :--: | :--------------------------------------------------------------- |
    | HR01 | Must be able to remotely lock the vehicle                        |
    | HR02 | Must be able to remotely unlock the vehicle                      |
    | HR03 | Must be able to remotely activate/deactivate the vehicle's alarm |
    | HR04 | Must be able to remotely turn on vehicle's approach lights       |
    
- ### BiCom System
    |  ID  | Description                                   |
    | :--: | :-------------------------------------------- |
    | HR01 | Must display the window status of the vehicle |
    | HR02 | Must display the alarm status of the vehicle  |
    | HR03 | Must display the batter status of the vehicle |
    | HR04 | Must display the door status of the vehicle   |
-----------------------------------------------------------------------------------------------------

## Low Level Requirements: 
- ### Remote Keyless Entry System
- ### BiCom System
-----------------------------------------------------------------------------------------------------