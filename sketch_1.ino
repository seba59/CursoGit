void setup() {
  // Configuración del pin del LED 2 como salida
  pinMode(2, OUTPUT);

  // Iniciar la comunicación serial con un baud rate de 115200
  Serial.begin(115200);
}

void loop() {
  // Encender el LED 2
  digitalWrite(2, HIGH);

  // Mostrar el estado del LED en el monitor serie
  Serial.println("LED encendido");

  // Esperar 1 segundo
  delay(500);

  // Apagar el LED 2
  digitalWrite(2, LOW);

  // Mostrar el estado del LED en el monitor serie
  Serial.println("LED apagado");

  // Esperar 1 segundo
  delay(100);
}

