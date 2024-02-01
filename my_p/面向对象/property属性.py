class Me:

    def __init__(self):
        self.name = "Kadmin"
    
    @property
    def introduce(self):
        return "I am " + self.name

    @introduce.setter
    def introduce(self, name):
        self.name = name
    
    @introduce.deleter
    def introduce(self):
        print("sayounara...")


i = Me()

print(i.introduce)  # 无需括号进行调用

i.introduce = "kamisama"  # 调用@introduce.setter
print(i.introduce)

del i.introduce  # 调用@introduce.deleter
