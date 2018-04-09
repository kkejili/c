class student:
	def _init_(self,xuehao,name,age,sex):
		self.name = name
		self.age = age
		self.sex = sex
	

if __name__ == "__main__":
	student1 = student()
	student1.name = 'lil'
	student1.age = 22
	student1.xuehao = 20180211
	student1.sex = 'nan'

	print("student1.xuehao:%d"%student1.xuehao)
	print("student1.name:%s"%student1.name)
	print("student1.age:%d"%student1.age)
	print("student1.sex:%s"%student1.sex)