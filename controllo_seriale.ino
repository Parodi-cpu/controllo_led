char t;// variabile che contiene il carattere 1 byte che invio
 
void setup() {
pinMode(2,OUTPUT);   //led VERDE
pinMode(3,OUTPUT);   //led GIALLO
pinMode(4,OUTPUT);   //led ROSSO
Serial.begin(9600);  // impostazione velocità seriale
 
}
 
void loop() {
  
if(Serial.available()){// se la porta seriale contiene qualcosa
  t = Serial.read();//leggo cosa contiene
  Serial.println(t);// stampo cosa digito (echo)
}
 
if(t == 'V'){            //Se digito V (maiuscolo)
  digitalWrite(2,HIGH);  //accendo il led verde
}
 
else if(t == 'v'){      //Se digito v (minuscolo)
  digitalWrite(2,LOW);  // spengo il led verde
}
 
else if(t == 'G'){      
  digitalWrite(3,HIGH);
}
 
else if(t == 'g'){     
  digitalWrite(3,LOW);
}

else if(t == 'R'){    
  digitalWrite(4,HIGH);
}
else if(t == 'r'){
  digitalWrite(4,LOW);
}
 
delay(100);
}
