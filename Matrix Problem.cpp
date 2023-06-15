#include<iostream>
using namespace std;

class Matrix{
	private:
		int row=0;
		int column=0;
		int array[row][column];
	public:
		Matrix(int x,int y){
			rows=x;
			column=y;
		}
		void get_rows(){
			cout<<"The Number of rows is "<<row<<endl;
		}
		void get_column(){
			cout<<"The Number of column is "<<column<<endl;
		}
		void set_data(){
			for(int i=0;i<row;i++){
				for(int j=0;j<column;j++){
					cin>>array[i][j];
				}
			}
		}
		void add_matrix(Matrix M1,Matrix M2){
			for(int i=0;i<row;i++){
				for(int j=0;j<column;j++){
					cout<<M1.array[I][J]+M2.array[I][J]<<" ";
				}
				cout<<endl;
			}
		}
		void multiply_Matrix(Matrix M1,Matrix M2){
			for(int i=0;i<row;i++){
				for(int j=0;j,column;j++){
					cout<<M1.array[i][j]*M2.array[j][i]<<endll;
				}
				cout<<endl;
			}
		}
};

int main()
{
	Matrix V(2,2);
	V.get_rows();
	V.get_column();
	V.set_data();
	
	Matrix S(2,2);
	S.get_rows();
	S.get_column();
	S.set_data();
	
	add_matrix(V,S);
	
	return 0;
}
