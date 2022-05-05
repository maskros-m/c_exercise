#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
import math

def quadratic(a, b, c):
    """Compute the solution to a quadratic equation."""
    d = b**2 - 4*a*c
    d2 = math.sqrt(abs(d))
    
    if d > 0:
        x1 = (-b + d2)/(2*a)
        x2 = (-b - d2)/(2*a)
        return x1, x2
    elif d == 0:
        x = -b/(2*a)
        return x
    else:
        x1 = complex(-b, d2)/(2*a)
        x2 = complex(-b, -d2)/(2*a)
        return x1, x2
