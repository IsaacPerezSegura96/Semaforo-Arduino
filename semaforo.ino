#define led_rojo 7
#define led_amarillo 6
#define led_verde 5
#define boton 4
#define led_rojoPeaton 3
#define led_verdePeaton 2
#define pot A0

int valorPot=0;
void setup() {
  pinMode(led_verde,OUTPUT);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_rojo,OUTPUT);
  pinMode(led_verdePeaton,OUTPUT);
  pinMode(led_rojoPeaton,OUTPUT);
  pinMode(boton,INPUT_PULLUP);
  
  digitalWrite(led_verde,HIGH);
  digitalWrite(led_amarillo,LOW);
  digitalWrite(led_rojo,LOW);
  
  digitalWrite(led_verdePeaton,LOW);
  digitalWrite(led_rojoPeaton,HIGH);
}

void loop() {
  valorPot = analogRead(pot);
  if(digitalRead(boton)==HIGH){
    digitalWrite(led_verde,LOW);
    digitalWrite(led_amarillo,HIGH);
    digitalWrite(led_rojo,LOW);
    delay(1000);
    digitalWrite(led_verde,LOW);
    digitalWrite(led_amarillo,LOW);
    digitalWrite(led_rojo,HIGH);
    
    digitalWrite(led_verdePeaton,HIGH);
    digitalWrite(led_rojoPeaton,LOW);
    if(valorPot<500){
      delay(1000);
    }else{
        delay(valorPot+1000);
    }

    digitalWrite(led_verde,HIGH);
    digitalWrite(led_amarillo,LOW);
    digitalWrite(led_rojo,LOW);
    
    digitalWrite(led_verdePeaton,LOW);
    digitalWrite(led_rojoPeaton,HIGH);
  }
}
