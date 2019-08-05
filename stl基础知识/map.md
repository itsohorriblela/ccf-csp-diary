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
