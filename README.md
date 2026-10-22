# Description
This project features a configurable Wi-Fi credential through an ESP32 hosted web-portal.

# Laboratory Report

## Observation

<div align="center">

| Task              | What to do                                                         | What you observed |
| :---------------- | :----------------------------------------------------------------- | :---------------- |
| Wrong password    | Enter a wrong password on the setup page                           |                   |
| Reset settings    | Hold the BOOT button for 3 seconds while the board is running      |                   |
| Change the name   | Change the network name, upload, and check your phone's Wi-Fi list |                   |
| Different network | Reset the board, then connect to your phone hotspot                |                   |

</div>

## WiFiManager Main Feature
The library 'WiFiManager' made by Tzapu is designed to handle Wifi connections in ESP32 and ESP2866 boards from Espressif Systems. Its main feature is the capability to Re/Configure the Wi-Fi connection without having to re-write a single code, and is done through a Web-Portal.

# References
- https://github.com/tzapu/WiFiManager
- https://www.w3schools.com/tools/tool_markdown_table.php