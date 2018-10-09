//参照サイト
//照度センサーの使い方 [Arduino]
//https://www.petitmonte.com/robot/howto_illuminance_sensor.html

int light = 8;
int led = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//サイト参照
  //pinMode(light,INPUT);//サイト参照
  // pinMode(led, OUTPUT);//LED点灯用
  }

void loop() {
  // put your main code here, to run repeatedly:
  //int val = digitalRead(light);//サイト参照
  int val = analogRead(7)//アナログ用
  Serial.println(val);//サイト参照

  ;

/*
  if(val == 1){//光を浴びない→LED消灯 光を浴びる→LED点灯
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  */
}
