# python服务器都需要WSGI协议
# 以下为WSGI接口

# application第一个参数为字典，第二个为函数引用
# 函数引用中传入header
# 其返回值为网页body

# 例：
def application(environ, start_response):
    start_response('200 OK', [('Content-Type', 'text/html')])
    return 'Hello World!'


# 实际代码
def application(env, start_response):
    file = env["PATH_INFO"]

    if file == "/index.py":
        body = "这是主页"
    else:
        body = 'Hello World! 你好'

    body = body.encode("utf-8")
    start_response('200 OK', [('Content-Type', 'text/html;charset=utf-8'),("Content-Length", str(len(body)))])

    return body
    