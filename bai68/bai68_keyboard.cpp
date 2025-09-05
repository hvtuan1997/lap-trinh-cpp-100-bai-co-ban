// Ho ten: Hoang Van Tuan
// De: Tinh tong cac so chan trong day so nguyen

#include<iostream>
#include<vector>

using namespace std;

// khai bao nguyen mau ham
void nhapDaySo(vector<int> &a, int n);
void hienThiDaySo(vector<int> a, int n);
int tinhTongSoChan(vector<int> a, int n);

// ===chuong trinh chinh===
int main()
{
    // khai bao bien
    int n;
    vector<int> a;

    // nhap du lieu
    cout<<"Nhap vao so luong phan tu tu: n = ";
    cin>>n;

    cout<<"Nhap vao cac phan tu cua day so:\n";
    nhapDaySo(a, n);

    // hien thi
    cout<<"Day so vua nhap la:\n";
    hienThiDaySo(a, n);

    // tinh tong so chan va hien thi
    cout<<"Tong cac so chan trong day vua nhap la: "<<tinhTongSoChan(a, n);

    cout<<endl;
    return 0;
}
// ===dinh nghia ham===
void nhapDaySo(vector<int> &a, int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        cout<<"\tPhan tu thu "<<(i+1)<<" la: ";
        cin>>x;
        a.push_back(x);
    }
}
// ----------------
void hienThiDaySo(vector<int> a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a.at(i);
    }
    cout<<endl;
}
// ----------------
int tinhTongSoChan(vector<int> a, int n)
{
    int s = 0;

    for(int i=0;i<n;i++)
    {
        if(a.at(i) % 2 == 0)
        {
            s += a.at(i);
        }
    }

    return s;
}
// ----------------
