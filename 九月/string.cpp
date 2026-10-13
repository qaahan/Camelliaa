//#include<iostream>
//#include<string>
//using namespace std;
////string是一个类 封装了很多方法
//	//1.string的构造
//void test01()
//{
//	//默认构造  后面什么也没有
//	string str;
//	//字符串初始化
//	string  str1 = "hello world";
//	string s2(str1);
//	//拷贝构造
//	string s3(s2);
//	//初始化好多一样的字符
//	string s4(10, 'a');
//
//	cout << s2 << '\t' << s3 << '\t' << s4 << endl;
//
//
//}
//void test02() {
////string的赋值操作  一种用等号 一种用assign
//	string str1;
//	str1 = "hello world";
//
//	string str2 = str1;
//
//	string str3;
//	str3.assign("hell0");
//
//	string s5;
//	//这个5是啥意思 就是把hellooow这个字符串的前5个字符赋给s5
//	s5.assign("helloooow", 5);
//	
//	
//	string s6;
//	s6.assign(s5);
//
//	//输出七个a
//	string s7;
//	s7.assign(7, 'a');
//
//
//	cout << str1 << '\t' << str2 << '\t' << str3 << endl;
//	cout << s5 << '\t' << s6 << '\t' << s7 << endl;
//
//}
//void test03() {
//
//	//字符串的拼接 利用+= 可拼接字符串或者单个字符
//	string str1 = "我";
//	str1 += "aiaiaiaiai";
//	str1 += ';';
//	cout << str1 << endl;
//	string str2 = "duoifgyef";
//	str1 += str2;
//	cout << str1 << endl;
//
//	//利用成员函数append也可以追加就和assign一样
//	str1.append("xixixix");
//	//和赋值一样 拼接前几个
//	str1.append("xixwwwwww",5);
//	cout << str1 << endl;
//
//	str1.append(str2);
//	//这是什么意思 从str2的第0个位置 往后截3个
//	str1.append(str2,0,3);
//	//想截后面就从后面的第几个字符开始 这样就很灵活
//	str1.append(str2, 4, 3);
//
//
//
//
//}
//
//void test04() {
//	//string的查找和替换
//	string str1 = "abcde";
//	//find函数就是查找str1的子串有没有de这个东西 有的话就会返回这个子串开始的起始的下标
//	//注意这个下标是从0开始计数的 否则没有找到就会给你返回-1
//	int p=str1.find("de");
//	cout << p << endl;
//
//	//这个find和rfind有什么区别吗 find是从左往右查找 但是rfind是从右往左查找
//	//但是他们的返回值下标都是从左往右0123
//	p = str1.rfind("de");
//
//
//
//
//	//替换  意思是从str的第一个位置开始 把str的三个字符换成引号里面的东西
//	//注意就算今天引号里面有一万个字符 那也是插入一万个字符 把bcd删除
//	str1.replace(1, 3, "hdkycg");
//	//那么这个时候问题来了 
//	cout << str1 << endl;
//
//
//}
//
//
//void test05() {
//	//比较两个字符串是不是相等 用compare函数
//	string str1 = "xyducg";
//	string str2 = "zlihdlhhc";
//
//	//返回值是根据比较第一个不相同的字符的ASCII码的大小 大就返回1 小就返回-1 一样大就返回0
//	cout << str1.compare(str2) << endl;
//
//	//应用呢 可以匹配密码是不是一样
//}
//
//void test06() {
//
//	//获取  或者是说遍历每个字符串的每个字符 用【】 或者at函数
//	string str1 = "hello";
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << " " << endl;
//	}
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << " " << endl;
//	}
//
//	//同样这两种方式还可以修改
//	str1[1] = 'x';
//	cout << str1 << endl;
//	str1.at(1) = 'w';
//	cout << str1 << endl;
//
//}
//
//
//void test07() {
//	//删除和插入
//
//	//和前面是一样的 在str1的第一个位置插入后面的东西  和appened有点像 但是不忘记的是append最后还是追加在原来的字符串后面
//	string str1 = "hello";
//	str1.insert(1, "111");
//
//	cout << str1 << endl;
//
//	//从第一个位置开始 删除3个字符
//	str1.erase(1,3);
//	cout << str1 << endl;
//
//
// }
//
//
//void test08() {
//	//获取字符串里面的一个子串
//	string str1 = "hello";
//	//从第0个字符开始 截取几个字符
//	string sub=str1.substr(0, 3);
//
//	cout << sub << endl;
//
//	string email="hello@qq.com";
//	//要求是从邮箱地址里面找到用户名
//	int p=email.find("@");
//	string name = email.substr(0, p);
//	cout << name << endl;
//
//
//
//}
////int main() {
////	
////	//test01();
////	//test02();
////	test08();
////	return 0;
////
////
////
////}