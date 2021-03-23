template <typename T,typename C>
class CompoundT<T C::*> {
public:
	enum {
		IsPtrT = 0,
		IsRefT = 0,
		IsArrayT = 0,
		IsFuncT = 0,
		IsPtrMemT = 1
	};
	typedef T BaseT;
	typedef typename CompoundT<T>::BottomT BottomT;
	typedef C ClassT;
};