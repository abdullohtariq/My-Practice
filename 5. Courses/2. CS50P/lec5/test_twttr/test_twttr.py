from twttr import shorten

def test_lowcaps():
    assert shorten("abcde") == "bcd"
    assert shorten("ipo") == "p"

def test_upcaps():
    assert shorten("ABCDE") == "BCD"
    assert shorten("ICU") == "C"

def test_all():
    assert shorten("AEIOU") == ""
    assert shorten("aeiou") == ""

def test_noVowels():
    assert shorten("My psspsps") == "My psspsps"
    assert shorten("my czn crzy") == "my czn crzy"

def test_numbers():
    assert shorten("123") == "123"
    assert shorten("a123u") == "123"

def test_punuation():
    assert shorten("hye, my bf.") == "hy, my bf."
    assert shorten("hye, my gf.") == "hy, my gf."

