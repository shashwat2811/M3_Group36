# Requirements 
## **Content**
| Sr. No. | Content                 |
| ------- | ----------------------- |
| 1.      | Problem statement       |
| 2.      | Solution                |
| 3.      | Abstract                |
| 4.      | Features                |
| 5.      | SWOT analysis           |
| 6.      | 5W'1 and 1H             |
| 7.      | High Level Requirements |
| 8.      | Low Level Requirements  |

---------------------------------------------------------------------------

## **Problem Statement:**
- ### BiCom System
    - The BiCom system should perform the unidirectional features of the RKE. Along with that it should also communicate from the car to key fob by sending car status information to the keyfob display.

## **Solution:**
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

## **Abstract:**
- ### BiCom System
    A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system. This BiCom system offers increased security compared to uni-directional RKE system. Here, the key fob authenticates the vehicle before replying. Meaning the RKE transmits the specific frequency radio wave to the receiver and then the vehicle authenticates the fob by transmitting the status back.
    This project provides an overview of BiCom systems and its functional design and requirements along with its analysis on various fronts and implementation. 
    
![image](https://user-images.githubusercontent.com/93757351/158003081-966361a6-b9ba-4ac7-8185-a85ead43d188.png)

## **Features:**
- ### BiCom System
    - Window status of the car is displayed when the switch is pressed once.
    - Alarm status of the car is displayed when the switch is pressed twice.
    - Battery status of the car is displayed when the switch is pressed thrice.
    - Door status of the car is displayed when the switch is pressed four times.
-----------------------------------------------------------------------------------------------------

## **SWOT Analysis**

![image](https://user-images.githubusercontent.com/93757351/158003182-3d783b6c-37dd-43e8-8d24-d09af7d26f86.png)

## **5W's 1H**

![image](https://user-images.githubusercontent.com/93757351/158003236-6eaed35a-735f-4256-b24a-551d0224332d.png)

## **High level requirements**

- ### BiCom System
    |   ID   | Description                                   |
    | :----: | :-------------------------------------------- |
    | HLR1.1 | Must display the window status of the vehicle |
    | HLR1.2 | Must display the alarm status of the vehicle  |
    | HLR1.3 | Must display the battery status of the vehicle |
    | HLR1.4 | Must display the door status of the vehicle   |
-----------------------------------------------------------------------------------------------------
## **Low level requirements**

- ### BiCom System
    |   ID   | Description                                                                   | HLRID  |
    | :----: | :---------------------------------------------------------------------------- | ------ |
    | LLR1.1 | Vehicle must display the window status when blue switch is pressed once       | HLR1.1 |
    | LLR1.2 | All LEDs must turn on when blue switch is pressed once                        | HLR1.1 |
    | LLR1.3 | Vehicle must display alarm status when blue switch is pressed twice           | HLR1.2 |
    | LLR1.4 | All LEDs must turn off when blue switch is pressed twice                      | HLR1.2 |
    | LLR1.5 | Vehicle must display battery status when blue switch is pressed thrice        | HLR1.3 |
    | LLR1.6 | All LEDs must turn on in clockwise manner when blue switch is pressed thrice  | HLR1.3 |
    | LLR1.7 | Vehicle must display door status when blue switch is pressed four times       | HLR1.4 |
    | LLR1.8 | All LEDs must turn on in anti-clockwise manner when blue switch is four times | HLR1.4 |
-----------------------------------------------------------------------------------------------------
