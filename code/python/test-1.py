pizza = {
        'crust':'thick',
        'toppings' : ['mushroom','chesse'],
        }
#print(pizza.values())
pizza["toppings"].append('apple')
#print(pizza.values())
#print(pizza["toppings"])
for name , topping in pizza.items():
    print(name)
    print(type(topping))
    if type(topping) is list:
        for t in topping:
            print(t)
    else:
        print(topping)
