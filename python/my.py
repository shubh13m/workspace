import random
import tkinter as tk
from tkinter import messagebox

# List of questions
questions = [
    "Would you rather have the ability to fly or be invisible?",
"Would you rather have the power to read minds or see the future?",
"Would you rather have a never-ending supply of your favorite food or drink?",
"Would you rather live in a world with magic or advanced technology?",
"Would you rather speak all languages or communicate with animals?"
]

# List to keep track of chosen question indices
chosen_indices = []

# Function to get a random question
def get_random_question():
    random_index = random.randint(0, len(questions) - 1)
    while random_index in chosen_indices:
        random_index = random.randint(0, len(questions) - 1)
    chosen_indices.append(random_index)
    return questions[random_index]

# Function to display question to user
def display_question():
    random_question = get_random_question()
    messagebox.showinfo("Random Question", random_question)

# Create Tkinter window
root = tk.Tk()
root.title("Random Question Picker")

# Create button to display random question
button = tk.Button(root, text="Get Random Question", command=display_question)
button.pack(padx=20, pady=20)

# Start Tkinter main loop
root.mainloop()