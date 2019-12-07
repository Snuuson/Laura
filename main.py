import serial
import keyboard
from colormap import COLOR_MAP,LED_MAP
#Test

#More testing

def printColors(colorList):
		for color in colorList:
				print(color)

def execute(data):
		if data:
				data =  data.decode('ascii').split(" ")
				if data[0] == "command":
						if data[1] == "changeColor":
								if data[2]:
										keyboard.pressKey('a')

with serial.Serial('COM5', 9600, timeout=.1) as arduino:
	while True:
			data = arduino.readline()
			execute(data)

			"""
			data = arduino.read() #the last bit gets rid of the new-line chars
			if data:
					led = data[0] >> 4
					color = data[0] & 0b00000011
					print(LED_MAP[led][COLOR_MAP[color]])"""



"""class Reciever{
	public:
		String a[4];
		Reciever(String a[4]){

			}
		void print(){
			Serial.println(this->a[4]);
			}
	};"""