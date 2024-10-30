from tkinter import *

root = Tk()
root.title('My Gui')

Label(text='Hello',fg='red',bg='black',font=30).pack()

def show_message():
    message = txt.get()
    print(message)
    Label(text=message,fg='red',bg='black',font=30).pack()


# textbox
txt = StringVar()
mytxxt = Entry(root,textvariable=txt).pack()

bt1 = Button(text='แสดงข้อความ',fg='white',bg='red',command=show_message).pack()
bt2 = Button(text='ยกเลิก',fg='white',bg='grey').pack()



root.geometry('500x500')
root.mainloop()