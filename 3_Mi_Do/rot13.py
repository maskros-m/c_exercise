#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""

"""Functions to en-/decode a string using the rot13 algorithm."""
def encode(s):
    s1 = s.upper()
    s2 = [ord(i1) for i1 in s1]
    encoded = []
    for c in s2:
        if 65 <= c < 78:
            a1 = c+13
            encoded.append(chr(a1))
        elif 78 <=c <91:
            a2 = c-13
            encoded.append(chr(a2))
        else:
            encoded.append(chr(c))
    new_str = ''.join(str(n) for n in encoded)
    return new_str

# code reuse:
# def decode(text: str) -> str:
#    return encode(text) 
def decode(sd):
    sd1 = sd.upper()
    sd2 = [ord(i2) for i2 in sd1]
    decoded = []
    for t in sd2:
        if 65 <= t < 78:
            b1 = t+13
            decoded.append(chr(b1))
        elif 78 <=t <91:
            b2 = t-13
            decoded.append(chr(b2))
        else:
            decoded.append(chr(t))
    de_str = ''.join(str(x) for x in decoded)
    return de_str
