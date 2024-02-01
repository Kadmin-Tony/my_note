<style>
    h1{
        text-align: center;
        color: red;
    }
    ul{
        list-style: disc;
    }
</style>

# Linux的root用户

1. `su [-] [user name]`
    * -是可选的，表示切换用户后是否加载环境变量
    * 普通用户进行切换需要输入密码,而root用户不需要
    * 用户默认为root
    * 切换用户后可用`exit`或`ctrl + d`返回上一用户

2. 