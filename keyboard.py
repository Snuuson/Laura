from pynput.keyboard import Key, Controller
import time

keyboard = Controller()

# Press and release space

def pressKey(key):
	keyboard.press(key)
	time.sleep(0.05)
	keyboard.release(Key.tab)

def altTab(n):

	keyboard.press(Key.alt)
	for i in range(n):
		keyboard.release(Key.tab)
		keyboard.press(Key.tab)
	   
	keyboard.release(Key.alt)