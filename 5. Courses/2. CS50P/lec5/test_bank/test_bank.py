from bank import value

def test_zero():
    assert value("hello, Brother how are you.") == 0
    assert value("Hello, sir how can i help you.") == 0

def test_twenty():
    assert value("hi, How is everyone 12") == 20
    assert value("Hi, u") == 20

def test_hundred():
    assert value("") == 100
    assert value("Salam!!") == 100
