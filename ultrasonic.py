#!/usr/bin/env python3
"""
Created by: Evan Beaudoin
Created on: March 2023
Uses the HC-SR04 distance sensor to print the distance
"""

import time
import board
import adafruit_hcsr04
sonar = adafruit_hcsr04.HCSR04(trigger_pin=board.GP13, echo_pin=board.GP14)


def main() -> None:
    while True:
        print((sonar.distance,))
        time.sleep(0.1)
    
if __name__ == "__main__":
    main()
    
