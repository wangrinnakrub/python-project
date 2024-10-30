from tkinter import *

root = Tk()
root.title('My gui')

# set the position of the text
Label(text='Hello',fg='yellow',bg='black',font=30).place(x=20,y=40)
Label(text='Hello',fg='red',bg='black',font=30).grid(row=0,column=0)
# .place() set the position with x y axis
# .grid() set the position with row and column

root.geometry('500x500')
root.mainloop()  