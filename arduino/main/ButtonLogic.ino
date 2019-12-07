

int buttonState = 1;
unsigned long previousTime = 0;

void buttonSetup(int buttonInput){
  pinMode(buttonInput,INPUT);
  colorIndex = 0;
  }

bool didButtonStateChange(){
    int newState = digitalRead(7);
  if(buttonState != newState){
      buttonState = newState;
      return true;
    }
    return false;
  }

bool isButtonPressed(){
  if (didButtonStateChange()){
    if(digitalRead(7) == 1){
      return true;
    }
    else if(digitalRead(7) == 0){
      return false;
    }
   }
  return false;
  }
