"""
Saul Hennessy
CA 2

A shopping portal program with a user creation system, shopping basket and checkout
"""


class Customer:
    """
    This is a class for creating a customer profile.

    Attributes:
        firstname (str): User Firstname
        surname (str): User Surname
        age (int): User Age
        region (str): User region
    """

    def __init__(self, firstname, surname, age, region):
        """
        The constructor for the Customer class.

        Parameters:
            firstname (str): User Firstname
            surname (str): User Surname
            age (int): User Age
            region (str): User region
        """
        self.__firstname = firstname  # all private
        self.__surname = surname
        self.__age = age
        self.__region = region

    def __str__(self):
        return "FirstName:" + self.__firstname + "\nSurname:" + self.__surname + "\nAge:" + str(
            self.__age) + "\nRegion:" + self.__region + "\n"

    def get_age(self):
        """
        The function to return user Age.

        Returns:
            age: The user's age.
        """
        return self.__age

    def get_region(self):
        """
        The function to return user Region.

        Returns:
            region: The user's Region.
        """
        return self.__region

    def get_name(self):
        """
        The function to return user Name.

        Returns:
            firstname: The user's Name.
        """
        return self.__firstname


class Products:
    """
    This is a class for storing the product list.

    Attributes:
        ProductList
    """
    ProductList = [
        {
            'name': 'Car',
            'value': 15000,
            'region': 'EU',  # Region locks. EU = Europe, NA= North America etc
            'agelimit': 0,  # Age restriction
            'exclusive': 1,  # Exclusivity lock
            'pid': 1  # Product ID
        },
        {
            'name': 'Alcohol',
            'value': 10,
            'region': '',
            'agelimit': 1,
            'exclusive': 0,
            'pid': 2
        },
        {
            'name': 'Ambo',
            'value': 15,
            'region': '',
            'agelimit': 1,
            'exclusive': 0,
            'pid': 3
        },
        {
            'name': 'Chocolate',
            'value': 1,
            'region': '',
            'agelimit': 0,
            'exclusive': 0,
            'pid': 4
        },
        {
            'name': 'Toolbox',
            'value': 130,
            'region': 'NA',
            'agelimit': 0,
            'exclusive': 1,
            'pid': 5
        },
        {
            'name': 'Water',
            'value': 0.5,
            'region': '',
            'agelimit': 0,
            'exclusive': 0,
            'pid': 6
        },
        {
            'name': 'Bike',
            'value': 200,
            'region': 'EU',
            'agelimit': 0,
            'exclusive': 1,
            'pid': 7
        },
        {
            'name': 'Toyset',
            'value': 60,
            'region': 'AUS',
            'agelimit': 0,
            'exclusive': 0,
            'pid': 8
        },
        {
            'name': 'Lego',
            'value': 110,
            'region': 'NA',
            'agelimit': 0,
            'exclusive': 1,
            'pid': 9
        },
        {
            'name': 'Pen',
            'value': 2,
            'region': '',
            'agelimit': 0,
            'exclusive': 0,
            'pid': 10
        },
    ]


class Loyal(Customer):
    """
    This is a subclass for creating a Loyal customer profile.

    Attributes:
        firstname (str): User Firstname
        surname (str): User Surname
        age (int): User Age
        region (str): User region
        __exclusive (int): The user's exclusivity status
    """

    def __init__(self, firstname, surname, age, region):
        """
        The constructor for the Loyal Customer subclass.

        Parameters:
            firstname (str): User Firstname
            surname (str): User Surname
            age (int): User Age
            region (str): User region
        """
        self.__exclusive = 1  # 0: user cant get exclusives. 1: User can
        super().__init__(firstname, surname, age, region)

    def get_exclusive(self):
        """
        The function to return user exclusivity status.

        Returns:
            exclusive: The user's exclusivity status.
        """
        return self.__exclusive


class BargainHunter(Customer):
    """
    This is a subclass for creating a Bargain Hunter customer profile.

    Attributes:
        firstname (str): User Firstname
        surname (str): User Surname
        age (int): User Age
        region (str): User region
        __exclusive (int): The user's exclusivity status
    """

    def __init__(self, firstname, surname, age, region):
        """
        The constructor for the Bargain Hunter Customer subclass.

        Parameters:
            firstname (str): User Firstname
            surname (str): User Surname
            age (int): User Age
            region (str): User region
        """
        self.__exclusive = 0  # 0: user cant get exclusives. 1: User can
        super().__init__(firstname, surname, age, region)

    def get_exclusive(self):
        """
        The function to return user exclusivity status.

        Returns:
            exclusive: The user's exclusivity status.
        """
        return self.__exclusive


class ShoppingCart:
    """
    This is a class for creating the shopping cart.

    Attributes:
        cart (dict): The dictionary holding cart values
    """

    def __init__(self):
        """
        The constructor for the ShoppingCart class.
        """
        self.cart = {}
        for x in range(len(Products.ProductList)):  # loops the length of the product list and sets all to 0 in cart
            self.cart[x + 1] = 0

    def __str__(self):
        """
        The str function to return the value of the cart.

        Returns:
            cart: The current cart values.
        """
        print("Cart:")
        return str(self.cart)

    def cart_add(self, pid):
        """
        The function to add a product to the cart.

        Parameters:
            pid (int): The product ID
        """
        self.cart[pid] += 1

    def cart_rem(self, pid):
        """
        The function to remove a product from the cart.

        Parameters:
            pid (int): The product ID
        """
        self.cart[pid] -= 1

    def cart_get(self):
        """
        The function to return the cart.

        Returns:
            cart: The dictionary cart is returned.
        """
        return self.cart

    def cart_key(self, key):
        """
        The function to add a product to the cart.

        Parameters:
            key (int): The product ID being looked-up

        Returns:
            cart[PID]: The amount of item PID in the cart.
        """
        return self.cart[key]


def print_products(cust):
    """
    The function to print the list of products.

    This loops the length of the product list. It skips a line/product to be printed if one of the many requirements
    is not met

    Parameters:
        cust (class): The customer details
    """
    for x in range(len(Products.ProductList)):  # loops length of product list
        if cust.get_exclusive() == 0 and Products.ProductList[x]['exclusive'] == 1:  # checks exclusivity
            continue  # breaks loop if not met
        elif cust.get_age() < 18 and Products.ProductList[x]['agelimit'] == 1:  # checks age limit
            continue
        elif cust.get_region() != Products.ProductList[x]['region'] and Products.ProductList[x]['region'] != '':
            # checks user region against region lock, also checks for blank, meaning region free
            continue
        print("PID:", Products.ProductList[x]['pid'], Products.ProductList[x]['name'], "€",
              Products.ProductList[x]['value'])


def lock_check(cust, pid):
    """
    The function to check to see if a customer is eligable to purchase a product.

    Parameters:
        cust (class): The customer details
        pid (int): The product ID
    """
    pid -= 1
    if cust.get_exclusive() == 0 and Products.ProductList[pid]['exclusive'] == 1:  # checks exclusivity
        return 1  # 1 stops the item from being added
    elif cust.get_age() < 18 and Products.ProductList[pid]['agelimit'] == 1:  # checks age limit
        return 1
    elif cust.get_region() != Products.ProductList[pid]['region'] and Products.ProductList[pid]['region'] != '':
        # checks user region against region lock, also checks for blank, meaning region free
        return 1
    else:
        return 0  # 0 allows addition to the cart


def print_cart(cart):
    """
    The function to print the cart.

    Parameters:
        cart (dict): The cart details
    """
    total = 0
    for x in range(len(cart.cart_get())):  # loops length of cart
        if cart.cart_key(x + 1) != 0:  # makes sure the item has atleast 1 in the cart
            print(Products.ProductList[x]['name'], "€", Products.ProductList[x]['value'], "x", cart.cart_key(x + 1))
            total += Products.ProductList[x]['value'] * cart.cart_key(x + 1)  # adds total cost
    print("Total : €", total)


def test(cart):
    """
    The function to test the program.

    Skips tedious CLI for quick debugging and testing

    Parameters:
        cart (dict): The cart details
    """
    ans = input("1. Loyal\n2. Bargain\n")
    if ans == '1':
        ans = input("1. Over 18\n2. Under 18\n")
        if ans == '1':
            cust = Loyal('Test', 'User', 20, 'EU')  # sets user to 20yr old EU resident names Test User
        elif ans == '2':
            cust = Loyal('Test', 'User', 16,
                         'EU')  # sets user to 16yr old EU resident names Test User (fails age checks)
    elif ans == '2':
        ans = input("1. Over 18\n2. Under 18\n")
        if ans == '1':
            cust = BargainHunter('Test', 'User', 20, 'EU')
        elif ans == '2':
            cust = BargainHunter('Test', 'User', 16, 'EU')
    print(cust)  # prints customer information
    print_products(cust)  # prints the product list according to user restrictions
    print("Added Pen to basket")
    cart.cart_add(10)  # adds PID 10, a Pen, to the basket
    print_cart(cart)
    print("Added 2 Waters to basket")
    cart.cart_add(6)
    cart.cart_add(6)
    print_cart(cart)
    print("Removed Pen from basket")
    cart.cart_rem(10)
    print_cart(cart)
    print("Checkout Sequence:")
    print("Your Cart: ")
    print_cart(cart)
    print("Order confirmed! Thank you for shopping with us", cust.get_name(), "!")


def menu(flag, cust, cart):
    """
    The menu function, where the program spends most of its time

    Parameters:
        flag (int): The flag to track if the customer profile has been made
        cust (class): The customer details
        cart (dict): The cart details
    """
    ans = input("1. Create a customer\n2. List Products\n"
                "3. Add/remove a product to the shopping cart\n"
                "4. See current shopping cart\n5. Checkout\n")
    if ans == '1':  # Customer Creation
        if flag == 0:  # checks if flag has been tripped
            flag = 1  # trips flag when customer is created. Prevents reentry
            ans = input("Choose and option\n1. Loyal Customer\n2. Bargain Hunter\n")
            if ans == '1':
                firstname = input("Enter your firstname\n")
                surname = input("Enter your surname\n")
                age = int(input("Enter your age\n"))
                region = input("Enter your region (NA, EU, AUS etc)\n").upper()
                cust = Loyal(firstname, surname, age, region.upper())
            elif ans == '2':
                firstname = input("Enter your firstname\n")
                surname = input("Enter your surname\n")
                age = int(input("Enter your age\n"))
                region = input("Enter your region (NA, EU, AUS etc)\n").upper()
                cust = BargainHunter(firstname, surname, age, region.upper())
            else:
                print("Error! Please choose a valid option\n")
                flag = 0  # resets flag if customer errors out during selection
        else:
            print("Customer has already been created!\n")
            print(cust)

    elif ans == '2':  # List Products
        if flag != 0:  # checks if customer has been created
            print_products(cust)  # prints product list
        else:
            print("Error! Please create a customer first!\n")

    elif ans == '3':  # Add/Remove product
        if flag != 0:  # checks if customer has been created
            ans = input("1)Add to Cart\n2)Remove from Cart\n")
            print_products(cust)
            pid = int(input("Choose a product by its ID!\n"))
            if ans == '1':
                lock = lock_check(cust, pid)  # checks user eligibility to purchase item
                if lock == 0:
                    cart.cart_add(pid)
                else:
                    print("Error! Can only add items available to you\n")

            elif ans == '2':
                if cart.cart_key(pid) > 0:  # checks if item is present in cart
                    cart.cart_rem(pid)
                else:
                    print("Error! Can only remove items currently in the basket\n")
            else:
                print("Error! Please choose a valid option\n")
        else:
            print("Error! Please create a customer first!\n")

    elif ans == '4':  # See cart
        if flag != 0:  # checks if customer has been created
            print_cart(cart)
        else:
            print("Error! Please create a customer first!\n")

    elif ans == '5':  # Checkout
        if flag != 0:  # checks if customer has been created
            print("Your Cart: ")
            print_cart(cart)
            ans = input("Proceed to purchase? Y/N\n")
            if ans == 'y' or ans == 'Y':
                print("Order confirmed! Thank you for shopping with us", cust.get_name(), "!")
                raise SystemExit  # stops the program completely
        else:
            print("Error! Please create a customer first!\n")

    elif ans == '0':  # Hidden option for testing
        test(cart)  # calls test function
        raise SystemExit  # stops the program completely, ends after 1 pass of test
    else:
        print("Error! Please choose a valid option\n")
    return flag, cust, cart  # returns these 3 so the data is saved each loop


def main():
    """
    The main function
    """
    flag = 0  # sets flag in advance
    cust = ''  # sets cust
    cart = ShoppingCart()  # sets cart
    # These are set now so the return/pass loop of the menu function works on the first iteration
    while 1:  # infinite loop until end is explicitly called
        result = menu(flag, cust, cart)  # saves values returned from menu function
        flag = result[0]  # sets each value accordingly
        cust = result[1]
        cart = result[2]


if __name__ == '__main__':
    main()  # begins main sequence
