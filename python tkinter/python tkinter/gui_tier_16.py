from tkinter import * 
import tkinter.messagebox

root = Tk()
root.title('My gui')
root.geometry('500x500')




def showchoice():
    if language1.get() == 1:
        Label(text='คุณเลือกภาษา python').pack(anchor=W)
    if language2.get() == 1:
        Label(text='คุณเลือกภาษา java').pack(anchor=W)
    if language3.get() == 1:
        Label(text='คุณเลือกภาษา C#').pack(anchor=W)
    if language4.get() == 1:
        Label(text='คุณเลือกภาษา php').pack(anchor=W)



# choose more than one choice
language1 = IntVar()
Checkbutton(text='python',variable=language1).pack(anchor=W)

language2 = IntVar()
Checkbutton(text='java',variable=language2).pack(anchor=W)

language3 = IntVar()
Checkbutton(text='C#',variable=language3).pack(anchor=W)

language4 = IntVar()
Checkbutton(text='php',variable=language4).pack(anchor=W)

Button(text='แสดงตัวเลือก',command=showchoice).pack(anchor=W)
root.mainloop()