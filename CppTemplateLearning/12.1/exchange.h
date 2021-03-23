template<typename T>
class Array {
private:
	T* data;
public:
	Array()
	{

	}
	Array<T> operator =(Array<T> const& _a)
	{
		
	}
	void exchange_with(Array<T>* b)
	{
		T* tmp = data;
		data = b->data;
		b->data = tmp;
	}
	T& operator[](size_t k)
	{
		return data[k];
	}
};


template<typename T>
void exchange(Array<T>* a, Array<T>* b)
{
	T* p = &(*a)[0];
	T* q = &(*b)[0];
	for (size_t k = a->size(); k-- != 0;)
	{
		exchange(p++, q++);
	}
}