#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

#define BUZZER 8     // buzzer or LED pin
#define FAN 9        // optional (relay/fan)

DHT dht(DHTPIN, DHTTYPE);

// Set desired values
float setTemp = 28.0;     // desired temperature
float setHumidity = 60.0; // desired humidity

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(BUZZER, OUTPUT);
  pinMode(FAN, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (!isnan(temp) && !isnan(hum)) {

    Serial.print("Temp: ");
    Serial.print(temp);
    Serial.print(" C, Humidity: ");
    Serial.println(hum);

    // ALERT CONDITION
    if (temp > setTemp || hum < setHumidity) {
      digitalWrite(BUZZER, HIGH);  // alert ON
    } else {
      digitalWrite(BUZZER, LOW);   // alert OFF
    }

    // OPTIONAL CONTROL (fan)
    if (temp > setTemp) {
      digitalWrite(FAN, HIGH);
    } else {
      digitalWrite(FAN, LOW);
    }
  }

  delay(2000);
}
