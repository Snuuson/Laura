from pynput.keyboard import Key, Controller
import time

keyboard = Controller()

# Press and release space



def altTab(n):

    keyboard.press(Key.alt)
    for i in range(n):
        keyboard.release(Key.tab)
        keyboard.press(Key.tab)
        time.sleep(0.05)
    keyboard.release(Key.alt)