//
//  main.cpp
//  LabProj
//
//  Created by Дмитрий Петров on 02.02.2023.
//

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <initializer_list>
#include <utility>
#include <vector>
#include <map>






using namespace std;
//int main() {
//
//    int n,sum=2;
//    cout <<"N=";
//    cin >>n;
//    int s[134];
//    s[0]=1;
//    s[1]=1;
//    if (n<=0)
//
//    {
//
//        cout <<"ERROR. N must be greater than 0\n";
//        system("pause");
//        return 0;
//
//    }
//        else
//        cout <<"Fibonacci sequence:\n";
//        if (n==1)
//    {
//        cout <<n<<"\n"<<"Sum="<<n<<"\n";
//        system("pause");
//        return 0;
//
//    } else {
//
//        cout <<s[0]<<" "<<s[1]<<" ";
//        for (int i=2;i<n;i++)
//
//    {
//
//        s[i]=s[i-1]+s[i-2];
//        sum=sum+s[i];
//        cout <<s[i]<<" ";
//
//    }
//        {
//            cout <<"\n";
//            cout <<"Sum="<<sum<<"\n";
//            system("pause");
//            return 0;
//        }
//    }
//}

//int main()
//    {
//    double y,x;
//    int n, k=10, t;
//    double sn=0, se=0 , a=0.1, b=1, c;
//    x=0.1;
//    t=x;
//    c=x-((t^3)/3);
//    n=40;
//    while (x <= b)
//    {
//
//        y = atan(x);
//
//        for(int i=1;i<n;i++) {
//            sn+=atan(x);
//            t=x;
//            se+=c;
//            c=((-1^n)*((t^(2*n+1))/(2*n+1)));
//        }
//
//            cout<<"X="<<x<<"  ";
//            cout<<"SN="<<sn<<"  ";
//            cout<<"SE="<<se<<"  ";
//            cout<<"Y="<<y<<"\n";
//            x=x+(b-a)/k;
//
//        }
//        return 0;
//    }

///1

//int main() {
//
//    int input, target, temp;
//
//    srand(time(NULL));
//
//    cin>>input;
//
//    switch (input) {
//        case 1:
//            srand(time(NULL));
//            cout<<"Random seed \n";
//            break;
//        case 2:
//            srand(2);
//            cout<<"Seed 2 \n";
//            break;
//        case 3:
//            srand(3);
//            cout<<"Seed 3 \n";
//            break;
//        default:
//            break;
//    }
//
//    temp = rand()%100;
//    cout<<temp;
//
//}

///2

//void bubbleSort(int arr[], int n)
//{
//    int i, j;
//    bool flag;
//    for(i = 0; i < n; i++)
//    {
//        flag = false;
//        for(j = 0; j < n-i-1; j++)
//        {
//            if( arr[j] > arr[j+1])
//            {
//                swap(arr[j],arr[j+1]);
//                flag = true;
//            }
//        }
//        if(!flag)
//        {
//            break;
//        }
//    }
//}
//int main(int argv, char* argc[])
//{
//    int sizeOfArr;
//    cin>>sizeOfArr;
//    int arr[sizeOfArr];
//    for (int i = 0; i!=sizeOfArr; i++) {
//        cin>>arr[i];
//    }
//    int n = sizeof(arr)/sizeof(int);
//    cout<<"Unsorted Array :";
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;
//    bubbleSort(arr,n);
//    cout<<"Sorted Array :";
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//    return(0);
//}

///2

//int main() {
//    int sizeOfArr;
//    cin>>sizeOfArr;
//    int array[sizeOfArr];
//
//    for (int i = 0; i!=sizeOfArr;i++) {
//        cin>>array[i];
//    }
//
//    int k=0, reverse[sizeOfArr];
//
//    for(int i=sizeOfArr-1; i>=0; ){
//        reverse[k++] = array[i--];
//    }
//
//    for(int i=0; i<sizeOfArr; i++){
//        cout << reverse[i] <<", ";
//    }
//
//    return 0;
//}

///3

//int main() {
//    int sizeOfArr;
//    cin>>sizeOfArr;
//    int array[sizeOfArr];
//
//    for (int i = 0; i!=sizeOfArr;i++) {
//        cin>>array[i];
//    }
//
//    int k=0, reverse[sizeOfArr];
//
//    for(int i=sizeOfArr-1; i>=0; ){
//        reverse[k++] = array[i--];
//    }
//
//    for(int i=0; i<sizeOfArr; i++){
//        cout << reverse[i] <<", ";
//    }
//
//    return 0;
//}

///4

//int main() {
//    int sizeOfArr;
//    cin>>sizeOfArr;
//    int point;
//    cin>>point;
//    int array[sizeOfArr];
//
//    for (int i = 0; i!=sizeOfArr;i++) {
//        cin>>array[i];
//    }
//
//    int k=0, reverse[sizeOfArr];
//
//    for(int i=sizeOfArr-1; i>=0; ){
//        reverse[k++] = array[i--];
//    }
//    for(int i=0; i<point; i++){
//        cout << array[i] <<", ";
//    }
//    int pointer = sizeOfArr -= point;
//
//    for(int i=0; i<pointer;i++) {
//        cout << reverse[i] <<", ";
//    }
//
//    return 0;
//}

///Сортировка вставкой

//int main()
//{
//    int size;
//    cin>>size;
//    int arr[size];
//    for(int i = 0; i!=size;i++) {
//        cin>>arr[i];
//    }
//    int i = 0,j = 0;
//    int buff = 0;
//    for (i = 1; i < size; i++)
//    {
//        buff = arr[i];
//        for (j = i - 1; j >= 0 && arr[j] >buff;j--)
//        {
//            swap(arr[j], arr[j+1]);
//        }
//    }
//
//    for (int p = 0; p < size; p++)
//    {
//        cout << arr[p] << " ";
//    }
//
//    cout << endl;
//
//    return 0;
//}

///Сортировка выбором

//int main()
//
//{
//
//    int size;
//        cin>>size;
//        int arr[size];
//    for(int i = 0; i!=size;i++) {
//        cin>>arr[i];
//    }
//    int min = 0;
//    int buf = 0;
//    for (int i = 0; i < size; i++)
//
//    {
//
//        min = i;
//
//        for (int j = i + 1; j < size; j++) {
//
//            min = ( arr[j] < arr[min] ) ? j : min;
//
//            if (i != min) {
//                buf = arr[i];
//                arr[i] = arr[min];
//                arr[min] = buf;
//            }
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//
//        cout << arr[i] << ", ";
//    }
//}

///Башня Ханои

//void TowerOfHanoi(int m, string first, string middle, string last){
//    if(m == 1){
//        cout << "Moving disc 1 from " << first << " to " << last << endl;
//    }
//    else{
//        TowerOfHanoi(m-1,first,last,middle);
//        cout << "Moving disc " << m << " from " << first << " to " << last << endl;
//        TowerOfHanoi(m-1,middle,first,last);
//    }
//
//}
//int main(){
//    int di;
//    cin>>di;
//    TowerOfHanoi(di, "FirstTower","SecondTower","ThirdTower");
//    return 0;
//}
 
///Задача о восьми ферзях

//int board[8][8];
//void setQueen(int i, int j)
//{
//    for (int x = 0; x <= 7; ++x)
//    {
//        ++board[x][j];
//        ++board[i][x];
//        int foo;
//        foo = j - i + x;
//        if (foo >= 0 && foo <= 7)
//            ++board [x][foo];
//        foo = j + i - x;
//        if (foo >= 0 && foo <= 7)
//            ++board [x][foo];
//    }
//    board[i][j] = -1;
//}
//
//void resetqueen(int i, int j)
//{
//    for (int x = 0; x <= 7; ++x)
//    {
//        --board[x][j];
//        --board[i][x];
//        int foo;
//        foo = j - i + x;
//        if (foo >= 0 && foo <= 7)
//            --board [x][foo];
//        foo = j + i - x;
//        if (foo >= 0 && foo <= 7)
//            --board [x][foo];
//
//    }
//
//        board[i][j] = 0;
//}
//
//bool tryQueen(int i)
//{
//    bool result = false;
//    for (int j = 0; j <= 7; j++)
//    {
//        if (board[i][j] == 0)
//        {
//            setQueen (i, j);
//            if (i == 7)
//                result = true;
//            else
//            {
//                result = tryQueen(i + 1);
//                if (!result)
//                    resetqueen(i, j);
//            }
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    for (int i = 0; i <= 7; ++i)
//        for (int j = 0; j <= 7; ++j)
//            board [i][j] = 0;
//    tryQueen (0);
//    for (int i = 0; i <= 7; ++i)
//    {
//        for (int j = 0; j <= 7; ++j)
//            if (board[i][j] == -1)
//                cout << "Q ";
//            else
//                cout <<". ";
//                cout << "\n";
//    }
//    return 0;
//}

///Лаба 4

//int main() {
//
//    int arrSize, wantedNum, wantedPoint, cicleWantedNum, wantedSide, max = -1000;
//
//    cout<<"Type size";
//
//    cin>>arrSize;
//
//    int input[arrSize];
//
//    cout<<"Type array";
//
//    for (int i = 0; i<arrSize; i++) {
//
//        cin>>input[i];
//
//    }
    
    ///1
    
    //    cout<<"Type wanted point";
    //    cin>>wantedPoint;
    //
    //    cout<<"Type wanted number";
    //    cin>>wantedNum;
    //
    //    cout<<"Type wanted side (1/0)";
    //    cin>>wantedSide;
    //
    //
    //    if (wantedSide == 0) {
    //        cicleWantedNum = (wantedNum -= 1);
    //        for (int i = wantedPoint; i!=cicleWantedNum; i--) {
    //
    //            cout<<input[i];
    //
    //            if (i == 0) {
    //                i = arrSize;
    //            }
    //
    //        }
    //    } else {
    //        arrSize = arrSize -= 1;
    //        cicleWantedNum = (wantedNum += 1);
    //        for (int i = wantedPoint; i!=cicleWantedNum; i++) {
    //
    //            cout<<input[i];
    //
    //            if (i == arrSize) {
    //                i = 0;
    //                cout<<input[i];
    //            }
    //
    //        }
    //
    //    }
    
    /// 2
    
    //    cout<<"Type wanted point";
    //    cin>>wantedPoint;
    //
    //    cout<<"Type wanted number";
    //    cin>>wantedNum;
    //
    //    cicleWantedNum = (wantedNum -= 1);
    //
    //    for (int i = wantedPoint; i!=input[cicleWantedNum]; i--) {
    //
    //        cout<<input[i];
    //
    //        if (i == 0) {
    //            i = arrSize;
    //        }
    //
    //    }
    
    /// 3
    
//    for (int i = 0; i<arrSize; i++) {
//
//        if (input[i] > max) {
//            max = input[i];
//        }
//
//    }
//
//    for (int i = 0; i<arrSize; i) {
//
//        if (input[i] == max) {
//            input[i] = NULL;
//            i++;
//        } else {
//
//            cout<<input[i];
//            i++;
//
//        }
//
//    }
//}
    /// 4
    
//            cout<<"Type wanted point";
//            cin>>wantedPoint;
//
//        int ciclePoint = wantedPoint;
//        ciclePoint++;
//
//        cout<<input[wantedPoint];
//        if (ciclePoint >= arrSize) {
//            cout<<input[0];
//        } else {
//            cout<<input[ciclePoint];
//        }
//    }

    ///Лаба 5

//int main() {
//
//    int arrSize, temp, tempLast, arrLast;
//    cout<<"Input size";
//    cin>>arrSize;
//
//    int inputArr[arrSize], generatedArr[arrSize][arrSize];
//    cout<<"Input array (Remember, array elements cannot be smaller than its size)";
//    for (int i = 0; i<arrSize; i++) {
//
//        cin>>inputArr[i];
//
//    }
//
//    arrLast = arrSize;
//    arrSize--;
//    arrLast--;
//
//    for (int i = 0; i<=arrSize; i++) {
//
//        temp = inputArr[i]/arrSize;
//        tempLast = ((inputArr[i]%arrSize) + (temp));
//        for (int g = 0; g<=arrSize; g++) {
//
//            if (g < arrLast) {
//                generatedArr[g][i] = temp;
//            } else {
//                generatedArr[g][i] = tempLast;
//            }
//        }
//
//    }
//
//    for (int i = 0; i<=arrSize; i++) {
//        for (int g = 0; g<=arrSize; g++) {
//            cout<<generatedArr[i][g];
//        }
//        cout<<"\n";
//    }
//
//}

///Лаба 7
///А

//int main() {
//
//    int arrSize, temp, temp1, elementChooser;
//        cout<<"Input size";
//        cin>>arrSize;
//
//        int inputArr[arrSize];
//        cout<<"Input array";
//        for (int i = 0; i<arrSize; i++) {
//
//            cin>>inputArr[i];
//
//        }
//
//    elementChooser = arrSize;
//    elementChooser--;
//    if (inputArr[0]%2 == 0) {
//        temp = inputArr[arrSize];
//        for (int i = inputArr[0]; i!=0; i--){
//            for (int i = elementChooser; i>=0; i--) {
//                temp1 = inputArr[i];
//                inputArr[i] = temp;
//                temp = temp1;
//            }
//            inputArr[elementChooser] = temp;
//        }
//    } else {
//        temp = inputArr[0];
//        for (int i = inputArr[elementChooser]; i!=0; i--){
//
//            for (int i = 1; i<arrSize; i++) {
//
//                temp1 = inputArr[i];
//                inputArr[i] = temp;
//                temp = temp1;
//
//            }
//
//        }
//
//        inputArr[0] = temp;
//
//    }
//    for (int i = 0; i<arrSize; i++) {
//
//        cout<<inputArr[i]<<"\n";
//
//    }
//}

///Б


    


//double lenght(int k, ...) {
//
//    int xA, yA, xB, yB, xx, yy;
//    double len = 0;
//
//    va_list factor;
//    va_start(factor, k);
//    xA = va_arg(factor, int);
//    yA = va_arg(factor, int);
//    xB = va_arg(factor, int);
//    yB = va_arg(factor, int);
//
//    if (xA > xB) {
//        xx = xA -= xB;
//    } else {
//        xx = xB -= xA;
//    }
//    if (yA > yB) {
//        yy = yA -= yB;
//    } else {
//        yy = yB -= yA;
//    }
//
//    len = sqrt((yy*yy)+(xx*xx));
//
//    return len;
//
//}
//
//int main() {
//
//    int xA, yA, xB, yB, k;
//    double ll;
//    ll = lenght(k = 4, xA = 10, yA = 15, xB = 20, yB = 25);
//    cout<<ll;
//}

//double belong(int k, ...) {
//
//    double xA, yA, xB, yB, xC, yC, xD, yD, x, y, z, c, v, b, temp1, temp2, tempX, tempY, result;
//    double len = 0;
//
//    va_list factor;
//    va_start(factor, k);
//    xA = va_arg(factor, double);
//    yA = va_arg(factor, double);
//    xB = va_arg(factor, double);
//    yB = va_arg(factor, double);
//    xC = va_arg(factor, double);
//    yC = va_arg(factor, double);
//    xD = va_arg(factor, double);
//    yD = va_arg(factor, double);
//
//    if (xA > xB) {
//            x = xA -= xB;
//    } else {
//        x = xB -= xA;
//    }
//    if (yA > yB) {
//            y = yA -= yB;
//    } else {
//        y = yB -= yA;
//    }
//    if (xA > xD) {
//        c = xA -= xD;
//    } else {
//        c = xD -= xA;
//    }
//    if (yA > yD) {
//        v = yA -= yD;
//    } else {
//        v = yD -= yA;
//    }
//    if (xB > xD) {
//        z = xB -= xD;
//    } else {
//        z = xD -= xB;
//    }
//    if (yB > yD) {
//        b = yB -= yD;
//    } else {
//        b = yD -= yB;
//    }
//    tempX = xC;
//    tempY = yC;
//    x -= xA;
//    y -= yA;
//    c -= xB;
//    v -= yB;
//    z -= xD;
//    b -= yD;
//    xC -= xA;
//    yC -= yA;
//    temp1 = (x / xC);
//
//    temp2 = (y / yC);
//
//    if (temp1 == temp2) {
//        cout<<1;
//    } else {
//        cout<<0;
//    }
//    xC = tempX;
//    yC = tempY;
//    xC -= xA;
//    yC -= yA;
//    temp1 = (c / xC);
//
//    temp2 = (v / yC);
//
//    if (temp1 == temp2) {
//        cout<<1;
//    } else {
//        cout<<0;
//    }
//    xC = tempX;
//    yC = tempY;
//    xC -= xA;
//    yC -= yA;
//    temp1 = (z / xC);
//
//    temp2 = (b / yC);
//
//    if (temp1 == temp2) {
//        cout<<1;
//    } else {
//        cout<<0;
//    }
//    return 0;
//
//}
//
//int main (){
//
//    int xA, yA, xB, yB, xC, yC, xD, yD, k, result;
//
//    belong(k = 6, xA = 0, yA = 0, xB = 0, yB = 0, xC = 0, yC = 0, xD = 0, yD = 0);
//}

//double tria(int k,...){
//    double a, b, c, x0, x1, x2, x3, y0, y1, y2, y3, result;
//
//    va_list factor;
//        va_start(factor, k);
//        x0 = va_arg(factor, double);
//        y0 = va_arg(factor, double);
//        x1 = va_arg(factor, double);
//        y1 = va_arg(factor, double);
//        x2 = va_arg(factor, double);
//        y2 = va_arg(factor, double);
//        x3 = va_arg(factor, double);
//        y3 = va_arg(factor, double);
//
//    a = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0);
//    b = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0);
//    c = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0);
//
////    cout<<a<<endl<<b<<endl<<c;
//    
//    if(a+=b+=c == 0) {
//        result = 1;
//    } else {
//        result = 0;
//    }
//    
//    return result;
//}
//
//int main() {
//
//    double a, b, c, x0, x1, x2, x3, y0, y1, y2, y3, result;
//
//    int k;
//
//    result = tria(k = 8, x0 = 10, x1 = 10, x2 = 0, x3 = 0, y0 = 10, y1 = 10, y2 = 0, y3 = 0);
//    cout<<result;
//}


//int main() {
//
//    string input, delimiter, token;
//
//    cin>>input;
//    delimiter = "_";
//    size_t pos = 0;
//
//    map<string, string> dict;
//
//    dict.insert(make_pair("dog", "собака"));
//
//    map <string,string> :: iterator iter;
//
//    while ((pos = input.find(delimiter)) != string::npos) {
//        token = input.substr(0, pos);
//
//        iter = dict.begin();
//
//        if (token == (*iter).first) {
//
//            cout<<(*iter).second<<"_";
//
//        } else {
//
//            cout<<token<<"_";
//
//        }
//
//        input.erase(0, pos + delimiter.length());
//    }
//    cout<<input;
//}


//void ShowArray(float Arr[], int SIZE)
//{
//    for (int i = 0; i < SIZE; i++)
//        cout << Arr[i] << " ";
//    cout << endl;
//}
//
//void BucketSort(float Arr[], int size)
//{
//    vector<float> buckets[size];
//
//    for (int i = 0; i < size; i++)
//    {
//        int bucketIndex = size * Arr[i];
//        buckets[bucketIndex].push_back(Arr[i]);
//    }
//
//    for (int i = 0; i < size; i++)
//        sort(buckets[i].begin(), buckets[i].end());
//
//    int index = 0;
//    for (int i = 0; i < size; i++)
//        for (int j = 0; j < buckets[i].size(); j++, index++)
//            Arr[index] = buckets[i][j];
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    const int SIZE = 10;
//    float Array[SIZE] = { 0.23, 0.53, 0.13, 0.6, 0.43, 0.32, 0.54, 0.96, 0.65, 0.21 };
//    cout << "Массив до сотрировки: ";
//    ShowArray(Array, SIZE);
//
//    cout << "Блочный метод сортировки: ";
//    BucketSort(Array, SIZE);
//    ShowArray(Array, SIZE);
//
//    return 0;
//}
//void ShowArray(int* Arr, int SIZE)
//{
//    for (int i = 0; i < SIZE; i++)
//        cout << Arr[i] << " ";
//    cout << endl;
//}
//
//void quickSort(int* array, int low, int high)
//{
//    int i = low;
//    int j = high;
//    int pivot = array[(i + j) / 2];
//    int temp;
//    while (i <= j)
//    {
//        while (array[i] < pivot)
//            i++;
//        while (array[j] > pivot)
//            j--;
//        if (i <= j)
//        {
//            temp = array[i];
//            array[i] = array[j];
//            array[j] = temp;
//            i++;
//            j--;
//        }
//    }
//    if (j > low)
//        quickSort(array, low, j);
//    if (i < high)
//        quickSort(array, i, high);
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    int SIZE = 10;
//    int* Array = new int[SIZE];
//    for (int i = 0; i < SIZE; i++)
//        Array[i] = rand() % 10 - 10;
//    cout << "Массив до сотрировки: ";
//    ShowArray(Array, SIZE);
//
//    cout << "Метод быстрой сортировки: ";
//    quickSort(Array, 0, SIZE - 1);
//    ShowArray(Array, SIZE);
//
//    delete[] Array;
//    return 0;
//}
//void ShowArray(int* Arr, int SIZE)
//{
//    for (int i = 0; i < SIZE; i++)
//        cout << Arr[i] << " ";
//    cout << endl;
//}
//
//void Merge(int* Arr, int first, int last)
//{
//    int middle, start, final, j;
//    int* mas = new int[100];
//    middle = (first + last) / 2;
//    start = first;
//    final = middle + 1;
//
//    for (j = first; j <= last; j++)
//        if ((start <= middle) && ((final > last) || (Arr[start] < Arr[final])))
//        {
//            mas[j] = Arr[start];
//            start++;
//        }
//        else
//        {
//            mas[j] = Arr[final];
//            final++;
//        }
//
//    for (j = first; j <= last; j++)
//        Arr[j] = mas[j];
//
//    delete[] mas;
//}
//
//void MergeSort(int* Arr, int first, int last)
//{
//    if (first < last)
//    {
//        MergeSort(Arr, first, (first + last) / 2);
//        MergeSort(Arr, (first + last) / 2 + 1, last);
//        Merge(Arr, first, last);
//    }
//}
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    int SIZE = 10;
//    int* Array = new int[SIZE];
//    for (int i = 0; i < SIZE; i++)
//        Array[i] = rand() % 10;
//    cout << "Массив до сотрировки: ";
//    ShowArray(Array, SIZE);
//
//    cout << "Метод сортировки слиянием: ";
//    MergeSort(Array, 0, SIZE - 1);
//    ShowArray(Array, SIZE);
//
//    delete[] Array;
//    return 0;
//}
//void ShowArray(int* Arr, int SIZE)
//{
//    for (int i = 0; i < SIZE; i++)
//        cout << Arr[i] << " ";
//    cout << endl;
//}
//
//void CountSort(int* Array, int size, int MaxRange)
//{
//    int TempArr[MaxRange + 1];
//    for (int i = 0; i < MaxRange + 1; i++)
//        TempArr[i] = 0;
//
//    for (int i = 0; i < size; i++)
//        TempArr[Array[i]]++;
//
//    int index = 0;
//    for (int i = 0; i < MaxRange + 1; i++)
//        while (TempArr[i]--)
//            Array[index++] = i;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    int SIZE = 10;
//    int* Array = new int[SIZE];
//    for (int i = 0; i < SIZE; i++)
//        Array[i] = rand() % 11;
//    cout << "Массив до сотрировки: ";
//    ShowArray(Array, SIZE);
//
//    cout << "Метод сортировки подсчётом: ";
//    CountSort(Array, SIZE, 10);
//    ShowArray(Array, SIZE);
//
//    delete[] Array;
//    return 0;
//}
//void ShowArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//void ShellSort(int* arr, const int size)
//{
//    for (int gap = size / 2; gap > 0; gap /= 2)
//        for (int i = gap; i < size; i++)
//        {
//            int temp = arr[i];
//            int j;
//            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
//                arr[j] = arr[j - gap];
//            arr[j] = temp;
//        }
//}
//
//int main()
//{
//    srand(time(NULL));
//    int size;
//    cout << "Enter the size of the Array: ";
//    cin >> size;
//
//    int* Array = new int[size];
//    for (int i = 0; i < size; i++)
//        Array[i] = rand() % 11;
//
//    cout << "Array before sorting: ";
//    ShowArray(Array, size);
//
//    cout << "Array after sorting: ";
//    ShellSort(Array, size);
//    ShowArray(Array, size);
//
//    delete[] Array;
//    return 0;
//}
//void ShowArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//void QuickSort(int* arr, int first, int last)
//{
//    int i = first;
//    int j = last;
//    int pivot = arr[(first + last) / 2];
//
//    while (i <= j)
//    {
//        while (arr[i] < pivot)
//            i++;
//        while (arr[j] > pivot)
//            j--;
//
//        if (i <= j)
//        {
//            if (arr[i] > arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//
//            i++;
//            j--;
//        }
//
//        if (i < last)
//            QuickSort(arr, i, last);
//        if (j > first)
//            QuickSort(arr, first, j);
//    }
//}
//
//int main()
//{
//    srand(time(NULL));
//    int size;
//    cout << "Enter the size of the Array: ";
//    cin >> size;
//
//    int* Array = new int[size];
//    for (int i = 0; i < size; i++)
//        Array[i] = rand() % 11;
//
//    cout << "Array before sorting: ";
//    ShowArray(Array, size);
//
//    cout << "Array after sorting: ";
//    QuickSort(Array, 0, size - 1);
//    ShowArray(Array, size);
//
//    return 0;
//}

///Лаба 8



///Лаба 9


//vector<string> words;
//
//int GetCountGlas(string word)
//{
//    int cunt = 0;
//
//    for (int i = 0; i < word.size(); i++)
//        if (
//            word[i] == 65 ||
//            word[i] == 69 ||
//            word[i] == 73 ||
//            word[i] == 79 ||
//            word[i] == 85 ||
//            word[i] == 89 ||
//            word[i] == 65 + 32 ||
//            word[i] == 69 + 32 ||
//            word[i] == 73 + 32 ||
//            word[i] == 79 + 32 ||
//            word[i] == 85 + 32 ||
//            word[i] == 89 + 32
//            )
//            cunt++;
//
//    return cunt;
//}
//
//int WordCounter(string line)
//{
//    int cunt = 0;
//    string s = "";
//
//    for (int i = 0; i < line.size() - 1; i++)
//    {
//        if (line[i] == ' ' && line[i + 1] != ' ')
//        {
//            cunt++;
//            words.push_back(s);
//            s = "";
//        }
//        else
//            s += line[i];
//    }
//
//    return cunt;
//}
//
//int main()
//{
//    ifstream f1("/Users/gaaroo/Desktop/PizzaAppPj/LabProj/1.txt");
//    ofstream f2("/Users/gaaroo/Desktop/PizzaAppPj/LabProj/2.txt");
//
//    string line;
//
//    while (getline(f1, line))
//        if (WordCounter(line) == 0)
//            f2 << line << endl;
//
//    int max = 0;
//    int num = 0;
//    string word = "";
//    for (int i = 0; i< words.size(); i++)
//        if (max < GetCountGlas(words[i]))
//        {
//            max = GetCountGlas(words[i]);
//
//            word = words[i];
//            num = i + 1;
//        }
//
//    f2.close();
//    f1.close();
//
//    cout << "Max: " << num << endl << "Word: " << word << endl;
//
//    return 0;
//}



//int main() {
//
//    string delimiter, token, temp;
//
//    std::string line;
//
//    std::ifstream in("/Users/gaaroo/Desktop/PizzaAppPj/LabProj/1.txt");
//    std::ofstream out;
//        out.open("/Users/gaaroo/Desktop/PizzaAppPj/LabProj/2.txt");
//
//    if (in.is_open())
//    {
//
//        delimiter = " ";
//
//        size_t pos = 0;
//
//        while (getline(in, line))
//        {
//
//
//                    pos = line.find(delimiter);
//
//                    if (pos == 0 or pos > 100000) {
//
//                        out << line << "\n";
//
//
//                        pos = 0;
//
//                    } else {
//
//                        pos = 0;
//
//                    }
//
//
//                }
//
//
//        }
//
//}



///Лаба 10

///1

//int main() {
//
//    int arrSize = 4;
//
//    string array[arrSize];
//
//    for (int i = 0; i <= arrSize; i++) {
//
//        cin>>array[i];
//
//    }
//
//    for (int integ = 0; integ <= arrSize; integ++) {
//
//        for (int i = 0; i <= arrSize; i++) {
//
//            if (array[integ] == array[i]  and integ != i) {
//
//
//                array[integ] = "deleted";
//                array[i] = "deleted";
//
//
//            }
//
//        }
//
//    }
//
//    for (int i = 0; i <= arrSize; i++) {
//
//        cout<<array[i]<<"\n";
//
//    }
//
//}

///2

//int main() {
//
//    int arrSize = 4, input;
//
//    string array[arrSize];
//
//    cin>>input;
//
//    for (int i = 0; i <= arrSize; i++) {
//
//        cin>>array[i];
//
//    }
//
//    for (int i = arrSize; i>=input; i--) {
//
//        array[i] = "deleted";
//
//    }
//
//    for (int i = 0; i <= arrSize; i++) {
//
//        cout<<array[i]<<"\n";
//
//    }
//
//}


//
//int main() {
//    
//    int userUnits, deleteThis;
//    string userInput;
//    
//    cin>>userUnits;
//    
//    string userInputArray[userUnits];
//    int userUnitsArray[userUnits];
//    
//    for (int i = 0; i < userUnits; i++) {
//        
//        cin>>userInput;
//        userInputArray[i] = userInput;
//        userUnitsArray[i] = i;
//        
//    }
//    
//    for (int i = 0; i < userUnits; i++) {
//        
//        cout<<userInputArray[i]<<" - "<<i<<"\n";
//        
//    }
//    
//    string first = userInputArray[0];
//    string lastWord = userInputArray[userUnits - 1];

//    cin>>deleteThis;
//
//    userInputArray[deleteThis] = "deleted";
//
//    for (int i = 0; i < userUnits; i++) {
//
//        if(userInputArray[i] == "deleted") {
//
//        } else {
//            cout<<userInputArray[i]<<" - "<<i<<"\n";
//        }
//
//    }
//
//    int wantToAdd, wantedAmount, latestNum;
//    latestNum = 0;
//    cin>>wantToAdd;
//    cin>>wantedAmount;
//    userUnits += wantedAmount;
//    latestNum = wantToAdd;
//    latestNum += wantedAmount;
//
//    for (int i = userUnits; i > latestNum; i--) {
//
//        userInputArray[i] = userInputArray[i - wantedAmount];
//        userUnitsArray[i] = userUnitsArray[i - wantedAmount];
//
//    }
//
//    for (int i = wantToAdd; i < latestNum; i++) {
//
//
//            cin>>userInputArray[i + 1];
//            userUnitsArray[i + 1] = i + 1;
//
//    }
//
//    cout<<first<<" - "<<0<<"\n";
//
//    for (int i = 1; i < userUnits - 1; i++) {
//
//        cout<<userInputArray[i]<<" - "<<i<<"\n";
//
//    }
//
//    cout<<lastWord<<" - "<<userUnits - 1<<"\n";
//
//}

////KMP

//void pref_func(string pattern, int* d)
//{
//    d[0] = 0;
//    int j = 0;
//    int i = 1;
//    while (i < pattern.length())
//    {
//        if (pattern[i] == pattern[j])
//        {
//            d[i] = j + 1;
//            i++;
//            j++;
//        }
//        else
//        {
//            if (j == 0)
//            {
//                d[i] = 0;
//                i++;
//            }
//            else
//                j = d[j - 1];
//        }
//    }
//}
//
//void KMP_search(string pattern, string text)
//{
//    int* d = new int[pattern.length()];
//    pref_func(pattern, d);
//
//    int i = 0, j = 0;
//    while (i < text.length())
//    {
//        if (pattern[j] == text[i])
//        {
//            i++;
//            j++;
//        }
//
//        if (j == pattern.length())
//        {
//            cout << "Found pattern at index: " << i - pattern.length() << endl;
//            j = d[j - 1];
//        }
//        else if (i < text.length() && pattern[j] != text[i])
//        {
//            if (j == 0)
//                i++;
//            else
//                j = d[j - 1];
//        }
//    }
//}
//
//int main()
//{
//    string str, substr;
//
//    cout << "Text: ";
//    cin >> str;
//    cout << "Pattern: ";
//    cin >> substr;
//
//    KMP_search(substr, str);
//
//    return 0;
//}

////Tabl_Smech

//void Tabl_Smech(string pattern, int* d)
//{
//    int i;
//    for (i = 0; i < 256; i++)
//        d[i] = -1;
//    for (i = 0; i < pattern.length(); i++)
//        d[(int) pattern[i]] = i;
//}
//
//void Boer_Mur(string text, string pattern)
//{
//    int d[256];
//    Tabl_Smech(pattern, d);
//
//    int i = 0;
//    while (i < (text.length() - pattern.length()))
//    {
//        int j = pattern.length() - 1;
//        while (j >= 0 && pattern[j] == text[i + j])
//            j--;
//        if (j < 0)
//        {
//            cout << "Pattern found at index: " << i << endl;
//            if (i + pattern.length() < text.length())
//                i += pattern.length() - d[text[i + pattern.length()]];
//            else
//                i += 1;
//        }
//        else
//            if (1 > j - d[text[i + j]])
//                i += 1;
//            else
//                i += j - d[text[i + j]];
//    }
//}
//
//int main()
//{
//    string str, substr;
//    cout << "Enter text: ";
//    cin >> str;
//    cout << "Enter pattern: ";
//    cin >> substr;
//
//    Boer_Mur(str, substr);
//
//    return 0;
//}

////Interpolation

//int interpolationSearch(int arr[], int size, int value)
//{
//    int left = 0;
//    int right = size - 1;
//    int mid;
//
//    while (left <= right && value >= arr[left] && value <= arr[right])
//    {
//        mid = left + (((double)(right - left) / (arr[right] - arr[left])) * (value - arr[left]));
//
//        if (arr[mid] == value)
//            return mid;
//        if (value > arr[mid])
//            left = mid + 1;
//        else
//            right = mid - 1;
//    }
//    return -1;
//}
//
//int main()
//{
//    srand(time(NULL));
//    const int size = 10;
//    int value;
//
//    int Array[size] = { 0, 3, 5, 5, 6, 8, 10, 15, 16, 20 };
//    cout << "Array: ";
//    for (int i = 0; i < size; i++)
//        cout << Array[i] << " ";
//    cout << endl;
//
//    cout << "Enter a search value: ";
//    cin >> value;
//
//    cout << "Value found at index: " << interpolationSearch(Array, size, value);
//
//    return 0;
//}

////Linear

//void linSearch(string text, string pattern)
//{
//    for (int i = 0; i < text.length() - pattern.length() + 1; i++)
//        for (int j = 0; j < pattern.length(); j++)
//            if (pattern[j] != text[i + j])
//                break;
//            else if (j == pattern.length() - 1)
//            {
//                cout << "Found pattern at index: " << i << endl;
//                break;
//            }
//}
//
//int main()
//{
//    string str, substr;
//    cout << "Enter text: ";
//    cin >> str;
//    cout << "Enter pattern: ";
//    cin >> substr;
//
//    linSearch(str, substr);
//
//    return 0;
//}
