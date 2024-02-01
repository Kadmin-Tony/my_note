class Hello:

    def __init__(self, name:str) -> None :
        self.name = name
        print("ok")

    def say_hello(self):
        print(f"my name is{self.name}")

h = Hello("Python")
# 获取h的name属性，若没有则为Kadmin
print(getattr(h, "name", "Kadmin"))
h.say_hello()