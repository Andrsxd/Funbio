#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define DHT11_PIN  23 // Definir pin GPIO23 conectado al sensor DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht11(DHT11_PIN, DHT11);

void setup() {
  dht11.begin(); // iniciar sensor DHT11
  lcd.init();         
  lcd.backlight();    // Encender pantalla
}

void loop() {
  float humi  = dht11.readHumidity();    // definir varaible para la humedad
  float tempC = dht11.readTemperature(); // definir variable para temperatura

  lcd.clear();
  // Revisar si las lecturas son efectivas o no
  if (isnan(tempC) || isnan(humi)) {
    lcd.setCursor(0, 0);
    lcd.print("Cargando");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(tempC); // Mostrar temperatura 
    lcd.print("°C");

    lcd.setCursor(0, 1); 
    lcd.print("Humi: ");
    lcd.print(humi);      // Mostrar temperatura
    lcd.print("%");
  }

  // Actualizar cada 1 segundo la lectura actual
  delay(1000);
}
