from tkinter import * 
import tkinter.messagebox


root = Tk()
root.title('My gui')
root.geometry('500x500')

# can choose only one choice
def showcommand():
    choice=language.get()
    if choice==1:
        tkinter.messagebox.showinfo('แจ้งเตือน','เลือก python')
    elif choice==2:
        tkinter.messagebox.showinfo('แจ้งเตือน','เลือก java')
    elif choice==3:
        tkinter.messagebox.showinfo('แจ้งเตือน','เลือก php')
    else:
        tkinter.messagebox.showinfo('แจ้งเตือน','เลือก C#')


language = IntVar()

Radiobutton(text='Python',variable=language,value = 1,command=showcommand).grid(row=0,column=0)
Radiobutton(text='Java',variable=language,value = 2,command=showcommand).grid(row=0,column=1)
Radiobutton(text='PHP',variable=language,value = 3,command=showcommand).grid(row=0,column=2)
Radiobutton(text='CS',variable=language,value = 4,command=showcommand).grid(row=0,column=3)

root.mainloop()