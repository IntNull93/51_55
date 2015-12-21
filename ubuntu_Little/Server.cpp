#include <Ice/Ice.h>
#include <Printer.h>
#include <iostream>

using namespace std;
using namespace Demo;

class PrinterI : public Printer {
public:
	virtual void printString(const ::std::string&, bool, ::Ice::Int, ::Ice::Long, ::Ice::Float, ::Ice::Double, const Ice::Current &);
	//virtual void printString(const string & s,bool b,int i,long l,float f,double d,const Ice::Current &);
};
//打印机 servant,其类型是 PrinterI
//printString 是纯虚方法,所以这个骨架类不能被实例化(按照惯例,我们用 I 后缀表示这个类实现了一个接口)
//printString 方法的实现很简单:它会简单地把它的串参数写到 stdout
void PrinterI::printString(const ::std::string& s, bool b, ::Ice::Int i, ::Ice::Long l, ::Ice::Float f, ::Ice::Double d, const Ice::Current &)
//void PrinterI::printString(const string & s, const int &t, const Ice::Current &)
//void PrinterI::printString(const string & s,bool b,int i,long l,float f,double d, const Ice::Current &)
{
	cout << s << endl;
    cout << b << endl;
	cout << i << endl;
	cout << l << endl;
	cout << f << endl;
	cout << d << endl;
}
//从PrinterI::printString 的定义你可以看到,Slice 编译器会为这个形参生成缺省的实参,所以在我们的实现中可以不使用它


int main(int argc, char* argv[])
{
	int status = 0;
	Ice::CommunicatorPtr ic;
	//status变量含有程序的退出状态,而类型为 Ice::Communicator 的 ic 变量含有 Ice run time 的主句柄.

	try {
		ic = Ice::initialize(argc, argv);
	//initialize 调用返回的是一个智能指针,指向一个 Ice::Communicator 对象,这个指针是 Ice run time 的主句柄

		Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("SimplePrinterAdapter", "default -p 10000");
//创建对象适配器.传入参数"SimplePrinterAdapter"(适配器名字)和"default -p 10000",适配器用缺省协议(TCP/IP)在端口 10000 处侦听到来的请求

		Ice::ObjectPtr object = new PrinterI;
	//服务器端 run time 已经初始化,我们实例化一个 PrinterI 对象,为 Printer 接口创建一个 servant

		adapter->add(object,ic->stringToIdentity("SimplePrinter"));
//调用适配器的add,告诉它有了一个新的servant;传给 add 的参数是我们刚才实例化的 servant,再加上一个标识符.
//"SimplePrinter"串是servant的名字

		adapter->activate();
	//调用适配器的 activate 方法激活适配器.一旦适配器被激活,服务器就会开始处理来自客户的请求
/*
适配器开始是在扣留(holding)状态创建的;这种做法在下面这样的情况下很有用:我们有多个 servant,它们共享同一个适配器,
而在所有 servant实例化之前我们不想处理请求
*/
		ic->waitForShutdown();
// waitForShutdown方法挂起发出调用的线程,直到服务器实现终止为止:或者是通过发出一个调用关闭 run time,或者是对某个信号作出响应


	//第一个处理器捕捉 Ice run time 可能抛出的所有异常
	} catch (const Ice::Exception & e) {
		cerr << e << endl;
		status = 1;
	//第二个处理器捕捉串常量
	} catch (const char * msg) {
		cerr << msg << endl;
		status = 1;
	}

	if (ic)//清理代码调用通信器的 destroy 方法,（前提是通信器进行过初始化）
		ic->destroy();
	//清理调用之所以在 try 块的外部,原因是:不管代码是正常终止,还是由于异常而终止,我们都必须确保 Ice run time 得以执行结束工作 

	return status;
}

