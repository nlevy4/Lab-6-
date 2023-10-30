def menu():
    print('Menu')
    print('-------------')
    print('1. Encode')
    print('2. Decode')
    print('3. Quit')

# Nicholas Levy encode function
def encode(user_password):
    new_string = ''
    for i in user_password:
        i = int(i)
        i += 3
        if i >= 10:
            i -= 10
        new_string += str(i)
    return new_string
    
def decoded_pass(decode_pass):
    pass_list = [int(x) for x in str(decode_pass)]
    decoded_list = [x - 3 for x in pass_list]
    decoded_list_str = map(str, decoded_list)
    decoded_password = ''.join(decoded_list_str)
    return decoded_password

def main():
    while True:
        menu()
        option = int(input("Please enter an option: "))

        if option == 1:
            user_password  = (input('Please enter your password to encode: '))
            encoded_password = encode(user_password)
            print('Your password has been encoded and stored!')
        if option ==2 
            print(f'The encoded password is {encoded_password} and the original is {decoded_password(encoded_password)}.)

        if option == 3:
            break





if __name__ == '__main__':
    main()



