from tkinter import *
root = Tk()
root.title('แหนม')
root.geometry('500x500')

# create menu
mymenu = Menu()
root.config(menu=mymenu)

# add main menu
mymenu.add_cascade(label='Menu1')
mymenu.add_cascade(label='Menu2')
mymenu.add_cascade(label='Menu3')

root.mainloop()