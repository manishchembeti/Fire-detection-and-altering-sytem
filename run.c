#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String ssid     = "Simulator Wifi";   
String password = ""; 
String host     = "api.thingspeak.com";
const int httpPort   = 80; 
String uri     = "/update?api_key=C5AN76OZP0Z2RESW&field1="; 
int sensePin = A0;  
int sensorInput;    
double temp;
const int in = 9;
const int out = 8;
int c1=0;
int c2=0;


int setupESP8266(void) { 

Serial.begin(115200);    
Serial.println("AT");   
delay(10);        
  if (!Serial.find("OK")) return 1; 
Serial.println("AT+CWJAP=\"" + ssid + "\",\"" + password + "\""); 
delay(10);         
  if (!Serial.find("OK")) return 2; 
Serial.println("AT+CIPSTART=\"TCP\",\"" + host + "\"," + httpPort); 
delay(50);        
  if (!Serial.find("OK")) return 3; 
  return 0; 
} 
void anydata(void) { 
sensorInput = analogRead(A0);        
  temp = (double)sensorInput / 1024;   
  temp = temp * 5;                     
  temp = temp - 0.5;                   
  temp = temp * 100;
  String httpPacket = "GET " + uri + String(temp) + " HTTP/1.1\r\nHost: " + host + "\r\n\r\n"; 
  int length = httpPacket.length(); 
Serial.print("AT+CIPSEND="); 
Serial.println(length); 
delay(10);
Serial.print(httpPacket); 
delay(10);  
  if (!Serial.find("SEND OK\r\n")) return; 
} 
void setup() { 

  setupESP8266(); 
lcd.begin(16, 2); 

lcd.setCursor(0,0);          
lcd.print("WELCOME!");
pinMode(in,INPUT);
pinMode(out,INPUT);

} 
void loop() { 
anydata();   
delay(100);
  if(digitalRead(in)==1)
  {
    c1=c1+1;
lcd.clear();
lcd.setCursor(0,0);
lcd.print("No of people ");
lcd.setCursor(0,1);
lcd.print(c1);
delay(100);

  }
  if(digitalRead(out)==1)
  {
    if(c1>0){
      c1=c1-1;}
lcd.clear();
lcd.setCursor(0,0);
lcd.print("No of people ");
lcd.setCursor(0,1);
lcd.print(c1);
delay(100);

  }

}


