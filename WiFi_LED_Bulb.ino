#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "ESP32_WiFi";
const char* password = "123456789";
WebServer server(80);
#define relay 4
String webpage = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <title>ESP32 Relay Control</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <style>
        body{
            font-family: Arial, sans-serif;
            background:#f2f2f2;
            text-align:center;
            margin-top:60px;
        }

        h1{
            color:#333;
        }

        button{
            width:180px;
            padding:15px;
            margin:15px;
            font-size:20px;
            border:none;
            border-radius:10px;
            cursor:pointer;
        }

        .on{
            background:green;
            color:white;
        }

        .off{
            background:red;
            color:white;
        }
    </style>
</head>

<body>

<h1>ESP32 Relay Control</h1>

<button class="on" onclick="location.href='/On'">
Relay ON
</button>

<br>

<button class="off" onclick="location.href='/Off'">
Relay OFF
</button>

</body>
</html>
)rawliteral";


void ON(){
  digitalWrite(relay,LOW);
  server.send(200,"text/plain","Relay ON");
}

void OFF(){
  digitalWrite(relay,HIGH);
  server.send(200,"text/plain","Relay OFF");
}
void handleRoot(){
  server.send(200,"text/html",webpage);
}

void setup(){
  Serial.begin(115200);
  Serial.println("ESP32 started");
  pinMode(relay,OUTPUT);
  digitalWrite(relay,LOW);

  WiFi.softAP(ssid,password);
  Serial.println("Wifi started.");
  Serial.print("IP adress:");
  Serial.println(WiFi.softAPIP());

  server.on("/",handleRoot);
  server.on("/On",ON);
  server.on("/Off",OFF);
  server.begin();

}

void loop() {
  server.handleClient();
}

