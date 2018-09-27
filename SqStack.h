template<class ElemType>
class SqStack{
	public:
		SqStack(int m);
		~SqStack();
		void Clear();
		bool Empty() const;
		int Length() const;
		ElemType & Top() const;
		void Push(const ElemType &e);
		void Pop();
		private:
		ElemType *m_base;
		int m_top;
		int m_size;
		 
};
template<class ElemType>
SqStack <ElemType>::SqStack(int m){
m_top=0;
m_base=new ElemType(m);
m_size=m;
}//栈初始化 
template<class ElemType>
SqStack<ElmeType>::~SqStack()
{ 
	if(m_size!=NULL)delete[] m_base; 
}//销毁栈 
template<class ElemType>
void SqStack<ElemType>::Clear() 
{
	m_top=0;
}//清空栈 
template<class ElemType>
void SqStack<ElemType>::Empty() const
{
	return m_top==0;
}//判空栈 
template<class ElemType>
void SqStack<ElemType>::Length() const 
{
	return m_top;
}//返回栈长 
template<class ElemType>
ElemType & SqStack<ElemType>::Top() const
{
	return m_base[top-1];
}// 返回栈首元素 
template<class ElemType>
void SqStack<ElemType>::Push(const ElemType &e) 
{
	if(m_top>=m_size){
		ElemType *newbase;
		newbase=new ElemType[m_size+10];
		for(int j=0;j<m_top;j++)
		newbase[j]=m_base[j];
		delete[] m_base;
		m_base=newbase;
		m_size +=10;	
	}
	m_size[m_top++]=0;
}//入栈 
template<class ElemType>
void SqStack<ElemType>::Pop() {
	m_top--;
}//出栈 
