const int IR1 = 2;
const int IR2 = 3;
const int IR3 = 4;
const int IR4 = 5;
const int IR5 = 6;


void sendBluetoothNotification(const char *message) {
  Serial.println(message); 
}

void setup() {
  Serial.begin(9600); 
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);
  pinMode(IR5, INPUT);



  sendBluetoothNotification("HC-05 Connected ✅");
}

void loop() {
  if (digitalRead(IR1) == LOW) {
    sendBluetoothNotification("Sir needs help!");

  } 
  else if (digitalRead(IR2) == LOW) {
    sendBluetoothNotification("Sir needs water.");

  } 
  else if (digitalRead(IR3) == LOW) {
    sendBluetoothNotification("Sir needs food.");

  } 
  else if (digitalRead(IR4) == LOW) {
    sendBluetoothNotification("Sir needs assistance.");
 
  } 
  else if (digitalRead(IR5) == LOW) {
    sendBluetoothNotification("Sir needs medication.");
    
  }
}
