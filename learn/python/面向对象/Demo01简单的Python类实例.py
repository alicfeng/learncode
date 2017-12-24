#!/usr/bin/python
# coding=utf-8
class Employee:
    '所有员工的基类'
    empCount = 0

    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.empCount += 1

    def __del__(self):
        class_name = self.__class__.__name__
        print class_name + "删除"

    def display_count(self):
        print "Total Employee %d" % Employee.empCount

    def display_employee(self):
        print "Name : ", self.name, ", Salary: ", self.salary


# 创建 Employee 类的第一个对象
emp1 = Employee("Alic", 2000)
# "创建 Employee 类的第二个对象"
emp2 = Employee("嘿嘿", 5000)

emp1.display_count()
emp2.display_employee()

print "总雇佣数量:", Employee.empCount

emp1.age = 7  # 添加一个 'age' 属性
emp1.age = 8  # 修改 'age' 属性
print "age:", emp1.age
del emp1.age  # 删除 'age' 属性

emp1.age = 7
print hasattr(emp1, 'age')  # 如果存在 'age' 属性返回 True。
print getattr(emp1, 'age')  # 返回 'age' 属性的值
print setattr(emp1, 'age', 8)  # 添加属性 'age' 值为 8
print delattr(emp1, 'age')  # 删除属性 'age'

print "Employee.__doc__:", Employee.__doc__
print "Employee.__name__:", Employee.__name__
print "Employee.__module__:", Employee.__module__
print "Employee.__bases__:", Employee.__bases__
print "Employee.__dict__:", Employee.__dict__

# 体现python垃圾回收机制 与java类似 对象池
e1 = Employee("alic", 2000)
e2 = e1
e3 = e1
print id(e1)
print id(e2)
print id(e3)

# delete
del e1
del e2
del e3
