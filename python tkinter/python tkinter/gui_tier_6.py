from tkinter import *

root = Tk()
root.title('My Gui')

Label(text='Hello',fg='red',bg='black',font=30).pack()

# show text when click a button
def show_message():
    Label(text='Hello',fg='red',bg='black',font=30).pack()
    print('หวัดดีง้าบ')

bt1 = Button(text='แสดงข้อความ',fg='white',bg='red',command=show_message).pack()
bt2 = Button(text='ยกเลิก',fg='white',bg='grey').pack()



root.geometry('500x500')
root.mainloop()