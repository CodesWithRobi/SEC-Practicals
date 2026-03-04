#### NAME: ROBINSON J
#### REG.NO: 212223040170
## Experiment-03: Uploading temperature sensor data in Thing Speak cloud

# AIM:
To monitor the temperature sensor data in the Thing speak using an ESP32 controller.

# Apparatus required:
ESP32 Controller  </br>
Temperature Sensor </br>
Power supply </br>
Connecting wires </br>
Bread board </br>

# PROCEDURE:
## Arduino IDE
Step1:Open the Arduino IDE </br>
Step2: Go to sketch- include library – manage libraries file and install esp32 and thing speak library file </br>
Step3:Go to file and select new file option </br>
Step4:Type the program and update the thing speak channel ID, API key, wifi password and ID </br>
Step5:Go to file and select save option to save the program </br>
Step6:Go to sketch and select verify or compile options </br>
Step7:If no error Hex file will be generated in the temporary folder </br>
Step8: Connect all the components as per the circuit diagram </br>
Step9: Connect the programming cable with esp32 and PC.  </br>
Step10: Check the jumper position and connect 4 & 5 of P4.  </br>
Step11. Upload the program in the esp32. </br>
Step12 Press the boot button in ESP32 and then press and release the reset button after release the boot button </br>
Step13 Check the output in the cloud </br>

## Thingspeak

Step1 Create a ThingSpeak Account </br>
Step2 Log in to your ThingSpeak account </br>
Step3 Create a new channel by navigating to "Channels" and clicking on "New Channel." </br>
Step4 Configure your channel settings, such as Field labels and Channel name </br>
Step5 Copy the Channel ID and API key in the thingspeak and update in the program </br>
Step6 Execute your program to send the sensor value to ThingSpeak </br>
Step7 Check your ThingSpeak channel to verify that the sensor value has been updated </br>

# THEORY:

### What is IoT?

Internet of Things (IoT) describes an emerging trend where a large number of embedded devices (things) are connected to the Internet. These connected devices communicate with people and other things and often provide sensor data to cloud storage and cloud computing resources where the data is processed and analyzed to gain important insights. Cheap cloud computing power and increased device connectivity is enabling this trend.IoT solutions are built for many vertical applications such as environmental monitoring and control, health monitoring, vehicle fleet monitoring, industrial monitoring and control, and home automation

![image](https://user-images.githubusercontent.com/71547910/235334044-c01d4261-d46f-4f62-b07f-72a7b6fce5d5.png)

### Sending Data to Cloud with ESP32 and ThingSpeak

ThingSpeak is an Internet of Things (IoT) analytics platform that allows users to collect, analyze, and visualize data from sensors or devices connected to the Internet. It is a cloud-based platform that provides APIs for storing and retrieving data, as well as tools for data analysis and visualization.The Internet of Things ( or IoT) is a network of interconnected computing devices such as digital machines, automobiles with built-in sensors, or humans with unique identifiers and the ability to communicate data over a network without human intervention.Hello readers, I hope you all are doing great. In this tutorial, we will learn how to send sensor readings from ESP32 to the ThingSpeak cloud. Here we will use the ESP32’s internal sensor like hall-effect sensor and temperature sensor to observe the data and then will share that data cloud.

### What is ThingSpeak?

![image](https://user-images.githubusercontent.com/71547910/235333909-29d2e831-9fe5-4afd-b18d-f1e5d2e32518.png)

It is an open data platform for IoT (Internet of Things). ThingSpeak is a web service operated by MathWorks where we can send sensor readings/data to the cloud. We can also visualize and act on the data (calculate the data) posted by the devices to ThingSpeak. The data can be stored in either private or public channels.ThingSpeak is frequently used for internet of things prototyping and proof of concept systems that require analytics.

### Features Of ThingSpeak

ThingSpeak service enables users to share analyzed data through public channels: </br>
ThingSpeak allows professionals to prepare and analyze data for their businesses: </br>
ThingSpeak updates various ThingSpeak channels using MQTT and REST APIs: </br>
Easily configure devices to send data to ThingSpeak using popular IoT protocols. </br>
Visualize your sensor data in real-time. </br>
Aggregate data on-demand from third-party sources. </br>
Use the power of MATLAB to make sense of your IoT data. </br>
Run your IoT analytics automatically based on schedules or events. </br>
Prototype and build IoT systems without setting up servers or developing web software.</br>
Automatically act on your data and communicate using third-party services like Twilio® or Twitter®</br>

![image](https://user-images.githubusercontent.com/71547910/235334056-3ba9579f-2f62-43b1-a714-8fde6cf9ef32.png)


# PROGRAM:
```C
#include "ThingSpeak.h"
#include <WiFi.h>
#include "DHT.h"
//#include <OneWire.h>
//#include <DallasTemperature.h>

char ssid[] = ""; // Your WiFi SSID
char pass[] = "";  // Your WiFi password

const int out = 23; // Pin for temperature sensor data
long T;
float temperature = 0; // Initialize temperature
WiFiClient client;
DHT dht(23, DHT11);

unsigned long myChannelField = 2495534; // Channel ID
const int TemperatureField = 1;          // Field for temperature data
const int HumidityField = 2;          // Field for humidity data

const char* myWriteAPIKey = "PPL3B7P4AKQQIS5Z"; // Your write API Key

// Temperature sensor setup
void setup() {
  Serial.begin(115200);
  pinMode(out, INPUT); // Set pin mode to input for temperature sensor
  ThingSpeak.begin(client);
  dht.begin();
  delay(1000);
 }

void loop() 
{
  if (WiFi.status() != WL_CONNECTED) 
  {
Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while (WiFi.status() != WL_CONNECTED) 
    {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);
    }
    Serial.println("\nConnected.");
  }

  // Read temperature
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity ");
Serial.print(humidity);
  Serial.println(" g.m-3");
// Write temperature to ThingSpeak
  ThingSpeak.writeField(myChannelField, TemperatureField, temperature, myWriteAPIKey); // Write temperature to ThingSpeak
  ThingSpeak.writeField(myChannelField, HumidityField, humidity, myWriteAPIKey); // Write humidity to ThingSpeak
 delay(100);
}
```
# CIRCUIT DIAGRAM:
![Screen Shot 2024-10-30 at 09 07 45](https://github.com/user-attachments/assets/c03e3938-3110-4dbd-adf8-2b47cf07a998)

# OUTPUT:
![image](https://github.com/user-attachments/assets/214e5d65-b2f1-403c-b9ba-66f4a9101d04)

![image](https://github.com/user-attachments/assets/a2477744-5098-4c47-a41d-19a1c34191be)

# RESULT:

Thus the temperature sensor values are updated in the Thing speak using ESP32 controller.

