int a = 8;
int b = 9;
int c = 4;
int d = 3;
int e = 2;
int f = 7;
int g = 6;
int h = 5;

void setup(){
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(h, OUTPUT);
}

void OnAllSeg(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(h,HIGH);
}

void OffAllSeg(){
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);
}

void loop(){
setup(); 	//Установка пинов
int C=9;	//Отсчет от 9
Serial.begin(9600);
while(true){	//Вечный цикл
  delay(250);	//Пауза 1\4 сек
  C--;
    OffAllSeg(); // Выкл все сегменты
if (C<0){C=9;}else	//Если 0 то присваиваем 9
Serial.print("if C==");
Serial.print(C);
switch(C){	//Загораются сегменты равные переменной "C"
case 0:
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  break;
case 1:
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  break;
case 2:
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(g,HIGH);
    break;
case 3:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
      break;
case 4:
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
      break;
case 5:
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
      break;
case 6:
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
      break;
case 7:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
      break;
case 8:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
      break;
case 9:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
      break;
}
}
}
