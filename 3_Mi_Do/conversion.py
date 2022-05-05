#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
"""
This module provides functions to convert between Celsius to Fahrenheit.
"""


def celsius2fahrenheit(celsius):
    """Convert a temperature given in Celsius to Fahrenheit."""
    fahrenheit = round(celsius*9/5 + 32, 2)
    return fahrenheit

def fahrenheit2celsius(fahrenheit):
    """Convert a temperature given in Fahrenheit to Celsius."""
    celsius1 = fahrenheit - 32
    return celsius1 / 1.8

