from tkinter import *
import time
import random

#parametry_wielkosci_widocznego_obrazu_podczas_rozgrywki
root = Tk()
root.title("Simple Arkanoid Game Game")
root.geometry("500x700")
root.resizable(0, 0)
root.wm_attributes("-topmost", 1)
root.wm_attributes("-topmost", 1)
canvas = Canvas(root, width=500, height=500, bd=0, highlightthickness=0, highlightbackground="Red", bg="white")
canvas.pack(padx=10, pady=10)
score = Label(height=50, width=80, text="Score: 00", font="Arial 14 bold")
score.pack(side="left")
root.update()