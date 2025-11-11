import flet as ft

def main(page):
    page.title = "Counter"

    # This will display the current number
    counter_text = ft.Text("0")
    
    # Input field
    number_input = ft.TextField(label="Enter number", value="0", width=200)
    
    # Button click function
    def add_number(e):
        current = int(counter_text.value)
        add = int(number_input.value)
        counter_text.value = str(current + add)
        page.update()  # refresh the UI to show changes

    # Button
    add_button = ft.ElevatedButton("Add", on_click=add_number)

    # Add widgets to the page
    page.add(ft.Text("Please Add Your Number:"))
    page.add(number_input, add_button, counter_text)

ft.app(target=main)
