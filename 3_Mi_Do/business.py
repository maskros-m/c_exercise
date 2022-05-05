#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
"""This module offers simple functions for interest calculation."""

def interest(capital, rate, years=1, tax=0):
    assert 0 <= tax <= 1
    assert 0 <= rate <= 1
    if years - int(years) == 0:
        x = rate*(1-tax)
        terminal = capital*(1+x)**int(years)
        compound = round(terminal - capital, 2)
        return compound
    else:
        return 'years must be an integer'

def terminal_value(capital, rate, years=1, tax=0):
    assert 0 <= tax <= 1
    assert 0 <= rate <= 1
    if years - int(years) == 0:
        x = rate*(1-tax)
        terminal = round(capital*(1+x)**int(years), 2)
        return terminal
    else:
        return 'years must be an integer'