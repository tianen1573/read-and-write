##### typedef/模板/auto

typedef 需要 确定的类型， 而模板只是声明， 在编译阶段才会生成确定类型的 类/函数

~~~C++
template<class T1, class T2 ...>
typedef class C1
{
    //....
};
//这种写法是错误的， typedef 与 类模板 都是在编译阶段确定类型，模板确定类型后会由编译器构造出一个模板类，模板类具有确定的类型。
//虽然已经向类模板传递了具体的类型， 但这条语句 typedef在类模板实例化之前， typedef看不到具体的类型
template<class T1, class T2 ...>
class C1
{
    typedef T1 t1;
    //....
};
//这种写法被允许， 因为typedef执行时， 该模板类得到了具体的参数，typedef执行在编译器构造的模板类中
~~~

**typedef能否和模板结合使用， 取决于两种的语句顺序**

**模板<>不允许使用auto：`add<auto>(a1,a2);//err`**

------

##### 日期转换成星期

~~~
+---------------------+
蔡勒公式：随便给一个日期，直接算出是星期几。
w=y+⌊y/4⌋+⌊c/4⌋−2c+⌊26(m+1)/10⌋+d−1
w=y+⌊y/4⌋+⌊c/4⌋−2c+⌊26(m+1)/10⌋+d−1
w为星期，c为世纪的前两位，y为年后两位，m为月，d为日。
其中m大于等于3，小于等于14，某年的1,2月要看成上一年的十三月，十四月来计算。
蔡勒公式甚至还能算到公元前，比如公元前1世纪，就令c=-1，以此类推。
+----------------------+
吉姆拉尔森公式：随便给一个日期，也能直接算出星期几
w=d+2m+⌊3(m+1)/5⌋+y+⌊y/4⌋−⌊y/100⌋+⌊y/400⌋+1
吉姆拉尔森公式代码写起来更短，因为不需要用到世纪。直接给出正常的年月日就行。
算出来w=0为星期天，w=1为星期一，以此类推
~~~

------

##### 日期之间隔几天

[借助Zeller公式编写高效简洁代码 (C/C++/Java/Python) - 日期之间隔几天 - 力扣（LeetCode）](https://leetcode.cn/problems/number-of-days-between-two-dates/solution/cyu-yan-0ms-14xing-jian-ji-dai-ma-jie-zhu-zellergo/)

------

##### 矩阵求重合面积

```c++
int Coverage(ans p, ans q)
{
    /*左边取大x，右边取小x；上边取小y，下边取大y, 不重合则为负*/
    int X = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int Y = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
    
    return X * Y;
}
```

------

##### 位运算--大小写转换

![image-20221031140959985](%E5%9B%BE%E7%89%87/README/image-20221031140959985.png)