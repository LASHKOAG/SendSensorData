const int LED_BLUE = 6;
const int LED_WHITE = 4;
const int FOTORESISTOR_MAIN = A0;

void InitPin(){
  //Led for start-stop recive data
  pinMode(LED_BLUE, OUTPUT);
  
  //Led for indicate process Get data from sensor (write array)
  pinMode(LED_WHITE, OUTPUT);

  //Pin for getting data from fotoresistor
  pinMode(FOTORESISTOR_MAIN, INPUT);
}

void setup() {
  InitPin();
}

void loop() {
  // put your main code here, to run repeatedly:

}
