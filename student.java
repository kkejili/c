public class student
{
	String name;
	int age;
	String sex;
	int xuehao;
	void student(String name,int age,String sex,int xuehao)
	{
		name = name;
		age = age;
		sex = sex;
	}
	public static void main(String[] args)
	{
		student student1 = new student("lil",22,"nan",20180211);
		System.out.println("student.name%s",student1.name);
		System.out.println("student.age%d",student1.age);
		System.out.println("student.sex%s",student1.sex);
		System.out.println("student.xuehao%d",student1.xuehao);
	}
}
