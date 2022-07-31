#include "mbed.h"
#include "Motor.h"
#include "adrobo.h"

BusOut led(LED1,LED2,LED3,LED4);
Motor motor_left(MOTOR11,MOTOR12);
Motor motor_right(MOTOR21,MOTOR22);

int main() {
float i= 0.99f;
float k= 1.0f;
motor_left.setMaxRatio( 1.0 ); /* 初期設定が最大出力は25％か100％に設定*/
motor_right.setMaxRatio( 1.0 ); /* 初期設定が最大出力は25％か100％に設定*/
while(1) {
motor_left = i;
motor_right = k;
}
}
