int LedPin = 13;  // la diode LED est connectée à la broche 13
int entryPin = 8;    // le bouton poussoir est connecté à la broche 8
int vbin = 0;      // ajoutons une variable pour stocker l'état lu

void setup() {
  pinMode(LedPin, OUTPUT);  // définissons la broche 13 pour une sortie numérique
  pinMode(entryPin, INPUT);    // définissons la broche 8 comme une entrée numérique
}

void loop() {
  vbin = digitalRead(entryPin);   // lecture de l'état de l'entrée (HIGH ou LOW)
  digitalWrite(LedPin, vbin);  // Écriture de l'état lu sur la diode LED
}