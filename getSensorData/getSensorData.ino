const int LED_BLUE = 6;
const int LED_WHITE = 4;
const int FOTORESISTOR_MAIN = A0;

int Massive_data_foto_main[20];

//?? function
GetSizeArray

int data_foto_main = 0;

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
  Serial.begin(9600);

  //??init array
  for( i<)
}

void loop() {
  data_foto_main = analogRead(A0);
  Serial.println(data_foto_main);
  delay(500);
  //?? led indicate of start receive data
  //??process getting data and put it in array
  //?? led indicate of stop receive data
  //?? Serial.println all data in massive to user interface. One time.
  //?? stop receive data
  
}
