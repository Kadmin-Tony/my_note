class Hello:

    def __init__(self, name) -> None :
        self.name = name
        self.__age = 18

    def __tell(self):
        print(self.__age)


h = Hello("123")
# __开头为私有，不可直接访问
h._Hello__tell()