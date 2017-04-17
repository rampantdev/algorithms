#code was leveraged from https://inventwithpython.com/chapter14.html  - great book, highly recommend reading it

MAX_KEY_SIZE = 26 #key used in the cipher must be no greater than 26

def decrypt_caesar(ciphertext, key):
    translated = ''
    if key < 1 or key > MAX_KEY_SIZE: #checking to make sure key is valid
        return "INVALID KEY.\n KEY MUST BE BETWEEN 1 and 26"

    for symbol in ciphertext:
        if symbol.isalpha():
            num = ord(symbol)
            num += key

            if symbol.isupper():
                if num > ord('Z'):
                    num -= 26
                elif num < ord('A'):
                    num += 26

            elif symbol.islower():
                if num > ord('z'):
                    num -= 26
                elif num < ord('a'):
                    num += 26

            translated += chr(num)
        else:
            translated += symbol

    return translated

ciphertext = ''

for key in range(1, MAX_KEY_SIZE):
    answer = decrypt_caesar(ciphertext, key)
    print(answer, "This is they key: ", key)
