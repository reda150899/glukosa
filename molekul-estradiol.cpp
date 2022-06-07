
#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

float densitas;             /* densitas ini memiliki satuan g cm^-3
                            dan ini harus diinput dari user */
// converter dari nilai cm^-3 ke A^3
float cm3_to_A3 = 1.0E-24;  
float numb_mol;
float Na = 6.022E23;            // bilangan avogadro    
float Mr_C18H24O2 = 272,0;      // massa relatif dari C18H24O2 
int numb_lat;                   // panjang sel simulasi    
int N;                          // jumlah molekul 
float volum;                    // volume dari molekul C18H24O2
float lx, ly, lz;               // panjang sel simulasi terhitung
float lat;                      // jarak antar molekul C18H24O2

int main(){
  //deklarasi variable
  float pi = 3,14;

  //deklarasi molekul estradiol
  float C1x, C1y, C1z;
  float C2x, C2y, C2z;
  float C3x, C3y, C3z;
  float C4x, C4y, C4z;
  float C5x, C5y, C5z;
  float C6x, C6y, C6z;
  float C7x, C7y, C7z;
  float C8x, C8y, C8z;
  float C9x, C9y, C9z;
  float C10x, C10y, C10z;
  float C11x, C11y, C11z;
  float C12x, C12y, C12z;
  float C13x, C13y, C13z;
  float C14x, C14y, C14z;
  float C15x, C15y, C15z;
  float C16x, C16y, C16z;
  float C17x, C17y, C17z;
  float C18x, C18y, C18z;
  float H1x, H1y, H1z;
  float H2x, H2y, H2z;
  float H3x, H3y, H3z;
  float H4x, H4y, H4z;
  float H5x, H5y, H5z;
  float H6x, H6y, H6z;
  float H7x, H7y, H7z;
  float H8x, H8y, H8z;
  float H9x, H9y, H9z;
  float H10x, H10y, H10z;
  float H11x, H11y, H11z;
  float H12x, H12y, H12z;
  float H13x, H13y, H13z;
  float H14x, H14y, H14z;
  float H15x, H15y, H15z;
  float H16x, H16y, H16z;
  float H17x, H17y, H17z;
  float H18x, H18y, H18z;
  float H19x, H19y, H19z;
  float H20x, H20y, H20z;
  float H21x, H21y, H21z;
  float H22x, H22y, H22z;
  float H23x, H23y, H23z;
  float H24x, H24y, H24z;
  float O1x, O1y, O1z;
  float O2x, O2y, O2z;
  
  float rB_Cx = 0.0;
  float rB_Cy = 0.0;
  float rB_Cz = 0.0;
  
  // masukkan nilai untuk setiap variabel C18H24O2
  C1x = C1y = C1z = 0.0;
  C2x = C2y = C2z = 0.0;
  C3x = C3y = C3z = 0.0;
  C4x = C4y = C4z = 0.0;
  C5x = C5y = C5z = 0.0;
  C6x = C6y = C6z = 0.0;
  C7x = C7y = C7z = 0.0;
  C8x = C8y = C8z = 0.0;
  C9x = C9y = C9z = 0.0;
  C10x = C10y = C10z = 0.0;
  C11x = C11y = C11z = 0.0;
  C12x = C12y = C12z = 0.0;
  C13x = C13y = C13z = 0.0;
  C14x = C14y = C14z = 0.0;
  C15x = C15y = C15z = 0.0;
  C16x = C16y = C16z = 0.0;
  C17x = C17y = C17z = 0.0;
  C18x = C18y = C18z = 0.0;


  H1x = sin(52.26*pi/180) * 104.52;
  H1y = 0.0;
  H1z = cos(52.26*pi/180) * 104.52;

  H2x = - H1x;
  H2y = H1y;
  H2z = H1z;
  
  // memasukkan nilai tersebut ke dalam file
  ofstream file;
  file.open("C18H24O2.xyz");
  file << "44\n" << endl;
  
  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C1x << setw(44) << " " \
  << fixed << setprecision(44) << C1y << setw(44) << " " \
  << fixed << setprecision(44) << C1z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C2x << setw(44) << " " \
  << fixed << setprecision(44) << C2y << setw(44) << " " \
  << fixed << setprecision(44) << C2z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C3x << setw(44) << " " \
  << fixed << setprecision(44) << C3y << setw(44) << " " \
  << fixed << setprecision(44) << C3z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C4x << setw(44) << " " \
  << fixed << setprecision(44) << C4y << setw(44) << " " \
  << fixed << setprecision(44) << C4z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C5x << setw(44) << " " \
  << fixed << setprecision(44) << C5y << setw(44) << " " \
  << fixed << setprecision(44) << C5z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C6x << setw(44) << " " \
  << fixed << setprecision(44) << C6y << setw(44) << " " \
  << fixed << setprecision(44) << C6z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C7x << setw(44) << " " \
  << fixed << setprecision(44) << C7y << setw(44) << " " \
  << fixed << setprecision(44) << C7z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C8x << setw(44) << " " \
  << fixed << setprecision(44) << C8y << setw(44) << " " \
  << fixed << setprecision(44) << C8z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C9x << setw(44) << " " \
  << fixed << setprecision(44) << C9y << setw(44) << " " \
  << fixed << setprecision(44) << C9z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C10x << setw(44) << " " \
  << fixed << setprecision(44) << C10y << setw(44) << " " \
  << fixed << setprecision(44) << C10z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C10x << setw(44) << " " \
  << fixed << setprecision(44) << C10y << setw(44) << " " \
  << fixed << setprecision(44) << C10z << "\n";
    
  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C11x << setw(44) << " " \
  << fixed << setprecision(44) << C11y << setw(44) << " " \
  << fixed << setprecision(44) << C11z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C12x << setw(44) << " " \
  << fixed << setprecision(44) << C12y << setw(44) << " " \
  << fixed << setprecision(44) << C12z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C13x << setw(44) << " " \
  << fixed << setprecision(44) << C13y << setw(44) << " " \
  << fixed << setprecision(44) << C13z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C14x << setw(44) << " " \
  << fixed << setprecision(44) << C14y << setw(44) << " " \
  << fixed << setprecision(44) << C14z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C15x << setw(44) << " " \
  << fixed << setprecision(44) << C15y << setw(44) << " " \
  << fixed << setprecision(44) << C15z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C16x << setw(44) << " " \
  << fixed << setprecision(44) << C16y << setw(44) << " " \
  << fixed << setprecision(44) << C16z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C17x << setw(44) << " " \
  << fixed << setprecision(44) << C17y << setw(44) << " " \
  << fixed << setprecision(44) << C17z << "\n";

  file << setw(44) << "C" << setw(44) << " " \
  << fixed << setprecision(44) << C18x << setw(44) << " " \
  << fixed << setprecision(44) << C18y << setw(44) << " " \
  << fixed << setprecision(44) << C18z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H1x << setw(44) << " " \
  << fixed << setprecision(44) << H1y << setw(44) << " " \
  << fixed << setprecision(44) << H1z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H2x << setw(44) << " " \
  << fixed << setprecision(44) << H2y << setw(44) << " " \
  << fixed << setprecision(44) << H2z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H3x << setw(44) << " " \
  << fixed << setprecision(44) << H3y << setw(44) << " " \
  << fixed << setprecision(44) << H3z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H4x << setw(44) << " " \
  << fixed << setprecision(44) << H4y << setw(44) << " " \
  << fixed << setprecision(44) << H4z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H5x << setw(44) << " " \
  << fixed << setprecision(44) << H5y << setw(44) << " " \
  << fixed << setprecision(44) << H5z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H6x << setw(44) << " " \
  << fixed << setprecision(44) << H6y << setw(44) << " " \
  << fixed << setprecision(44) << H6z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H7x << setw(44) << " " \
  << fixed << setprecision(44) << H7y << setw(44) << " " \
  << fixed << setprecision(44) << H7z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H8x << setw(44) << " " \
  << fixed << setprecision(44) << H8y << setw(44) << " " \
  << fixed << setprecision(44) << H8z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H9x << setw(44) << " " \
  << fixed << setprecision(44) << H9y << setw(44) << " " \
  << fixed << setprecision(44) << H9z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H10x << setw(44) << " " \
  << fixed << setprecision(44) << H10y << setw(44) << " " \
  << fixed << setprecision(44) << H10z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H11x << setw(44) << " " \
  << fixed << setprecision(44) << H11y << setw(44) << " " \
  << fixed << setprecision(44) << H11z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H12x << setw(44) << " " \
  << fixed << setprecision(44) << H12y << setw(44) << " " \
  << fixed << setprecision(44) << H12z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H13x << setw(44) << " " \
  << fixed << setprecision(44) << H13y << setw(44) << " " \
  << fixed << setprecision(44) << H13z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H14x << setw(44) << " " \
  << fixed << setprecision(44) << H14y << setw(44) << " " \
  << fixed << setprecision(44) << H14z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H15x << setw(44) << " " \
  << fixed << setprecision(44) << H15y << setw(44) << " " \
  << fixed << setprecision(44) << H15z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H16x << setw(44) << " " \
  << fixed << setprecision(44) << H16y << setw(44) << " " \
  << fixed << setprecision(44) << H16z << "\n";

  file << setw(44) << "H" << setw(44) << " " 
  << fixed << setprecision(44) << H17x << setw(44) << " " \
  << fixed << setprecision(44) << H17y << setw(44) << " " \
  << fixed << setprecision(44) << H17z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H18x << setw(44) << " " \
  << fixed << setprecision(44) << H18y << setw(44) << " " \
  << fixed << setprecision(44) << H18z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H19x << setw(44) << " " \
  << fixed << setprecision(44) << H19y << setw(44) << " " \
  << fixed << setprecision(44) << H19z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H20x << setw(44) << " " \
  << fixed << setprecision(44) << H20y << setw(44) << " " \
  << fixed << setprecision(44) << H20z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H21x << setw(44) << " " \
  << fixed << setprecision(44) << H21y << setw(44) << " " \
  << fixed << setprecision(44) << H21z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H22x << setw(44) << " " \
  << fixed << setprecision(44) << H22y << setw(44) << " " \
  << fixed << setprecision(44) << H22z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H23x << setw(44) << " " \
  << fixed << setprecision(44) << H23y << setw(44) << " " \
  << fixed << setprecision(44) << H23z << "\n";

  file << setw(44) << "H" << setw(44) << " " \
  << fixed << setprecision(44) << H24x << setw(44) << " " \
  << fixed << setprecision(44) << H24y << setw(44) << " " \
  << fixed << setprecision(44) << H24z << "\n";

  file << setw(44) << "O" << setw(44) << " " \
  << fixed << setprecision(44) << O1x << setw(44) << " " \
  << fixed << setprecision(44) << O1y << setw(44) << " " \
  << fixed << setprecision(44) << O1z << "\n";

  file << setw(44) << "O" << setw(44) << " " \
  << fixed << setprecision(44) << O2x << setw(44) << " " \
  << fixed << setprecision(44) << O2y << setw(44) << " " \
  << fixed << setprecision(44) << O2z << "\n";

  file.close();

  cout << "program selesai";

  return 0;
}
