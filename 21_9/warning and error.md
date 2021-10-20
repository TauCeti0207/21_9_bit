# warning

1.解决 warning C4305:“初始化”:从“double”到“float”截断的问题

在 C 语言中，如果不指定数据类型，那么小数常量会被认为是 double 类型的。 
如：

~~~c
int main()
{
	float a = 100 / 24.0;
	float b = 100 / 24;
	printf("%f %f\n", a,b);
	return 0;
}
~~~

其中 a 是 float 类型的，但是 24.0 是 double 类型的，

由于它是常量，所以编译器称为 const double。double 是不能隐式转换为 float 的。
这时候可改成

~~~c
float a = 100 / 24.0f;
//或float a = 100 / 24.0F;
~~~



或者改为

~~~c
 double a = 100 / 24.0;
~~~

