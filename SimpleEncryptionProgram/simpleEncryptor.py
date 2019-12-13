#Team Members: Keren Angeles and Kimlong Seng
def encrypt(text):
    result = []
    for letter in text:
        l = ord(letter) - 42069
        result.append(l)
    print("This is your encrypted message: ")

    for numbers in result:
        print(numbers, end='')
        print("", end='')
    decrypt(result)

def decrypt(result):
    end_string = ""

    for numbers in result:
        l = int(numbers)
        l = l + 42069
        l = chr(l)
        end_string = end_string + l
    print("\nYour decrypted text is: ")
    print(end_string)

def main():
    t = input("Input a text to be encrypted: ")
    encrypt(t)

if __name__ == '__main__':
    main()
