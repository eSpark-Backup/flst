int button = 14 ; // MCUIN_1 SNS1
//int button = 15 ; // MCUIN_2 SNS2
//int button = 0 ; // MCUIN_3 SNS3
//int button = 1 ; // MCUIN_4 SNS4
//int button = 8 ; // MCUIN_5 S3_IO

int LED = 2; // MCUOUT_1 SOL1
int LED2 = 3; // MCUOUT_2 SOL2
int LED3 = 4; // MCUOUT_3 SOL3
int LED4 = 5; // MCUOUT_4 SOL4
void setup () {
   Serial.begin(9600);
   pinMode(button , INPUT_PULLUP);
   pinMode(LED , OUTPUT);
   pinMode(LED2 , OUTPUT);
   pinMode(LED3 , OUTPUT);
   pinMode(LED4 , OUTPUT); 
}

void loop () {
 
  int buttonState = digitalRead(button);
  
  Serial.println(buttonState);
   if (buttonState == LOW)
   {
    Serial.println("low is Button");
      digitalWrite(LED,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      
      delay(5000);
      digitalWrite(LED,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);

      delay(5000);
   }
}
