class Student
{
	String name;
	int age;
	String sex;
	int xuehao;

	void student(String name,int age,String sex,int xuehao)
	{
		this.name = name;
		this.age = age;
		this.sex = sex;
		this.xuehao = xuehao;
	}
public static void main(String[] args)
{
		Student student1 = new Student("lil",22,"nan",20180211);
		System.out.println(student1.age);
		System.out.println(student1.xuehao);
}
}
