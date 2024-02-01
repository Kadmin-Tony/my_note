#include <chrono>
#include <iostream>
#include <thread>
using namespace std;
using namespace std::chrono;

int main()
{
    // 时间点的创建、计算及输出
    // system_clock::now()的精度或者说单位取决于系统时钟的分辨率，这可能是纳秒、微秒、毫秒等
    // 可使用duration_cast转换单位
    time_point<system_clock> a = system_clock::now();
    this_thread::sleep_for(microseconds(1));
    time_point<system_clock> b = system_clock::now();
    cout << (b - a).count() << endl;

    // using nanoseconds  = duration<long long, nano>;
    // using microseconds = duration<long long, micro>;
    // using milliseconds = duration<long long, milli>;
    // using seconds      = duration<long long>;
    // using minutes      = duration<int, ratio<60>>;
    // using hours        = duration<int, ratio<3600>>;
    // using atto  = ratio<1, 1000000000000000000LL>;
    // using femto = ratio<1, 1000000000000000LL>;
    // using pico  = ratio<1, 1000000000000LL>;
    // using nano  = ratio<1, 1000000000>;
    // using micro = ratio<1, 1000000>;
    // using milli = ratio<1, 1000>;
    // using centi = ratio<1, 100>;
    // using deci  = ratio<1, 10>;
    // using deca  = ratio<10, 1>;
    // using hecto = ratio<100, 1>;
    // using kilo  = ratio<1000, 1>;
    // using mega  = ratio<1000000, 1>;
    // using giga  = ratio<1000000000, 1>;
    // using tera  = ratio<1000000000000LL, 1>;
    // using peta  = ratio<1000000000000000LL, 1>;
    // using exa   = ratio<1000000000000000000LL, 1>;

    // 持续时间
    duration<int> thirty_seconds(30);
    duration<int, std::ratio<60>> one_minute(1);
    auto one_hour = 1h;
    auto one_minutes = 1min;
    auto one_seconds = 1s;
    auto five_milliseconds = 5ms;
    // 不同单位的加减会转换为后者的单位
    cout << (one_minutes * 2 + one_hour).count() << endl;

    // 转换单位
    minutes min = duration_cast<std::chrono::minutes>(one_hour);

    system("pause");
}