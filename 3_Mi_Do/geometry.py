#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
from math import pi as pi
from math import hypot

"""Functions calculating characteristic numbers of geometric shapes."""

def perimeter_right_triangle(c1, c2):
    """
    Return the perimeter of a right triangle.

    `c1`, `c2`: catheti of the right triangle
    """
    assert c1 >= 0
    assert c2 >= 0
    periA = c1 + c2 + (c1**2 + c2**2)**0.5
    return periA

def area_right_triangle(c1, c2):
    """
    Return the area of a right triangle.

    `c1`, `c2`: catheti of the right triangle
    """
    assert c1 >= 0
    assert c2 >= 0
    a90 = c1*c2*0.5
    return a90

# TODO: Add and implement the remaining functions.

def perimeter_circle(r):
    """Return the perimeter of a circle with radius r."""
    assert r >= 0
    return r * 2 * pi



def area_circle(r):
    """Return the area of a circle with radius r."""
    assert r>= 0
    return r * r * pi



def surface_sphere(r):
    """Return the surface of a sphere with radius r."""
    assert r>= 0 
    return 4 * pi * r * r



def volume_sphere(r):
    """Return the volume of a sphere with radius r."""
    assert r >= 0
    return 4 / 3 * pi * r**3


def surface_cylinder(r, h):
    """Return the surface of a cylinder with radius r and height h."""
    assert r >= 0
    return 2 * r * r * pi + 2 * r * pi * h


def volume_cylinder(r, h):
    """Return the volume of a cylinder with radius r and height h."""
    assert r >= 0
    return r * r * pi * h



def surface_cone(r, h):
    """Return the surface of a right circular cone."""
    assert r >= 0
    return r * r * pi + r * pi * hypot(r, h)


def volume_cone(r, h):
    """Return the volume of a right circular cone."""
    assert r>= 0
    return r * r * pi * h / 3.0