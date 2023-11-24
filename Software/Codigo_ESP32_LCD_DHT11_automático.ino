#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <DHT_U.h>
//insertar las librerias que se van a usar

int sensor = 13; //definir pin del sensor DHT11
int ventilador = 4; //definir pin del ventilador
int calefactor = 2; //definir pin del ventilador

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht11(sensor,DHT11);

void setup() {
  dht11.begin(); // iniciar sensor DHT11
  lcd.init();         
  lcd.backlight(); // Encender pantalla

  pinMode(sensor,INPUT); //establecer como pin de entrada
  pinMode(ventilador,OUTPUT); //establecer como pin de salida
  pinMode(calefactor,OUTPUT); //establecer como pin de salida
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
    lcd.print(humi); // Mostrar humedad
    lcd.print("%");
  }

  Serial.print("La temperatura es: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC >= 37.5){
    digitalWrite(calefactor, LOW); //modo NC
    digitalWrite(ventilador, HIGH); //modo NO
    Serial.println("Ventilador encendido");
  }
  if (tempC <= 36.5){
    digitalWrite(ventilador, LOW); //modo NC
    digitalWrite(calefactor, HIGH); //modo NO
    Serial.println("Calefactor encendido");
  }

  // Actualizar cada 1 segundo todos los parámetros y acciones leidas
  delay(500);
}
