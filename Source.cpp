#include<iostream>
class A
{
public:
	int data;
	int fun (int key);
	A() {}
	~A(){}

private:

};

int A::fun(int key)
{
	std::cout << "fun(" << key << ")from A \n";
	data = key;
	std::cout << "data=" << data << "\n";
	return 0;
}
class B :virtual public A
{
public:
	int fun1(int key);

};
int B:: fun1(int key) {
	fun(5 * key);
	std::cout << "fun1(" << key << ")from B \n";
	data = key;
	std::cout << "data=" << data << "\n";
	return 0;
}
class C :virtual public A
{
public:
	int fun1(int key);
};
int C::fun1(int key) {
	
	fun(3 * key);
	std::cout << "fun1(" << key << ")from C \n";
	data = key;
	std::cout << "data=" << data << "\n";
	return 0;
}
class D: public B,  public C
{
public:
	
	B::fun1;


};
int main()
{
	D MyD;
	
	MyD.fun1(2);
	system("pause");
	return 0;

}
