

#define BUTTON_PIN 22  
#define RELAY_PIN  18  

int relay_state = LOW;  
int button_state;       
int last_button_state;  

void setup() {
  Serial.begin(9600);    
//baud rate            
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  //resistor used to ansure a known state a signal [pullup means state on the is high, pulldown meansstate on the is low]
  pinMode(RELAY_PIN, OUTPUT);        

  button_state = digitalRead(BUTTON_PIN);
  //digitalRead check the state of the switch button
}

void loop() {
  button.loop()
  last_button_state = button_state;      
  button_state = digitalRead(BUTTON_PIN);   

  if (button.isPressed(){
    Serial.println("The button is pressed")
  }
  if (last_button_state == HIGH && button_state == LOW) {
    Serial.println("The button is pressed");

  
    relay_state = !relay_state;
    digitalWrite(RELAY_PIN, relay_state);
  }
}
