@staticmethod
def f(a, b):
    print(a+b)


# type(class_name, class_parents, class_attributs)
Cl1 = type("Cl1", (), {"f": f}) 

c = Cl1()
c.f(1, 2)

