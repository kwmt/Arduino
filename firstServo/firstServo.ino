#include <Servo.h>

Servo servo;//サーボのインスタンス

void setup(){
  //サーボの信号線を３番ピンに接続
  //（PWMピン以外のピンにも接続可）
  servo.attach(3);
}

void loop(){
  //センサの読み取り値
  int val=analogRead(0);
  //map()を使って0~1023のセンサ読取り値を0~180の角度に変換
  int deg=map(val,0,1023,0,180);
  //サーボ出力
  servo.write(deg);//0~180まで
}


