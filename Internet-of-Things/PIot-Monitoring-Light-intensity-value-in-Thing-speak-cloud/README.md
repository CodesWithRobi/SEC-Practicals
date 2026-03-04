#### NAME: ROBINSON J
#### REG.NO: 212223040170
## Experiment-04: Monitoring-Light-intensity-value-in-Thing-speak-cloud
## Uploading LDR sensor data in Thing Speak cloud

# AIM:
To monitor the Light-intensity value in the Thing speak cloud using LDR sensor and ESP32 controller.
# Apparatus required:
ESP32 Controller<br>
LDR <br>
Power supply<br>
Connecting wires<br>
Bread board<br>
# PROCEDURE:
## Arduino IDE
Step1:Open the Arduino IDE<br>
Step2: Go to sketch- include library – manage libraries file and install esp32 and thing speak library file<br>
Step3:Go to file and select new file option<br>
Step4:Type the program and update the thing speak channel ID, API key, wifi password and ID<br>
Step5:Go to file and select save option to save the program<br>
Step6:Go to sketch and select verify or compile options<br>
Step7:If no error Hex file will be generated in the temporary folder<br>
Step8: Connect all the components as per the circuit diagram<br>
Step9: Connect the programming cable with esp32 and PC.<br>
Step10: Check the jumper position and connect 4 & 5 of P4.<br>
Step11. Upload the program in the esp32.<br>
Step12 Press the boot button in ESP32 and then press and release the reset button after release the boot button<br>
Step13 Check the output in the cloud<br>
## Thingspeak
Step1 Create a ThingSpeak Account<br>
Step2 Log in to your ThingSpeak account<br>
Step3 Create a new channel by navigating to "Channels" and clicking on "New Channel."<br>
Step4 Configure your channel settings, such as Field labels and Channel name<br>
Step5 Copy the Channel ID and API key in the thingspeak and update in the program<br>
Step6 Execute your program to send the sensor value to ThingSpeak<br>
Step7 Check your ThingSpeak channel to verify that the sensor value has been updated<br>
# THEORY:
## What is Light Dependent Resistor?
An electronic component like LDR or light-dependent resistor is responsive to light. Once light rays drop on it, then immediately the resistance will be changed. The resistance values of an LDR may change over several orders of magnitude. The resistance value will be dropped when the light level increases.
The resistance values of LDR in darkness are several megaohms whereas in bright light it will be dropped to hundred ohms. So due to this change in resistance, these resistors are extremely used in different applications. The LDR sensitivity also changes through the incident light’s wavelength.
The designing of LDRs can be done by using semiconductor materials to allow their light-sensitive properties. The famous material used in this resistor is CdS (cadmium sulfide), even though the utilization of this material is currently restricted in European countries due to some environmental issues while using this material. Likewise, CdSe (cadmium selenide) is also restricted and additional materials that can be employed mainly include PbS (lead sulfide), InS ( indium antimonide).
Even though for these resistors, a semiconductor material is used, because they are simply passive devices and they do not have a PN-junction. This detaches them from other LDRs such as phototransistors & photodiodes.
![image](https://github.com/user-attachments/assets/40d9f50a-c34a-4b6f-bbd0-d80be0cd418e)
## LDR Symbol
In electronic circuits, the LDR symbol is used that mainly depends on the resistor symbol; however, it illustrates the light rays in the arrows form. In this way, it follows the same principle which is used for phototransistor & photodiode circuit symbols wherever arrows are utilized to demonstrate the light dropping on these types of components. The LDR circuit symbols are shown below.
![image](https://github.com/user-attachments/assets/b7cf98ab-1f73-4c68-94b2-02d6209eb5f0)
## Construction of an LDR
The construction of an LDR includes a light-sensitive material that is placed on an insulating substrate like ceramic. The material is placed in a zigzag shape in order to get the required power rating and resistance. The area of zigzag separates the metal-placed areas into two regions.

![image](https://github.com/user-attachments/assets/aac89ad2-4eb2-4b4e-9e1f-f1c10f5552c7)


Where the Ohmic contacts are made either on the sides of the area. The resistances of the contacts must be as less as possible to make sure that the resistance, mainly varies due to the light effect only. The use of lead & cadmium materials is avoided as they are injurious to the environment.
## Working Principle of Light Dependent Resistor
The working principle of an LDR is photoconductivity, which is nothing but an optical phenomenon. When the light is absorbed by the material then the conductivity of the material enhances. When the light falls on the LDR, then the electrons in the valence band of the material are eager to the conduction band. But, the photons in the incident light must have energy superior to the bandgap of the material to make the electrons jump from one band to another band (valance to conduction).
Hence, when light having ample energy, more electrons are excited to the conduction band which grades in a large number of charge carriers. When the effect of this process and the flow of the current starts flowing more, the resistance of the device decreases.
## Characteristics of LDR
The light-dependent resistor is very responsive to light. When the light is stronger, then the resistance is lower which means, when the light intensity increases then the value of resistance for the LDR will be decreased drastically to below 1K.

![image](https://github.com/user-attachments/assets/06b8eeb0-a08f-4b16-9d99-13f3913e3e90)


When the light drops on LDR, the resistance will be decreased and when the resistor is placed in the dark then the resistance will be increased which is called dark resistance. If any device absorbs light then its resistance will be reduced radically. If a stable voltage is given to it, the light intensity will be increased & the flow of current starts increasing. So, the following diagram represents the characteristics between resistance & illumination for a specific LDR.

LDRs are not linear devices and their sensitivity changes through the light’s wavelength which drops on them. Some kinds of photocells are not at all sensitive to a specific range of wavelengths because it depends on the used material.

Once light rays fall on a photocell, the resistance will be changed in 8 ms to 12, while it uses few more seconds to rise the resistance back again to its early value once the light is removed. So this is known as a recovery rate of resistance. In audio compressors, this property is applicable.
## Applications of LDR
Light-dependent resistors are simple and low-cost devices. These devices are used where there is a need to sense the presence and absence of light is necessary. These resistors are used as light sensors and the applications of LDR mainly include alarm clocks, street lights, light intensity meters, burglar alarm circuits. For a better understanding of this concept, here we have explained one project namely; power conserving of intensity controlled street lights using LDR.
## What is IoT?
![image](https://github.com/user-attachments/assets/a2ff2d80-00d3-4b33-963b-a24ded0361ca)

Internet of Things (IoT) describes an emerging trend where a large number of embedded devices (things) are connected to the Internet. These connected devices communicate with people and other things and often provide sensor data to cloud storage and cloud computing resources where the data is processed and analyzed to gain important insights. Cheap cloud computing power and increased device connectivity is enabling this trend.IoT solutions are built for many vertical applications such as environmental monitoring and control, health monitoring, vehicle fleet monitoring, industrial monitoring and control, and home automation
 
## Sending Data to Cloud with ESP32 and ThingSpeak
ThingSpeak is an Internet of Things (IoT) analytics platform that allows users to collect, analyze, and visualize data from sensors or devices connected to the Internet. It is a cloud-based platform that provides APIs for storing and retrieving data, as well as tools for data analysis and visualization.The Internet of Things ( or IoT) is a network of interconnected computing devices such as digital machines, automobiles with built-in sensors, or humans with unique identifiers and the ability to communicate data over a network without human intervention.Hello readers, I hope you all are doing great. In this tutorial, we will learn how to send sensor readings from ESP32 to the ThingSpeak cloud. Here we will use the ESP32’s internal sensor like hall-effect sensor and temperature sensor to observe the data and then will share that data cloud.
## What is ThingSpeak?
 ![image](https://github.com/user-attachments/assets/f9e7c379-60ea-4f39-b693-3e53e91452b9)

It is an open data platform for IoT (Internet of Things). ThingSpeak is a web service operated by MathWorks where we can send sensor readings/data to the cloud. We can also visualize and act on the data (calculate the data) posted by the devices to ThingSpeak. The data can be stored in either private or public channels.ThingSpeak is frequently used for internet of things prototyping and proof of concept systems that require analytics.
## Features Of ThingSpeak
ThingSpeak service enables users to share analyzed data through public channels:<br>
ThingSpeak allows professionals to prepare and analyze data for their businesses:<br>
ThingSpeak updates various ThingSpeak channels using MQTT and REST APIs:<br>
Easily configure devices to send data to ThingSpeak using popular IoT protocols.<br>
Visualize your sensor data in real-time.<br>
Aggregate data on-demand from third-party sources.<br>
Use the power of MATLAB to make sense of your IoT data.<br>
Run your IoT analytics automatically based on schedules or events.<br>
Prototype and build IoT systems without setting up servers or developing web software.<br>
 ![image](https://github.com/user-attachments/assets/6ee6398f-15b8-4bec-8183-90ee362bd649)

 
# PROGRAM:
```C
#include <WiFi.h>

#include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros
#define ldr_pin 34
char ssid[] = "name";   // your network SSID (name) 
char pass[] = "123456789";   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;

unsigned long myChannelNumber =  2487109;
const int ChannelField = 1;
const char * myWriteAPIKey = "4TL0XDHT9DBX1YD4";

int ldrValue = 0;       // Variable to store raw analog value
int lightPercentage = 0;

const int darkValue = 4095; // Analog value in complete darkness
const int brightValue = 0;  


void setup() 
{
  Serial.begin(115200);  //Initialize serial
  pinMode(ldr_pin, INPUT);
  WiFi.mode(WIFI_STA);   
  ThingSpeak.begin(client);  // Initialize ThingSpeak
}

void loop() 
{
  // Connect or reconnect to WiFi
  if(WiFi.status() != WL_CONNECTED)
{
    Serial.print("Attempting to connect to SSID: ");
    
    while(WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass); 
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }

  /* LDR sensor */
  int ldrValue= analogRead(ldr_pin);  
  
  lightPercentage = map(ldrValue, darkValue, brightValue, 0, 100);

  // Constrain the percentage to 0-100 range
  lightPercentage = constrain(lightPercentage, 0, 100);
  Serial.println("Intensity="); //print on serial monitor using ""
  Serial.println(lightPercentage);    
  Serial.println("%");     //display output on serial monitor
  
  ThingSpeak.writeField(myChannelNumber, ChannelField, lightPercentage, myWriteAPIKey);
  delay(5000); 
}
```
# CIRCUIT DIAGRAM:
![image](https://github.com/user-attachments/assets/66e72009-7c55-46f0-b8f0-a646e1f47410)

# OUTPUT:
<img src="https://github.com/user-attachments/assets/9e9feda2-6c26-4519-bfdc-a4cdfe3ca6c4" alt="image" style="width: 49%;">

<img src="https://github.com/user-attachments/assets/21c831b8-3ac1-4b83-bc29-2b4042b49edc" alt="image" style="width: 50%;">

# RESULT:

Thus the light intensity values are updated in the Thing speak cloud using ESP32 controller.



