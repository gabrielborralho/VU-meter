int led[10] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
int canal_esquerdo = 0;
int esquerdo, i;

void setup(){
for (i = 0; i < 10; i++)
  pinMode(led[i], OUTPUT);
//Serial.begin(9600);
}

void loop(){
  esquerdo = analogRead(canal_esquerdo);
  // Serial.println(esquerdo);
  
  esquerdo = esquerdo / 10;
  // Serial.println(esquerdo);
  // esquerdo = 1500;
  // esquerdo = 0;

  if (esquerdo == 0){
    for(i = 0; i < 10; i++){
      digitalWrite(led[i], LOW);
    }
  }
  
  else{
    for(i = 0; i < left; i++){
     digitalWrite(led[i], HIGH);
    }
    
    for(i = i; i < 10; i++){
     digitalWrite(led[i], LOW);
    }
  }
}
