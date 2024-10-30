from tkinter import *
root = Tk()
root.title('โปรแกรมคำนวณพื้นที่วงกลม')


def a():
    print('ฟังก์ชั่น a : ')

Label(text='รัศมี',font=30).grid(row=0,sticky=W)
radius = IntVar()
et1 = Entry(textvariable=radius)
et1.grid(row=0,column=1)


Label(text='พื้นที่',font=30).grid(row=1,sticky=W)
et2 = Entry()
et2.grid(row=1,column=1)

def calculate():
    rd = radius.get()
    area = 3.14*rd*rd
    et2.insert(0,area)

    

def delete():
    et1.delete(0,END)
    et2.delete(0,END)

btn1 = Button(text='คำนวณ',command=calculate).grid(row=2,column=1,sticky=W)
btn1 = Button(text='ล้าง',command=delete).grid(row=2,column=1,sticky=E)



root.geometry('600x600')
root.mainloop()