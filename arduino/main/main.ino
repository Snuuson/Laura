

const int DELAY = 1;

const String COLORS[8] = {"RED","GREEN","BLUE","YELLOW","PURPLE","PINK","BLACK","ORANGE"};
int colorIndex = 0;

char t = 0b00000010;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  buttonSetup(7);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(isButtonPressed()){
    //Serial.println("button was pressed");
    changeColor();
    string();
    } 
   outputColor();
}

void binary(){
  Serial.write(t);
   t = t + 1;
   }
   
void string(){
  sendCommand("command", "changeColor", "blue,red,green");
  }
