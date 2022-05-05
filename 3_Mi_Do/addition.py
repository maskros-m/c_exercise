#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
"""
This module provides a function to sum all numbers from 0 up to a given integer.
"""


def sum_to(num):
    """
    Sum all numbers from 0 up to a given integer.

    Assert that no negative numbers are entered.
    """
    assert num >= 0
    total = 0
    for num in range(0, num+1, 1):
        total += num
    return total