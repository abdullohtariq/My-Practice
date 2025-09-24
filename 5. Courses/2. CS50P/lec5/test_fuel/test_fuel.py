from fuel import convert, gauge


import pytest
from fuel import convert, gauge


def test_convert_valid():
    assert convert("1/2") == 50
    assert convert("3/4") == 75
    assert convert("99/100") == 99
    assert convert("1/100") == 1


def test_convert_errors():
    with pytest.raises(ValueError):
        convert("3/2")          # x > y
    with pytest.raises(ValueError):
        convert("cat/dog")      # not integers
    with pytest.raises(ZeroDivisionError):
        convert("1/0")          # division by zero


def test_gauge_edges():
    assert gauge(0) == "E"
    assert gauge(1) == "E"
    assert gauge(99) == "F"
    assert gauge(100) == "F"


def test_gauge_middle():
    assert gauge(50) == "50%"
    assert gauge(75) == "75%"

def test_convert_negatives():
    with pytest.raises(ValueError):
        convert("-1/2")
    with pytest.raises(ValueError):
        convert("1/-2")
    with pytest.raises(ValueError):
        convert("-1/-2")


