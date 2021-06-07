# Fire-detection-and-altering-sytem-UsingIOT

*Done in Semester 4 in J component for Internet of Things (CSE3009)*


Internet of Things (IoT) is basically a network which consists of physical systems that are embedded with sensors connected to a cloud where data is exchanged with the help of a gateway, which facilitates to and from communication of data connected over the internet. 

Fire detection systems are designed to get fires early within the development once time can still be obtainable for the safe evacuation of occupants. Early detection conjointly plays a major role in protective of safety of emergency response personnel. Property loss will be decreased and period for the operation decreased through early detection as a result of management efforts are started whereas the fireplace remains small.

At the present the appliance of IoT primarily based systems is extended to real time detection and warning system. However, price has been a significant issue for development and implementation of IoT systems. Considering the price, simple implementation, the planned system proposes an occasional cost nevertheless economical IoT system for warning and alerting hearth incidents.

The proposed system has sensors which collects data from the physical world and is continuously sent to the cloud platform. When the temperature increases the preset threshold, the http webhook will be triggered and the notification is sent to the fire department. The amount of equipment to be taken by the fire departments can be moderated with the help of the displayed number of people in the affected area which has been added to the proposed system. 


****Our main aim is to control the fire as soon as possible.****

• The sensors (Infra-red and Temperature) will gather the data from physical word. 

• The data gathered is sent to the cloud platform (ThingSpeak) continuously. 

• When the temperature increases more than the present threshold value, the http 
webhook will be triggered. 

A notification will be sent to the fire department and the number of people in the separate 
areas(rooms) in the affected area(building) will be displayed in the LCD


Due to the diversification of components, totally different operative structures, and increasing sources of uncertainty within the grid, the complexness of electrical systems continues to increase. So as to unravel this complexity and prepare the electrical system infrastructure for the challenges and obstacles of the long run power grid in the returning decades, several researchers have implied the conception of good grid in the past 2 decades. Good grids have brought vital changes to quality and resource management, that need major advancements in telecommunications infrastructure, reportage software, automation, and network intelligence. The Internet of Things may be a cheap and sensible method might connect multiple forms of devices to every different through express programming, sensors, devices, then on. Effective devices and information transmission technologies are more and more utilized in the energy sector; including installations. This gradual process, not to mention the facility of automation and large data analysis, may produce a valuable energy chain within the energy sector. Helpful analysis of those data can improve power system performance and quality detection, thereby considerably reducing prices.


Our main objective here is to minimize the loss that happens due to fire accidents and to save people in danger as soon as possible. The proposed project, will be installed in every room of an apartment, which will help us to detect the temperature at every instant and update to cloud hence, real time monitoring.

Here we have setup a thermal sensor in the every room of the building, connected to an Arduino and wi-fi which is used to read the information and send the data to cloud, used here is ThingSpeak cloud platform for sending and analyzing the data. An unique API key which is generated by the thing speak channel and that key is used in our code to update the data. We are also attaching 2 IR sensors on top of every door such that when a person enters the room one IR sensor will increase the counter. If a person leaves the room other IR sensor will increment the count so the difference of this counts will give no of people in that room, so if we display this data which shows number of people in each room in the LCD screen, when the fire department people comes to the building they will clearly get to know where they have to go first even if the smoke covered up entire building as we know the location of a person we can easily reach there and protect them. IFTTT web applet is used for sending messages to the registered person or the fire department. This IFTTT will work if a particular event has happened then it will be triggered, so here we have given a webhook as input event and SMS as output event, webhook is a url which we have used in react in thing speak, so if the temperature has crossed certain threshold value React will trigger this URL and this IFTTT confirms this event has been triggered so it will trigger the corresponding event which will send an SMS to the registered number.


Here we tend to be utilizing the temperature detector LM335, temperature sensor which might be simply label to know the temperature of the surroundings (room) which is connected with Arduino. Arduino is related to the ThingSpeak cloud which provides instant and accurate visualizations analysis data denote by your devices to ThingSpeak, you'll be able to perform on- line analysis and process of the information in real time. This is usually used for prototyping and proof of idea IoT systems that need analytics. The IFTTT application program connects 2 or a lot of apps or devices together. It allows you to try {and do} one thing that those apps or devices couldn't do on their own,will be related to the cloud here that is used to send the warning (notification) to moveable device like mobile phone. The economical committal to writing is finished in the software system tool known as Tinker CAD and Arduino IDE are used.

![image](https://user-images.githubusercontent.com/59841174/120939927-12a79280-c738-11eb-9e58-cc7c3aaf9180.png)


The IR detector is utilized here which is an device that measures and finds actinic ray in its close environment. In an exceeding outlined angle range, the detector components detect the warmth radiation (infrared radiation) that changes over time to the movement of people. There are two IR sensors related to the entry that are once more associated with the Arduino for a range of people within the regarded area which is shown in the alphanumeric display screen.
 
The information is understood and communicated in real time with things speak cloud and can receive an alert once temperatures exceed the given threshold price.

![image](https://user-images.githubusercontent.com/85409148/121043679-78e0f380-c7d2-11eb-997b-ceeba882f225.png)



