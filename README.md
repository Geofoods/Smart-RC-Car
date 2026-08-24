# Smart RC Car with Automatic Braking

An Arduino Smart RC Car with wireless control, dual LED headlights, and an ultrasonic collision avoidance system for automatic braking.
<img width="1917" height="852" alt="Screenshot 2026-08-23 210702" src="https://github.com/user-attachments/assets/ca3ed883-1514-4743-9e9f-b10b744e0b5d" />
<img width="1126" height="704" alt="Screenshot 2026-06-29 085706" src="https://github.com/user-attachments/assets/8fbac135-b036-4be4-93da-071021447422" />

---

## Special Features

* **IR Remote Control:** Wireless movement using an IR Remote
* **Automatic Braking System:** Uses an ultrasonic sensor to detect obstacles and automatically stop if an obstacle is in its path
* **Customized Headlights:** Dual bright red LEDs that you can control
---

## Hardware Requirements

| Component | Description | Quantity |
| :--- | :--- | :--- |
| **Microcontroller** | Arduino Uno | 1 |
| **Wheels + Motor** | TT motors and wheels | 4 |
| **Motor Driver** | L298N (or L293D) Motor Driver Module | 1 |
| **IR Receiver** | IR Receiver + Remote | 1 |
| **Ultrasonic Sensor** | HC-SR04 Distance Sensor | 1 |
| **LEDs** | 5mm Red LEDs | 2 |
| **Resistors** | 220Ω Resistors (for LEDs) | 2 |
| **Power Supply** | Two AA battery pack and battery holder | 1 |
| **Misc** | Breadboard, Jumper Wires | - |

---

### Bill of Materials (BOM)

Since I already bought an arduino kit, I already have some of these parts. However, some of these parts are being used in a different project that I have made so I will need funding to buy the following parts.

 - 4x TT Motor with Tire Wheel Kit ( https://www.amazon.ca/D-FLIFE-Motor-Gearbox-Shaft-200RPM/dp/B0BY859BBP/ref=sr_1_9?crid=Y18THQH4HJ5Y&dib=eyJ2IjoiMSJ9.F8BqoS7gogYt_r94Vu7wRq_s9pAJTWlrU_83c63rmrkG8AJrQ_2_bthTznFyMULOiIK8E9C3tEjsCFggbp4B_LbwC394KocUQpr-fWeMFkl8QZ-11NJJ_8WyDP2pD3qDdKNrsxvUWbRuW7qPl4nJlFIEKERBDfgn3_bs7xKyZWKSIGK_i8kZH3swodmcXMEaS_O-XPrTHfIZ_zpTLyApWSNkn321pjGNi0IwucMkVScUDEtzdgBpUIW4klOFCSpBFN74GAlsyOUTrSahUh1v-4c--bizHgeS3mAlZpjc0lw.bpRRnoPow3XsEwhaY3wL3Zh5BGgiMPgpkZbLm1Yego8&dib_tag=se&keywords=tt+motor+wheels&qid=1782826040&sprefix=tt+motor+wheels%2Caps%2C114&sr=8-9 )
 - Jumper Wires ( https://www.amazon.ca/RGBZONE-120pcs-Multicolored-Dupont-Breadboard/dp/B01M1IEUAF/ref=sr_1_16?crid=1F4V7SQUCFZYJ&dib=eyJ2IjoiMSJ9.azaI7K_ahP3986cjmNobx_dQyibADCpvZYLOPb9z-NfwP6Ncp6oiX-FgQ_yKnwx6E11uTKXZvAkuulx-ZiIBaFxZphKiP1Aro8IvhKVkrNcSRF8GZLJVwoYV7DVDRdkYUm7j7t6Hx-3_cq8eniCTqgZrHlpLO6Ak9CY5emHPyfnudTT5OMXfpD3Oj4zkzmOYe_-1W6drLVWALFkPpHGtajfAvPsD3SD8OIwwvdmS36uCR2BWyIh976PBWt0GeO93tdgwOhLxasOuaZ6_NjcJFaKWbwkVyday-3Lf-GZTH58.OIWJCh3k0iH9qSTg4UlohL3MTXTRelF48iToXNZiUCI&dib_tag=se&keywords=male%2Bto%2Bmale%2Bjumper%2Bwires&qid=1782826414&sprefix=male%2Bto%2Bmale%2Bjumper%2Bwir%2Caps%2C241&sr=8-16&th=1 )
 - 4x AA Battery Holder ( https://www.pcboard.ca/4-aa-battery-holder-with-switch#:~:text=Another%20bonus%20is%20the%20ON,holder%20will%20do%20the%20job! )
 - Breadboard ( https://www.amazon.ca/ELEGOO-tie-Points-breadboard-Arduino-Jumper/dp/B01EV640I6/ref=sr_1_8?crid=2OZAMWFMFGRGA&dib=eyJ2IjoiMSJ9.x1RtHO-Ps7kZi3pQXJMAjg2nO-0iFIStS0DTQ-ljnuwXHKagvyZ3EN8zEC6pgNHwn5jeegeotxY5K9-IXOtgnznDY-uAfx0P9KZJ9a1YKFOY4Sjm50-7mWbiEnlL5bdl1kfaZIEMxNG_O0eNi08dRqFvKIypwV8zla1S-uLZvsbp5bKcxu8eeyAdsV9xd0SR3yOt7TrM-G_njh9A19KfxR_OfmwhaHYXzFoEdzy9lzI5TlGfFS3HhucPypJlEbGLeEHN3MlHwDKQR_TC8snmQB2iFzrOpbEXQDFxLsclkJM.YAnqXXAfyeU_p8c20DjHb_oaA3-ooeuNT6YkJYsKnPs&dib_tag=se&keywords=breadboard&qid=1782827104&sprefix=breadboard%2Caps%2C197&sr=8-8&th=1 )

