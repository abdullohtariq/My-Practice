from plates import is_valid

def test_numbers():
    # Valid
    assert is_valid("CS") == True
    assert is_valid("CS5") == True
    assert is_valid("CS50") == True
    assert is_valid("CS550") == True
    assert is_valid("CS5500") == True
    assert is_valid("1S5500") == False
    assert is_valid("C55500") == False

    # Invalid (letters after numbers)
    assert is_valid("CSP50Y") == False
    assert is_valid("CSPY5A") == False

def test_zero():
    assert is_valid("IAM50") == True
    assert is_valid("CS05") == False
    assert is_valid("CS0") == False

def test_lenght():
    assert is_valid("A") == False
    assert is_valid("ABC1234") == False
    assert is_valid("ABC123") == True

def test_lower():
    assert is_valid("abc123") == True
    assert is_valid("ab12") == True

def test_PuNC():
    assert is_valid("CS!!") == False
    assert is_valid("CS,12") == False
