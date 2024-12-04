# Decimal to Binary
def dec_to_bin(dec):
    result = ''
    while dec != 0:
        rem = dec % 2
        dec //= 2
        result = str(rem) + result
    return result

# Decimal to Hexadecimal
def dec_to_hex(dec):
    result = []
    while dec != 0:
        rem = dec % 16
        dec //= 16
        result.append(rem)
    result = result[::-1]

    for idx, chunk in enumerate(result):
        if chunk >= 10: 
            # 65 is A in ascii table
            result[idx] = chr(result[idx] % 10 + 65)
    
    return '0x'+''.join(result)

# Decimal to Octal
def dec_to_oct(dec):
    result = ''
    while dec != 0:
        rem = dec % 8
        dec //= 8
        result = str(rem) + result
    return result