stl基础知识

vector 头文件#include<vector>
vector<T> 容器是包含 T 类型元素的序列容器，vector<T> 容器的大小可以自动增长，从而可以包含任意数量的元素；因此类型参数 T 不再需要模板参数 N。只要元素个
数超出 vector 当前容量，就会自动分配更多的空间。只能在容器尾部高效地删除或添加元素。vector<T> 容器可以方便、灵活地代替数组。在大多数时候，都可以用
vector<T> 代替数组存放元素。只要能够意识到，vector<T> 在扩展容量，以及在序列内部删除或添加元素时会产生一些开销；但大多数情况下，代码不会明显变慢。
完美解决了菜鸡王少奇每次想定义 int n;cin>>n;int a[n];的问题。

    精简总结
    初始化 vector<int> name
    迭代器 vector<int>::iterator it
    访问 *iterator
         front()
         back()
    插入 push_back()
         inseter(iterator,元素)
    删除 iterator=erase(iterator)//必须有返回值


    //1.定义和初始化
    与stack初始化类似 
    vector<type> name  
    std::vector<double> values(20);    //默认初始化，初始值都为0
    std::vector<long> numbers(20, 99L); //将所有值都初始化为99L
    std::vector<unsigned int> primes {2u, 3u, 5u, 7u, 11u, 13u, 17u, 19u};//初始化列表
    vector<int> vec[100];    //每一个vec[i]是vector类型，vec[100]相当于一个二维数组。
    std::array<std :: string, 5> words {"one", "two","three", "four", "five"};
    std::vector<std::string> words_copy {std::begin(words) , std::end(words)};//用words来初始化words_copy
    
    //2.vector的容量与大小
    auto nElements = primes.size();//可用auto关键字方便保存大小和容量
![image](https://github.com/itsohorriblela/ccf-csp-diary/blob/master/images/valuesofvector.jpg)
    
    //3.访问元素
    values[0] = 3.14159;//像标准数组一样通过索引访问元素
    values.front() = 3.14159;
    values.back() = 2.71828;//成员函数 front() 和 back() 分別返回序列中第一个和最后一个元素的引用
    auto pData = values.data();//成员函数 data() 返回一个指向数组的指针，它在内部被用来存储元素。pData 是 type* 类型
    
    //4.插入元素
    copy();//迭代器？
    values.push_back(3.1415926);// push_back() 函数在序列末尾添加一个元素
    std::string str {"alleged"};
    words.emplace_back(str, 2, 3);//Create string object corresponding to "leg" in place构造函数会生成一个从索引 2 幵始、包含 str 中三个字符的子串。
    auto iter = words.emplace(++std::begin(words),5,'A');// Inserts string(5,'A') as 2nd element
    words.emplace(++iter, "$$$$");//Inserts string ("$$$$") as 3rd element
    auto iter = words.insert(++std::begin(words), "two");//在第一个元素后面插入two
    std:: string more[] {"five", "six", "seven" }; 
    iter = words.insert(--std::end(words) , std::begin(more), std::end(more));//在最后一个元素前插入more数组
    iter = words.insert(std::end(words), "ten");//在最后一个元素后插入ten
    iter = words.insert(std::cend(words)-1, 2, "nine");//在最后一个元素前插入两个“nine”元素
    
    //5.删除元素
    value.clear();//删除所有元素
    value.pop_back();//删除尾部元素
    auto iter = data.erase(std::begin(data)+1); //用erase()函数删除单个元素，此句删除第二个元素
    auto iter = data.erase(std::begin(data)+1,std::begin(data)+3);//用erase()函数删除第二个和第三个元素
    std::vector<std::string> words { "one", "none","some", "all”, "none", "most","many"};
    auto iter = std::remove(std::begin(words), std::end(words), "none");//通过移动被删除元素右边的元素来覆盖被删除元素以达到删除效果
    ![image](https://github.com/itsohorriblela/ccf-csp-diary/blob/master/images/remove().jpg)
    
