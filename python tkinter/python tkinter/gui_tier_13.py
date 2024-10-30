from tkinter import *
from tkinter.colorchooser import *

root = Tk()
root.title('My Gui')
root.geometry('500x500')

# choose color
def selectcolor():
    color = askcolor()
    mylb = Label(text='Hello',bg=color[1]).pack()

b = Button(text='เลือกสี',command=selectcolor).pack()
root.mainloop()