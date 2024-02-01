"""
    使用对象
    需包含__iter__与__next__
"""
class Me:
    def __init__(self):
        self.count = 0

    # 返回自身
    def __iter__(self):
        return self

    def __next__(self):
        self.count += 2
        if self.count > 20:
            raise StopIteration  # 使用StopIteration终止迭代
        return self.count

me = Me()
print(list(me))


