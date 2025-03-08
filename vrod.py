def check_username (username) :
    my_charnumd = ["1","2","3","4","5","6","7","8","9","0"]
    my_charletd = ["a","b","c","d","e","f","g","h","i","j","k","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
    my_charsd = ["!","@","#","*","/","_"]
    for i in range(len(my_charnumd)) :
        if my_charnumd[i] in username :
            for j in range(len(my_charletd)) :
                if my_charletd[j] in username :
                    for k in range ( len (my_charsd)) :
                        if my_charsd[k] in username :
                            return username
                    else :
                        return False
            else :
                return False
    else :
        return False
    
        
def check_password (password) :
    my_charnumd = ["1","2","3","4","5","6","7","8","9","0"]
    my_charletd = ["a","b","c","d","e","f","g","h","i","j","k","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
    my_charsd = ["!","@","#","*","/","_"]
    if len(password) > 8 :
        for i in range(len(my_charnumd)) :
            if my_charnumd[i] in password :
                for j in range(len(my_charletd)) :
                    if my_charletd[j] in password :
                        for k in range ( len (my_charsd)) :
                            if my_charsd[k] in password :
                                return password
                        else :
                            return False
                else :
                    return False
        else :
            return False
    else :
        return False
    
def main():
    u = 'mobina123@#$'
    p = 'pass1234@#$'

    username = input ("enter your username :")
    password = input ("enter your password :")

    if check_username(username) and check_password(password):
        if username == u and password == p:
            print(f'uername and password ok')
        else:
            print(f'uername and password nok')
    else:
        print('no security')

