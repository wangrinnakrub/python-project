import tkinter as tk
from PIL import Image, ImageTk, ImageDraw

def create_rounded_button(width, height, radius, color):
    image = Image.new("RGBA", (width, height), (0, 0, 0, 0))
    draw = ImageDraw.Draw(image)
    draw.rounded_rectangle((0, 0, width, height), radius, fill=color)
    return ImageTk.PhotoImage(image)

root = tk.Tk()

button_image = create_rounded_button(150, 50, 20, "lightblue")
button = tk.Label(root, image=button_image)
button.pack(pady=20)

root.mainloop()
