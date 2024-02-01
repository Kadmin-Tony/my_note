class Hello:

    """大家好,我是__doc__"""

    def __init__(self, name) -> None :
        self.name = name

    def __str__(self):
        return f"{self.name}调用了str方法"

    def __call__(self):
        print(f"{self.name}调用了call方法")

    def __del__(self):
        print("世界···拒绝了我···")

h = Hello(123)
h()
print(h)
print(h.__doc__)
