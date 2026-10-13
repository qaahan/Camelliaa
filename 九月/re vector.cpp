#include<iostream>
#include<vector>
using namespace std;

	//vetor的特别之处在于 它不和数组一样是静态空间 而是有一个动态扩展的作用
	//动态扩展就是不是在原来的数组后面接着加新空间 而是在内存里面找更大的一份空间 
	//然后把原来的数据拷贝到新空间 最后把原来的空间释放掉

//遍历动态数组 需要迭代器 it可以理解为<>类型的指针
void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
			
	}
	cout << endl;
}


//默认构造无参数
void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		//往里面插入数据
		v1.push_back(i);
	}
	print(v1);

	//还可以利用区间的方式
	vector<int>v2(v1.begin(), v1.end());
	print(v2);


	//n个数字初始化  10个6
	vector<int>v(10, 6);
	print(v);


	//拷贝构造
	vector<int>v4(v);
	print(v4);

}



//赋值操作
void test02() {
	  
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		//往里面插入数据
		v1.push_back(i);
	}

	//等号赋值 直接等于
	vector<int>v2;
	v2 = v1;
	print(v2);


	//函数assign复制
	vector<int>v3;
	//前闭后开
	v3.assign(v1.begin(), v1.end());
	print(v3);



	//大小和容量 以及怎么改变大小
	if (!v1.empty())
	{

		cout << "容量:" << v1.capacity() << endl
			<< "大小:" << v1.size() << endl;
			//	<< "改变长度：" << v1.resize(15) << endl;

				//<< "改变长度：" << v1.resize(5) << endl;
			v1.resize(15);
			print(v1);
			v1.resize(5);
			print(v1);
//这边默认容量大于等于大小  resize如果比原来大 补0替代 比原来小 后面没有的size直接全部删了

	}
}
void test03() {
	//插入好热删除合集合集
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		//往里面插入数据 即尾插法
		v1.push_back(i);
	}
	//尾删
	v1.pop_back();
	print(v1);

	// 插入需要迭代器
	v1.insert(v1.begin(), 100);
	//插两个1004
	v1.insert(v1.begin(),2,1004);
	print(v1);



	//删除
	v1.erase(v1.begin());	
	print(v1);
//哦忘记一个事了 end是开区间取不到	v1.erase(v1.end());


	//清空
	v1.clear();

}
void test04() {
	//数据的存取
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		//往里面插入数据 即尾插法
		v1.push_back(i);
	}

	//和string一样 用中括号和at遍历访问元素
	for (int i = 0; i < 10; i++) {
		//往里面插入数据 即尾插法
		cout << v1.at(i)<<" ";
		cout << v1[i] << " ";
	}

	//获取第一个元素
	cout << "第一个元素值为：" << v1.front() << endl;
	cout << "最后一个元素值为：" << v1.back() << endl;



}
void test05() {

	//实现两个容器的互换
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		//往里面插入数据 即尾插法
		v1.push_back(i);
	}
	print(v1);

	vector<int>v2;
	for (int i = 10; i >0; i--) {
		//往里面插入数据 即尾插法
		v2.push_back(i);
	}
	print(v2);

	cout << "交换后：" << endl;
	v1.swap(v2);
	print(v1);
	print(v2);



	//可以收缩代码空间？

}














int main() {

	test05();
	return 0;


}