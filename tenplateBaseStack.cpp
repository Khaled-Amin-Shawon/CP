#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a=new T [1];
        array_cap=1;
        stack_size=0;
    }
    void increase_size()
    {
        T *temp;
        temp =new T[array_cap*2];
        for (int i = 0; i < array_cap*2; i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;
        array_cap=array_cap*2;
    }
    void push(T val)
    {
        if (stack_size+1>array_cap)
        {
           increase_size();
        }
        stack_size=stack_size+1;
        a[stack_size-1]=val;
    }
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
       
        stack_size=stack_size-1;
    }
    T top()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};

int main()
{
    cout<<"For int type"<<endl;
    Stack<int>st;
    st.push(6);
    st.push(8);
    st.push(1);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl<<endl;

    cout<<"For char type"<<endl;
    Stack<char>st2;
    st2.push('h');
    st2.push('i');
    st2.push('e');
    cout<<st2.top()<<endl;

    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl<<endl;

    cout<<"For real number"<<endl;
    Stack<double>st3;
    st3.push(425.4);
    st3.push(589.9);
    st3.push(85.8);
    cout<<st3.top()<<endl;

    st3.pop();
    cout<<st3.top()<<endl;
    st3.pop();
    cout<<st3.top()<<endl;
    st3.pop();
    cout<<st3.top()<<endl;
    return 0;
}
