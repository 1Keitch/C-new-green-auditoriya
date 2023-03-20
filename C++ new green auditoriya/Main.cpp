#include <iostream>
#include <cstdlib>
#include <ctime>


void arr_add(int*& arr, int length, int num ) {
	if (num <= 0)
		return;
	int* tmp = new int[length + num]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;

}


//Динамическая память
//статическая память (стэк)
//динамическая память (куча)

//типы памяти

// статическая память, выделяется до отрктыия приложений
// динамическая - выделяется во время выполнениея программы
// 

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Динамические переменные

	/*
	int* pointer = new int; // выделение динамической памяти размером в 4 байта 
	delete pointer; // освобождение выделенной памяти
	*pointer = 7;    // запись значение в выделеную область памяти

	std::cout << "*pointer = " << *pointer << std::endl;

	*pointer = 100; //ошибка!


	pointer = new int;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer; // освобождение выделенной памяти
	*/

	//Динамические массивы
	
	//Отличия динамического массива от статического:
	//1. В качестве длины динамического массива может быть указана переменная:
	//2. с помощью специльных программных конструкция размер динамического массива может быть изменен:
	//3. Т.к статитческий массив находится в стеке: работа с ним происходит в разы быстрее
	//4. Элементы динамисеского массива необходимо очищать, чтобы не допускать утечки памяти

	/*
	int d_size;
	std::cout << "Введите длину массива - >:\n";
	std::cin >> d_size;

	int* d_arr = new int[d_size];

	std::cout << "Ввод данных в массив:\n";
	for (int i = 0; i < d_size; i++) {
		std::cout << "Введите " << i + 1 << "-й элемент -> ";
		std::cin >> d_arr[i];
	}
		std::cout << "Получившийся массив:\n[";
	for (int i = 0; i < d_size; i++)
		std::cout << d_arr[i] << ", ";
	std::cout << "\b\b]\n";
	

	delete[] d_arr;

	*/


	// Двухмерные динамические массивы
	/*
	int rows, cols;
	std::cout << "Введите высоту массива - >";
	std::cin >> rows;
	std::cout << "Введите ширину массива - >";
	std::cin >> cols;

	//int* mx = new int[rows], [cols]; //ошибка !!!!!!!!!!!!!!!!!!!!!!!!!!
	int **mx=new int*[rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];


	// Использование массива (так же как и с обычным)
	mx[0][0] = 10;
	for (int i = 0; i < rows; i++)
	delete[] mx[i];
	delete[] mx;
	*/

	//Задача 1 увеличение размера массива
	std::cout << "Задача 1. Введите размер массива  ->";
		int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];
	srand(time(NULL));
	std::cout << "Изначальный массив: \n";
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1; // [1...10]]
		std::cout << arr1[i] << ' ';

	}
	std::cout << std::endl;

	std::cout << "Введите кол-во доп. элементов -> ";
	std::cin >> n;
	arr_add(arr1, size1, n);
	size1 += n;

	std::cout << "Итоговый массв: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << std::endl;

	// move сематика


		return 0;
}