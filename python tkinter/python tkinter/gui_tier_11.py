from tkinter import *
import tkinter.messagebox

root = Tk()
root.title('Menu')
root.geometry('500x500')

mymenu = Menu()
root.config(menu=mymenu)

def showwindow():
    window = Tk()
    window.title('New window')
    window.geometry('200x200')
    window.mainloop()
# show message in program menu about
def aboutprogram():
    tkinter.messagebox.showinfo('title','message')

menuitem = Menu()
menuitem.add_command(label='New window',command=showwindow)
menuitem.add_command(label='Open')
menuitem.add_command(label='Save')
menuitem.add_command(label='About',command=aboutprogram)
menuitem.add_command(label='Exit')

mymenu.add_cascade(label='File',menu=menuitem)
mymenu.add_cascade(label='Edit')
mymenu.add_cascade(label='View')


root.mainloop()