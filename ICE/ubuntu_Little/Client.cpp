#include <Ice/Ice.h>
#include <Printer.h>
#include <iostream>
	
using namespace std;
using namespace Demo;

int main(int argc, char * argv[])
{
	int status = 0;
	Ice::CommunicatorPtr ic;
	try {
		ic = Ice::initialize(argc, argv);
		//调用 Ice::initialize 初始化 Ice run time

		//调用通信器的 stringToProxy创建一个代理,所用参数是 " SimplePrinter:default -p 10000 "
		//这个串包含的是对象标识和服务器所用的端口号
		//获取远地打印机的代理
//		Ice::ObjectPrx base = ic->stringToProxy("SimplePrinter:default -p 10000");
		Ice::ObjectPrx base = ic->stringToProxy("SimplePrinter:tcp -h 192.168.51.183 -p 10000");
		// stringToProxy 返回的代理的类型是 Ice::ObjectPrx,这种类型位于接口和类的继承树的根部
		//但要实际与我们的打印机交谈，我们需要的是 Printer 接口、而不是 Object 接口的代理

//为此,需要调用 PrinterPrx::checkedCast 进行向下转换.这个方法会发送一条消息给服务器,实际询问 “这是 Printer 接口的代理吗?”
//如果是,这个调用就会返回 Printer 的一个代理;如果代理代表的是其他类型的接口,这个调用就会返回一个空代理.
		PrinterPrx printer = PrinterPrx::checkedCast(base);
		
		if (!printer)
			throw "Invalid proxy";
		//printer->printString("Hello World!", 10); 
		printer->printString("Hello World!",false,123,1234567,1.23,12345.678911);
	} catch (const Ice::Exception & ex) {
		cerr << ex << endl;
		status = 1;
	} catch (const char * msg) {
		cerr << msg << endl;
		status = 1;
	}
	if (ic)
		ic->destroy();
	return status;
}

