    /*
    Adafruit Arduino - Lesson 6. Inputs
    */
     
    int ledPin = 4;
    int buttonApin = 0;
    int buttonBpin = 2;
 int buttonCpin = 3;
 
    byte leds = 0;
     
    void setup()
    {
      pinMode(ledPin, OUTPUT);
      pinMode(buttonApin, INPUT_PULLUP); 
      pinMode(buttonBpin, INPUT_PULLUP); 
    pinMode(buttonCpin, INPUT_PULLUP); 

    }
     
    void loop()
    {
      if (digitalRead(buttonApin) == LOW)
      {
        delay(1000);      // This line delays turing on the LED by 1 second (1000 milliseconds)
        digitalWrite(ledPin, HIGH);
      }
      
     if (digitalRead(buttonCpin) == LOW)
    {
      delay(10000);      // This line delays turing on the LED by 10 second (1000 milliseconds)
       digitalWrite(ledPin, HIGH);
    }
      if (digitalRead(buttonBpin) == LOW)
      {
        digitalWrite(ledPin, LOW);
      }
    }
