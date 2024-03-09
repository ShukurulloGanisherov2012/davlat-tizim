#include <iostream>
#include <vector>
using namespace std;
class Country{
public:
	string nom;
	string poytaxt;
	float maydon;
	int aholi;
	string materigi;
	void show(){
		cout << nom << " (poytaxti - " << poytaxt << ", maydoni - " << maydon << " kv.km, aholisi - " << aholi << " ta, materigi - " << materigi << ")\n";
	}
};
int main(){
	vector<Country> davlatlar;	
	while(true){
		cout << "__________________________________________________________________________________\n";
		cout << "1.Add    2.Show    3.Search(nom)    4.Search(materig)    5.Search(maydon)    6.Search(aholi)    7.Delete    8.Update(poytaxt)\n";
		int a;
		cout << "Tanlang: ";
		cin >> a;
		switch(a){
			case 1:{
				cout << "Siz davlat qo'shish menyuisini taladingiz\n";
				string n,p,mater;
				float may;
				int a;
				cout << "Yangi davlatni nomini kiriting: ";
				cin >> n;
				cout << "Yangi davlatni poytaxtini kiriting: ";
				cin >> p;
				cout << "Yangi davlatni maydonini kattaligi kiriting: ";
				cin >> may;
				cout << "Yangi davlatni aholisining sonini kiriting: ";
				cin >> a;
				cout << "Yangi davlatni materigini kiriting: ";
				cin >> mater;
								
				Country davlat;
				davlat.nom = n;
				davlat.poytaxt = p;
				davlat.maydon = may;
				davlat.aholi = a;
				davlat.materigi = mater;
				davlatlar.push_back(davlat);
				
				cout << "Yangi davlat qo'shildi!!!\n\n";
				break;
			}
			case 2:{
				cout << "Siz davlat ko'rish menyusini tanladingiz\n";
				if(davlatlar.empty()){
					cout << "Ro'yxatada birorta davlat yo'q\n";
				}else {
					for(int i=0;i<davlatlar.size();i++){
						cout << i+1 << ") ";
						Country dav = davlatlar[i];
						dav.show();
					}
				}
				break;
			}
			case 3:{
				cout << "Siz davlatni nomi bo'yicha qidirish menyusini tanladingiz\n";
				string name;
				cout << "Qidirilayotgan davlatni nomini kiriting: ";
				cin >> name;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.nom == name){
						index = i;
						break;
					}
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					cout << index+1 << ") ";
					Country uz = davlatlar[index];
					uz.show();
				}
				break;
			}
			case 4:{
				cout << "Siz davlatni materigi bo'yicha qidirish menyusini tanladingiz\n";
				string mat;
				cout << "Qidirilayotgan davlatni materigini kiriting: ";
				cin >> mat;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.materigi == mat){
						index = i;
						break;
					}
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					cout << index+1 << ") ";
					Country uz = davlatlar[index];
					uz.show();
				}
				break;
			}
			case 5:{
				cout << "Siz davlatni maydoni bo'yicha qidirish menyusini tanladingiz\n";
				float may;
				cout << "Qidirilayotgan davlatni maydonini kiriting: ";
				cin >> may;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.maydon == may){
						index = i;
						break;
					}
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					cout << index+1 << ") ";
					Country uz = davlatlar[index];
					uz.show();
				}
				break;
			}
			case 6:{
				cout << "Siz davlatni aholisi boyicha qidirish menyusini tanldingiz\n";
				int
				 ahol;
				cout << "Qidirilayotgan davlatni aholisining sonini kiriting: ";
				cin >> ahol;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.aholi == ahol){
						index = i;
						break;
					}
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					cout << index+1 << ") ";
					Country uz = davlatlar[index];
					uz.show();
				}
				break;
			}
			case 7:{
				cout << "Siz davlat o'chirish menyusini tanladingiz\n";
				string del;
				cout << "O'chirilayotgan davlatni nomini kiriting: ";
				cin >> del;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.nom == del){
						index = i;
						break;
					}
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					Country uz = davlatlar[index];
					davlatlar.erase(davlatlar.begin()+index);
				}
				break;
			}
			case 8:{
				cout << "Siz davlat poytaxtini o'zgartirish menyusini tanladingiz\n";
				string name;
				cout << "Qidirilayotgan davlatni nomini kiriting: ";
				cin >> name;
				int index = -1;
				for(int i=0;i<davlatlar.size();i++){
					Country d = davlatlar[i];
					if(d.nom == name){
						index = i;
						break;
					}
				}
				if(davlatlar.empty()){
					cout << "Ro'yhat to'ldirilmagan\n";
					break;
				}
				if(index==-1){
					cout << "Bunday davlat topilmadi\n";
				}else{
					cout << index+1 << ") ";
					Country uz = davlatlar[index];
					uz.show();
					string poy;
					cout << "Ushbu davlat poytaxti qaysi nom bilan o'zgartirilsin: ";
					cin >> poy;
					uz.poytaxt = poy;
					cout << "Ushbu davlat poytaxti o'zgartirildi!\n";
				}
				break;
			}
			default:{
				cout << "Bunday menyu yo'q\n";
				break;
			}
		}
	}
}
