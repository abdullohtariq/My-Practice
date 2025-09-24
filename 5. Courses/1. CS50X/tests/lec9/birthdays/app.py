import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///birthdays.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":

        # TODO: Add the user's entry into the database
        nameVar = request.form.get("name")
        anything = request.form.get("month")
        day = request.form.get("day")

        # check that all our entries are valid before sending the query
        if nameVar and anything and day:
            # SQL insert into query
            db.execute("INSERT INTO birthdays (name, day, month) VALUES (?, ?, ?)", nameVar, day, anything)

        return redirect("/")

    else: # this must be get, since only two "methods" have been defined for this route

        # TODO: Display the entries in the database on index.html
        # SQL select query
        liDct = db.execute("SELECT * FROM birthdays")

        # we can still print to the terminal! -> note we ALWAYS return a list of dictioanries from SELECT
        print(liDct)

        # render the template, passing in our list of dictionaries data
        return render_template("index.html", data = liDct)
