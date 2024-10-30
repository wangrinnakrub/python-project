from tkinter import *

root = Tk()
root.title('My Gui')
root.geometry('500x500+100+100')

Label(root, text='Hello', fg='red', bg='black', font=30).pack()

 
def show_message():
    message = txt.get()
    print(message)
    Label(text=message, fg='red', bg='black', font=30).pack()

def openMywindow():
    # second screen
    mywindow = Tk()
    mywindow.title('My window')
    mywindow.geometry('300x300+800+200')

    Label(mywindow, text='Hello', fg='red',bg='black', font=30).pack()


txt = StringVar()
mytxt = Entry(root, textvariable=txt).pack()

bt1 = Button(text='แสดงข้อความ', fg='white',bg='red', command=show_message).pack()
bt2 = Button(text='เปิด My window', fg='white', bg='grey',command=openMywindow).pack()


root.mainloop()
