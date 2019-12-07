void changeColor(){
  //Serial.println("Changed Color!");
  int newColorIndex = random(0, (sizeof(COLORS) / sizeof(COLORS[0])));
  if (colorIndex == newColorIndex){
      changeColor();    
   }else{
      colorIndex = newColorIndex;
      //Serial.println(colorIndex);
    }
  }

void outputColor(){
  if(millis()-previousTime >= DELAY*1000){
    //Serial.println(COLORS[colorIndex]);
    previousTime = millis();
    }
  }
