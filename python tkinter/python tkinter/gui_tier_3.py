from tkinter import *

root  = Tk()
root.title('แหนม')

#show text in the screen
mylabel1 = Label(text='แหนม').pack()
mylabel2 = Label(text='ปีศาจ',fg='red',bg='black',font=30).pack()
# .pack() function for starter pack set the text to center
# fg = foreground , bg = background

mylabel3 = Label(root,text='ปีศาจ',fg='red',bg='black',font=30).pack()
# if you have many window you should assign the window name to the front 

Label(root,text='ปีศาจ',fg='red',bg='black',font=30).pack()
# can create the label without variable if you don't use it after ะ้รห
root.geometry('500x400+20+40')
root.mainloop()

