const int lampu_kiri[8]={2,3,4,5,6,7,8,9};
const int lampu_kanan[8]={A4,A3,A2,A1,A0,10,11,12};
byte indikator = 13;
byte tombol = A5;
byte mode=0;
bool status=false;

unsigned long waktuSekarang=0;
unsigned long waktuTerakhir=0;
unsigned int batas = 500;

void setup() {
  // put your setup code here, to run once:
  
  for(int i = 0; i<8;i++){
    pinMode(lampu_kiri[i],OUTPUT);
  }
   for(int i = 0; i<8;i++){
    pinMode(lampu_kanan[i],OUTPUT);
  }

  pinMode(tombol,INPUT_PULLUP);
  pinMode(indikator,OUTPUT);
  digitalWrite(indikator,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  Indikator();
  
  if(digitalRead(tombol)==LOW){
    delay(80);
    mode++;
    while(digitalRead(tombol)==LOW){}
  }

 if(mode==1){
    mode1();
  }

  else if(mode==2){
    mode2();
  }

  else if(mode==3){
    mode3();
  }

  else if(mode==4){
    mode4();
  }

  else if(mode==5){
    mode5();
  }

  else if(mode==6){
    mode6();
  }

  else if(mode==7){
    mode7();
  }

  else if(mode==8){
    mode8();
  }

  else if(mode==9){
    mode9();
  }

  else if(mode==10){
    mode=0;
  }

}

void Indikator(){
  waktuSekarang = millis();
  if(unsigned(waktuSekarang - waktuTerakhir) >= batas){

    status = !status;
    digitalWrite(indikator,status);

    waktuTerakhir = waktuSekarang;
  }
}


void mode1(){
 digitalWrite(lampu_kiri[0],HIGH);
  digitalWrite(lampu_kiri[1],HIGH);
  digitalWrite(lampu_kiri[2],HIGH);
  digitalWrite(lampu_kiri[3],HIGH); 
  digitalWrite(lampu_kiri[4],HIGH);
  digitalWrite(lampu_kiri[5],HIGH);
  digitalWrite(lampu_kiri[6],HIGH);
  digitalWrite(lampu_kiri[7],HIGH); 
  digitalWrite(lampu_kanan[0],LOW);
  digitalWrite(lampu_kanan[1],LOW);
  digitalWrite(lampu_kanan[2],LOW);
  digitalWrite(lampu_kanan[3],LOW);
  digitalWrite(lampu_kanan[4],LOW);
  digitalWrite(lampu_kanan[5],LOW);
  digitalWrite(lampu_kanan[6],LOW);
  digitalWrite(lampu_kanan[7],LOW);
  delay(500);
    digitalWrite(lampu_kanan[0],HIGH);
    digitalWrite(lampu_kanan[1],HIGH);
    digitalWrite(lampu_kanan[2],HIGH);
    digitalWrite(lampu_kanan[3],HIGH);
    digitalWrite(lampu_kanan[4],HIGH);
    digitalWrite(lampu_kanan[5],HIGH);
    digitalWrite(lampu_kanan[6],HIGH);
    digitalWrite(lampu_kanan[7],HIGH);
    digitalWrite(lampu_kiri[0],LOW);
    digitalWrite(lampu_kiri[1],LOW);
    digitalWrite(lampu_kiri[2],LOW);
    digitalWrite(lampu_kiri[3],LOW);
    digitalWrite(lampu_kiri[4],LOW);
    digitalWrite(lampu_kiri[5],LOW);
    digitalWrite(lampu_kiri[6],LOW);
    digitalWrite(lampu_kiri[7],LOW);
    delay(500);  
}

void mode2(){
for(int row=0;row<3;row++) {
    delay(50);
  digitalWrite(lampu_kiri[0],HIGH);
  digitalWrite(lampu_kiri[1],HIGH);
  digitalWrite(lampu_kiri[2],HIGH);
  digitalWrite(lampu_kiri[3],HIGH); 
  digitalWrite(lampu_kiri[4],HIGH);
  digitalWrite(lampu_kiri[5],HIGH);
  digitalWrite(lampu_kiri[6],HIGH);
  digitalWrite(lampu_kiri[7],HIGH); 
    delay(50);
    digitalWrite(lampu_kiri[0],LOW);
    digitalWrite(lampu_kiri[1],LOW);
    digitalWrite(lampu_kiri[2],LOW);
    digitalWrite(lampu_kiri[3],LOW);
    digitalWrite(lampu_kiri[4],LOW);
    digitalWrite(lampu_kiri[5],LOW);
    digitalWrite(lampu_kiri[6],LOW);
    digitalWrite(lampu_kiri[7],LOW);
 }
 delay(150);
   for(int row=0;row<3;row++) {
    delay(50);
    digitalWrite(lampu_kanan[0],HIGH);
    digitalWrite(lampu_kanan[1],HIGH);
    digitalWrite(lampu_kanan[2],HIGH);
    digitalWrite(lampu_kanan[3],HIGH);
    digitalWrite(lampu_kanan[4],HIGH);
    digitalWrite(lampu_kanan[5],HIGH);
    digitalWrite(lampu_kanan[6],HIGH);
    digitalWrite(lampu_kanan[7],HIGH);
    delay(50);
  digitalWrite(lampu_kanan[0],LOW);
  digitalWrite(lampu_kanan[1],LOW);
  digitalWrite(lampu_kanan[2],LOW);
  digitalWrite(lampu_kanan[3],LOW);
  digitalWrite(lampu_kanan[4],LOW);
  digitalWrite(lampu_kanan[5],LOW);
  digitalWrite(lampu_kanan[6],LOW);
  digitalWrite(lampu_kanan[7],LOW);
   }
delay(150);
}

void mode3(){
for(int i = 0; i<= 7; i++){
    digitalWrite(lampu_kiri[i],HIGH);
    delay(50);
  }

  for(int i = 7; i >= 0; i--){
    digitalWrite(lampu_kanan[i],HIGH);
    delay(50);
  }

   for(int i = 0; i<= 7; i++){
    digitalWrite(lampu_kiri[i],LOW);
    delay(50);
  }

  for(int i = 7; i >= 0; i--){
    digitalWrite(lampu_kanan[i],LOW);
    delay(50);
  } 
  delay(100);
}

void mode4(){
for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[i],HIGH);
    digitalWrite(lampu_kanan[i],HIGH);
    delay(50);
}

  for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[i],LOW);
    digitalWrite(lampu_kanan[i],LOW);
    delay(50);
  }
}

void mode5(){
//hidup
   digitalWrite(lampu_kiri[3],HIGH);
   digitalWrite(lampu_kiri[4],HIGH);
   digitalWrite(lampu_kanan[3],HIGH);
   digitalWrite(lampu_kanan[4],HIGH);
   delay(50);
   digitalWrite(lampu_kiri[2],HIGH);
   digitalWrite(lampu_kiri[5],HIGH);
   digitalWrite(lampu_kanan[2],HIGH);
   digitalWrite(lampu_kanan[5],HIGH);
   delay(50);
   digitalWrite(lampu_kiri[1],HIGH);
   digitalWrite(lampu_kiri[6],HIGH);
   digitalWrite(lampu_kanan[1],HIGH);
   digitalWrite(lampu_kanan[6],HIGH);
   delay(50);
   digitalWrite(lampu_kiri[0],HIGH);
   digitalWrite(lampu_kiri[7],HIGH);
   digitalWrite(lampu_kanan[0],HIGH);
   digitalWrite(lampu_kanan[7],HIGH);
   delay(50);
  //mati
   digitalWrite(lampu_kiri[3],LOW);
   digitalWrite(lampu_kiri[4],LOW);
   digitalWrite(lampu_kanan[3],LOW);
   digitalWrite(lampu_kanan[4],LOW);
   delay(50);
   digitalWrite(lampu_kiri[2],LOW);
   digitalWrite(lampu_kiri[5],LOW);
   digitalWrite(lampu_kanan[2],LOW);
   digitalWrite(lampu_kanan[5],LOW);
   delay(50);
   digitalWrite(lampu_kiri[1],LOW);
   digitalWrite(lampu_kiri[6],LOW);
   digitalWrite(lampu_kanan[1],LOW);
   digitalWrite(lampu_kanan[6],LOW);
   delay(50);
   digitalWrite(lampu_kiri[0],LOW);
   digitalWrite(lampu_kiri[7],LOW);
   digitalWrite(lampu_kanan[0],LOW);
   digitalWrite(lampu_kanan[7],LOW);
   delay(50); 
}

void mode6(){
for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[0+i],HIGH);
    digitalWrite(lampu_kanan[7-i],HIGH);
    delay(50);
   }
    for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[0+i],LOW);
    digitalWrite(lampu_kanan[7-i],LOW);
    delay(50);
    } 
}

void mode7(){
for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[7-i],HIGH);
    digitalWrite(lampu_kanan[0+i],HIGH);
    delay(50);
   }
    for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[7-i],LOW);
    digitalWrite(lampu_kanan[0+i],LOW);
    delay(50);
    }
}

void mode8(){

for(int i = 0; i <= 7; i++){
  digitalWrite(lampu_kiri[i],HIGH);
  digitalWrite(lampu_kanan[i],HIGH);
}

for(int i = 0; i <= 7; i++){
  digitalWrite(lampu_kiri[i],LOW);
  digitalWrite(lampu_kanan[i],LOW);
  delay(70);
  digitalWrite(lampu_kiri[i],HIGH);
  digitalWrite(lampu_kanan[i],HIGH);
}


}

void mode9(){
   for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[i],HIGH);
    digitalWrite(lampu_kanan[i],HIGH);
    delay(50);
    digitalWrite(lampu_kiri[i],LOW);
    digitalWrite(lampu_kanan[i],LOW);
  }

   for(int i = 7; i >= 0; i--){
    digitalWrite(lampu_kiri[i],HIGH);
    digitalWrite(lampu_kanan[i],HIGH);
    delay(50);
    digitalWrite(lampu_kiri[i],LOW);
    digitalWrite(lampu_kanan[i],LOW);
  }
  delay(100);
//stepp
  for(int i = 0; i <= 7; i++){
    digitalWrite(lampu_kiri[0+i],HIGH);
    digitalWrite(lampu_kiri[7-i],HIGH);
    digitalWrite(lampu_kanan[0+i],HIGH);
    digitalWrite(lampu_kanan[7-i],HIGH);
    delay(50);
    digitalWrite(lampu_kiri[0+i],LOW);
    digitalWrite(lampu_kiri[7-i],LOW);
    digitalWrite(lampu_kanan[0+i],LOW);
    digitalWrite(lampu_kanan[7-i],LOW);
   }

    for(int i = 7; i >= 0; i--){
    digitalWrite(lampu_kiri[7-i],HIGH);
    digitalWrite(lampu_kiri[0+i],HIGH);
    digitalWrite(lampu_kanan[7-i],HIGH);
    digitalWrite(lampu_kanan[0+i],HIGH);
    delay(50);
    digitalWrite(lampu_kiri[7-i],LOW);
    digitalWrite(lampu_kiri[0+i],LOW);
    digitalWrite(lampu_kanan[7-i],LOW);
    digitalWrite(lampu_kanan[0+i],LOW);
   }

   delay(100);
//step

  //0 2 4 6 = 1
  //1 3 5 7 = 2
  for(int i = 0; i <= 3; i++){
    digitalWrite(lampu_kiri[0],HIGH);
    digitalWrite(lampu_kiri[1],LOW);
    digitalWrite(lampu_kiri[2],HIGH);
    digitalWrite(lampu_kiri[3],LOW);
    digitalWrite(lampu_kiri[4],HIGH);
    digitalWrite(lampu_kiri[5],LOW);
    digitalWrite(lampu_kiri[6],HIGH);
    digitalWrite(lampu_kiri[7],LOW);
    digitalWrite(lampu_kanan[0],HIGH);
    digitalWrite(lampu_kanan[1],LOW);
    digitalWrite(lampu_kanan[2],HIGH);
    digitalWrite(lampu_kanan[3],LOW);
    digitalWrite(lampu_kanan[4],HIGH);
    digitalWrite(lampu_kanan[5],LOW);
    digitalWrite(lampu_kanan[6],HIGH);
    digitalWrite(lampu_kanan[7],LOW);
    delay(100);
    digitalWrite(lampu_kiri[0],LOW);
    digitalWrite(lampu_kiri[1],HIGH);
    digitalWrite(lampu_kiri[2],LOW);
    digitalWrite(lampu_kiri[3],HIGH);
    digitalWrite(lampu_kiri[4],LOW);
    digitalWrite(lampu_kiri[5],HIGH);
    digitalWrite(lampu_kiri[6],LOW);
    digitalWrite(lampu_kiri[7],HIGH);
    digitalWrite(lampu_kanan[0],LOW);
    digitalWrite(lampu_kanan[1],HIGH);
    digitalWrite(lampu_kanan[2],LOW);
    digitalWrite(lampu_kanan[3],HIGH);
    digitalWrite(lampu_kanan[4],LOW);
    digitalWrite(lampu_kanan[5],HIGH);
    digitalWrite(lampu_kanan[6],LOW);
    digitalWrite(lampu_kanan[7],HIGH);
    delay(100);
  }
delay(100);
//step
for(int i = 0; i <= 7; i++){
  digitalWrite(lampu_kiri[i],HIGH);
  digitalWrite(lampu_kanan[i],HIGH);
}

for(int i = 0; i <= 7; i++){
  digitalWrite(lampu_kiri[i],LOW);
  digitalWrite(lampu_kanan[i],LOW);
  delay(50);
  digitalWrite(lampu_kiri[i],HIGH);
  digitalWrite(lampu_kanan[i],HIGH);
}

for(int i = 7; i >= 0; i--){
  digitalWrite(lampu_kiri[i],LOW);
  digitalWrite(lampu_kanan[i],LOW);
  delay(50);
  digitalWrite(lampu_kiri[i],HIGH);
  digitalWrite(lampu_kanan[i],HIGH);
}
delay(100);
//stepp

   for(int i = 0; i <= 7; i++){
  digitalWrite(lampu_kiri[i],LOW);
  digitalWrite(lampu_kanan[i],LOW);
   }
   
   
   for(int i = 0; i <= 3; i++){
    digitalWrite(lampu_kiri[0+i],HIGH);
    digitalWrite(lampu_kiri[7-i],HIGH);
    digitalWrite(lampu_kanan[0+i],HIGH);
    digitalWrite(lampu_kanan[7-i],HIGH);
    delay(150);
   }
   delay(100);
   
//STEPP
for(int i = 0; i <= 3; i++){
    digitalWrite(lampu_kiri[0],HIGH);
    digitalWrite(lampu_kiri[1],HIGH);
    digitalWrite(lampu_kiri[2],HIGH);
    digitalWrite(lampu_kiri[3],HIGH);
    digitalWrite(lampu_kiri[4],HIGH);
    digitalWrite(lampu_kiri[5],HIGH);
    digitalWrite(lampu_kiri[6],HIGH);
    digitalWrite(lampu_kiri[7],HIGH);
    digitalWrite(lampu_kanan[0],HIGH);
    digitalWrite(lampu_kanan[1],HIGH);
    digitalWrite(lampu_kanan[2],HIGH);
    digitalWrite(lampu_kanan[3],HIGH);
    digitalWrite(lampu_kanan[4],HIGH);
    digitalWrite(lampu_kanan[5],HIGH);
    digitalWrite(lampu_kanan[6],HIGH);
    digitalWrite(lampu_kanan[7],HIGH);
    delay(100);
    digitalWrite(lampu_kiri[0],LOW);
    digitalWrite(lampu_kiri[1],LOW);
    digitalWrite(lampu_kiri[2],LOW);
    digitalWrite(lampu_kiri[3],LOW);
    digitalWrite(lampu_kiri[4],LOW);
    digitalWrite(lampu_kiri[5],LOW);
    digitalWrite(lampu_kiri[6],LOW);
    digitalWrite(lampu_kiri[7],LOW);
    digitalWrite(lampu_kanan[0],LOW);
    digitalWrite(lampu_kanan[1],LOW);
    digitalWrite(lampu_kanan[2],LOW);
    digitalWrite(lampu_kanan[3],LOW);
    digitalWrite(lampu_kanan[4],LOW);
    digitalWrite(lampu_kanan[5],LOW);
    digitalWrite(lampu_kanan[6],LOW);
    digitalWrite(lampu_kanan[7],LOW);
    delay(100);
}

}
