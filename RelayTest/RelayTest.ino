<<<<<<< HEAD
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. 6 is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 6 as an output.
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // pinMode(6, OUTPUT);
  // pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int delay_time = 2000;
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  // for ( int i = 4; i <=5; i++) {
  //   digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  //   delay(delay_time);                      // wait for a second
  //   digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW
  //   delay(delay_time);    
  // }
}
=======
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. 6 is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 6 as an output.
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // pinMode(6, OUTPUT);
  // pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int delay_time = 2000;
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  // for ( int i = 4; i <=5; i++) {
  //   digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  //   delay(delay_time);                      // wait for a second
  //   digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW
  //   delay(delay_time);    
  // }
}
>>>>>>> 889aea2d9e4a65a27b8ad4d884df2dd088c5b590
