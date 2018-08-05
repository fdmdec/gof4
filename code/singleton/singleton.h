#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_
class Builder;
class Director
{
public:
第 27 页 共 171 页 k_eckel
设计模式精解－GoF 23 种设计模式解析附 C++实现源码 http://www.mscenter.edu.cn/blog/k_eckel
Director(Builder* bld);
~Director();
void Construct();
protected:
private:
Builder* _bld;
};
#endif //~_DIRECTOR_H_