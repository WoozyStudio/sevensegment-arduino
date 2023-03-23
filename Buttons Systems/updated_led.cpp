#define buttonUp   2
#define buttonDown 3

#define displayA  9 //A
#define displayB 10 //B
#define displayC  6 //C
#define displayD  5 //D
#define displayE  4 //E
#define displayF  8 //F
#define displayG  7 //G

#define ledUp   12
#define ledDown 11

int contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonUp,INPUT);
  pinMode(buttonDown,INPUT);

  pinMode(displayA,OUTPUT);
  pinMode(displayB,OUTPUT);
  pinMode(displayC,OUTPUT);
  pinMode(displayD,OUTPUT);
  pinMode(displayE,OUTPUT);
  pinMode(displayF,OUTPUT);
  pinMode(displayG,OUTPUT);
  pinMode(ledUp,OUTPUT);
  pinMode(ledDown,OUTPUT);
}

void loop() {
    if(digitalRead(buttonUp)) {
        digitalWrite(ledUp, HIGH);
        digitalWrite(ledDown, LOW);
        contador++;
        if(contador>9) {
            contador = 0;
        }
        Serial.println(contador);
        delay(500);
    }
    if(digitalRead(buttonDown)) {
        digitalWrite(ledUp, LOW);
        digitalWrite(ledDown, HIGH);
        contador--;
        if(contador>0) {
            contador = 9;
        }
        Serial.println(contador);
        delay(500);
    }

    switch(contador) {
        case 0:
            cero();
            break;
        case 1:
            uno();
            break;
        case 2:
            dos();
            break;
        case 3:
            tres();
            break;
        case 4:
            cuatro();
            break;
        case 5:
            cinco();
            break;
        case 6:
            seis();
            break;
        case 7:
            siete();
            break;
        case 8:
            ocho();
            break;
        case 9:
            nueve();
            break;
    }
}

void cero() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, HIGH);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, LOW);
}

void uno() {
    digitalWrite(displayA, LOW);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, LOW);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, LOW);
    digitalWrite(displayG, LOW);
}

void dos() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, LOW);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, HIGH);
    digitalWrite(displayF, LOW);
    digitalWrite(displayG, HIGH);
}

void tres() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, LOW);
    digitalWrite(displayG, HIGH);
}

void cuatro() {
    digitalWrite(displayA, LOW);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, LOW);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, HIGH);
}

void cinco() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, LOW);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, HIGH);
}

void seis() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, LOW);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, HIGH);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, HIGH);
}

void siete() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, LOW);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, LOW);
    digitalWrite(displayG, LOW);
}

void ocho() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, HIGH);
    digitalWrite(displayE, HIGH);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, HIGH);
}

void nueve() {
    digitalWrite(displayA, HIGH);
    digitalWrite(displayB, HIGH);
    digitalWrite(displayC, HIGH);
    digitalWrite(displayD, LOW);
    digitalWrite(displayE, LOW);
    digitalWrite(displayF, HIGH);
    digitalWrite(displayG, HIGH);
}