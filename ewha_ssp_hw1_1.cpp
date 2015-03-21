/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by Rin Kang
 * Mar 21, 2015
 *
 */

// Add #define pre-processor below

 
void setup() {
  //Add your code of Lab Assignment #1
  pinMode(FRONT_LED_PIN, OUTPUT);
  pinMode(REAR_LED_PIN, OUTPUT);
}

void loop() {
  //Add your code of Lab Assignment #1  
  digitalWrite(FRONT_LED_PIN,HIGH);
  digitalWrite(REAR_LED_PIN,LOW);
  delay(1000);
  digitalWrite(FRONT_LED_PIN,LOW);
  digitalWrite(REAR_LED_PIN,HIGH);
  delay(1000);
}
