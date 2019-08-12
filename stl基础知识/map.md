红黑树：
    
    1.节点是红色或黑色。
    2.根节点是黑色。
    3.每个叶子节点都是黑色的空节点（NIL节点）。
    4 每个红色节点的两个子节点都是黑色。(从每个叶子到根的所有路径上不能有两个连续的红色节点)
    5.从任一节点到其每个叶子的所有路径都包含相同数目的黑色节点。
    
调整红黑树的方法：变色、旋转
    
    左旋转：逆时针旋转红黑树的两个节点，使得父节点被自己的右孩子取代，而自己成为自己的左孩子。
    ![左旋转](https://github.com/itsohorriblela/ccf-csp-diary/blob/master/images/左旋转.jpg)
    图中，身为右孩子的Y取代了X的位置，而X变成了自己的左孩子。此为左旋转。
    右旋转:顺时针旋转红黑树的两个节点，使得父节点被自己的左孩子取代，而自己成为自己的右孩子。
    ![右旋转](https://github.com/itsohorriblela/ccf-csp-diary/blob/master/images/右旋转.jpg)
    图中，身为左孩子的Y取代了X的位置，而X变成了自己的右孩子。此为右旋转。



map的创建

    std::map<std::string, size_t> people;
    map<键,值> name;
    std::map<std::string, size_t> people{{"Ann", 25}, {"Bill", 46},{"Jack", 32},{"Jill", 32}};//初始化列表
    std::map<std::string, size_t> personnel {people}; // Duplicate people map
    std::map<std::string, size_t> personnel {std::begin(people),std::end(people)};//用开始迭代器和结束迭代器

插入数据
    
    crowd.insert({{"Bert", 44}, {"Ellen”, 99}});
    std::map<std:: string,size_t> people {std::make_pair ("Ann",25),std::make_pair("Bill",46) , std::make_pair ("Jack",32), std::make_pair("Jill",32)};
    auto pr = std::make_pair("Fred",22); //Create a pair element and insert it
    auto ret_pr = people.insert(pr);
    std::cout << ret_pr.first->first << " "<< ret_pr.first->second<< "" << std:: boolalpha <<ret_pr.second << "\n"; //输出 Fred 22 true

构造元素

    std::map<Name, size_t> people;
    auto pr = people.emplace (Name { "Dan","Druff"},77);

获取元素
 
    at()返回参数键对应的对象
    key = Name {"Dan”, ”Druff"};
    auto value = people.at(key);
    std:: cout << key << "is aged " << value << std:: endl;
    key = Name {"Don", "Druff"};
    value = people.at(key);
    std::cout << key << " is aged " << value << std::endl;
