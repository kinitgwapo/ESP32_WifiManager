# Author
Name: Restauro, Kenneth O.

Assigned Number: 99 (BCA188-ESP32-99)

# Description
This project features a configurable Wi-Fi credential through an ESP32 hosted web-portal.

# Laboratory Report

### Observation

<div align="center">

| Task              | What to do                                                         | What I have observed                                                                                               |
| :---------------- | :----------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------- |
| Wrong password    | Enter a wrong password on the setup page                           | Throws an error in the Serial Monitor indicating that the attempted connection failed                              |
| Reset settings    | Hold the BOOT button for 3 seconds while the board is running      | When BOOT button is held for 3 seconds, the Wi-Fi credentials are erased (Implemented)                             |
| Change the name   | Change the network name, upload, and check your phone's Wi-Fi list | The ESP32 now shows a different Wi-Fi AP name, but keeps the Wi-Fi credentials saved                               |
| Different network | Reset the board, then connect to your phone hotspot                | The ESP32 successfully connected to a phone's Mobile HotSpot and is represented with a related name "ESP32-2B8658" |

</div>

### WiFiManager Main Feature
The library 'WiFiManager' made by Tzapu is designed to handle Wifi connections in ESP32 and ESP2866 boards from Espressif Systems. Its main feature is the capability to Re/Configure the Wi-Fi connection without having to re-write a single code, and is done through a Web-Portal.

### Images
<div align="center">
  
<img width="705" height="447" alt="Serial Monitor" src="https://github.com/user-attachments/assets/affe9676-35b2-4fa1-ad36-1a3ff1ead6d8" />
<img width="720" height="1600" alt="Web-Portal" src="https://github.com/user-attachments/assets/9791dbb4-03ac-4a95-9bda-8b6ecaf1cdf6" />

</div>

# References
- https://github.com/tzapu/WiFiManager
- https://www.w3schools.com/tools/tool_markdown_table.php
