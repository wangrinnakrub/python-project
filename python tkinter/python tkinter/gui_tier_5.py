from tkinter import *

root = Tk()
root.title('My Gui')

Label(text='Hello',fg='red',bg='black',font=30).pack()

# create a button
bt1 = Button(text='บันทึก',fg='white',bg='red').pack()
bt2 = Button(text='ยกเลิก',fg='white',bg='grey').pack()

root.geometry('500x500')
root.mainloop()