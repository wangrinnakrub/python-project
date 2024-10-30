from tkinter import *
root = Tk()
root.title('Data ENtry')

Label(text='ชื่อ').grid(row=0)
Label(text='นามสกุล').grid(row=1)
Label(text='เบอร์ติดต่อ').grid(row=2)

class a():
    pass


et1 = Entry()
et1.grid(row=0,column=1)
# insert text to entry box
et1.insert(0,'เนฟวี่')

et2 = Entry()
et2.grid(row=1,column=1)

et3 = Entry()
et3.grid(row=2,column=1)

# clear text in entry box
def delete():
    et1.delete(0,END)

    
btn = Button(text='ล้างข้อมูล',command=delete).grid(row=3,column=1)


root.mainloop()