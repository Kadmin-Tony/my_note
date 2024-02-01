import urllib.parse

# 编码
quote = urllib.parse.quote("你好, 世界")
print(quote)

# 解码
quote = urllib.parse.unquote(quote)
# 如果传进正常文字，则直接返回
q = urllib.parse.unquote("你好, 世界")
print(quote, q)