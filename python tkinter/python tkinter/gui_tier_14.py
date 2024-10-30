from tkinter import *
from tkinter.filedialog import *

root = Tk()
root.title('My Gui')
root.geometry('500x500')

# choose file
# ! not working now
def selectfile():
    files = askopenfile()
    fileopen = open(files,encoding='utf8')
    mylb = Label(text=files.read()).pack()


b = Button(text='เลือกไฟล์',command=selectfile).pack()
root.mainloop()