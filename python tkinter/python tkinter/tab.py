import tkinter as tk
from tkinter import ttk

def select_tab1():
    notebook.select(tab1)

def select_tab2():
    notebook.select(tab2)

def select_tab3():
    notebook.select(tab3)

# สร้างหน้าต่างหลัก
window = tk.Tk()
window.title("Tabbed Interface with Menu")
window.geometry("400x300")

# สร้าง Notebook สำหรับแท็บ
notebook = ttk.Notebook(window)
notebook.pack(expand=True, fill='both')

# สร้างแท็บต่างๆ
tab1 = ttk.Frame(notebook)
tab2 = ttk.Frame(notebook)
tab3 = ttk.Frame(notebook)

notebook.add(tab1, text='Tab 1')
notebook.add(tab2, text='Tab 2')
notebook.add(tab3, text='Tab 3')

# ใส่เนื้อหาลงในแต่ละแท็บ
label1 = tk.Label(tab1, text="This is Tab 1")
label1.pack(pady=20)

label2 = tk.Label(tab2, text="This is Tab 2")
label2.pack(pady=20)

label3 = tk.Label(tab3, text="This is Tab 3")
label3.pack(pady=20)

# สร้างเมนูหลัก
menu_bar = tk.Menu(window)

# สร้างเมนูย่อยสำหรับ "Tabs"
tabs_menu = tk.Menu(menu_bar, tearoff=0)
tabs_menu.add_command(label="Tab 1", command=select_tab1)
tabs_menu.add_command(label="Tab 2", command=select_tab2)
tabs_menu.add_command(label="Tab 3", command=select_tab3)

# เพิ่มเมนู "Tabs" ลงในเมนูหลัก
menu_bar.add_cascade(label="Tabs", menu=tabs_menu)

# ตั้งค่าเมนูหลักให้กับหน้าต่าง
window.config(menu=menu_bar)

# รันโปรแกรม
window.mainloop()
