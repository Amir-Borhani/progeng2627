#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <sstream>

std::vector<std::string> line_to_vector (std::string s ){
    std::stringstream ss ;
    std::string tmp;
    std::vector<std::string> out ;

    ss<<s ;
    while (ss>>tmp){
        out.push_back(tmp);
    }
    return out ;
}

std::vector<double> string_to_double_conversion (std::vector<std::string> vin){
    
    std::vector<double> out ;
    for (int i = 0 ; i<vin.size() ; i++){
        out.push_back(std::stod(vin[i])) ;
    }
    return out;
}

std::vector<std::string> Read_line_from_file(std::string address){
    std::fstream file ;
    std::vector<std::string> linevector ;
    std::string tmpline ;

    file.open(address) ;
    if (!file.is_open()){
        std::exit(EXIT_FAILURE);
    }

    while (std::getline(file , tmpline)){
        linevector.push_back(tmpline);
    }

    return linevector ;
}

std::vector<std::vector<double>> Read_Matrix(std::string address){
    std::vector<std::vector<double>> matrix ;
    std::vector<std::vector<std::string>> wordvector;
    std::vector<std::string> linevector = Read_line_from_file(address);
    for (int i = 0 ; i<linevector.size() ; i++){
        matrix.push_back(string_to_double_conversion(line_to_vector(linevector[i]))) ;
    }
    return matrix ;
}

std::string matrix_to_string(std::vector<std::vector<double>> m){
    std::stringstream out;
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }
    return out.str();
}

std::string vector_to_string(std::vector<double> v){
    std::stringstream out;
    out << std::fixed << std::setprecision(2);
    for(int j = 0; j < v.size(); j++){
        out << (v[j]) << "\t";
    }
    return out.str();
}

std::vector<double> column(std::vector<std::vector<double>> matrix , int c){
    std::vector<double> vout ;
    for (int i = 0 ; i < matrix.size() ; i++){
        vout.push_back(matrix[i][c]) ;
    }

    return vout ;
}

std::vector<double> row(std::vector<std::vector<double>> matrix , int r){
    std::vector<double> vout = matrix[r] ;
    return vout ;
}

double scalar_product(std::vector<double> v1 , std::vector<double> v2){
    //assuming the both have same size
    double product = 0 ;
    for (int i = 0 ; i < v1.size() ; i++){
        product += v1[i]*v2[i] ;
    }

    return product ;
}

std::vector<std::vector<double>> Matrix_product(std::vector<std::vector<double>> m1 , std::vector<std::vector<double>> m2){
    
    
    //initializing a matrix of correct size 
    std::vector<std::vector<double>> m3 ;
    std::vector<double> tmp ;
    for (int i = 0 ; i<m2[0].size() ; i++){
        tmp.push_back(0);
    }
    for (int i = 0 ; i<m1.size() ; i++){
        m3.push_back(tmp);
    }

    for (int i = 0 ; i < m3.size() ; i++){
        for (int j = 0 ; j< m3[0].size() ; j++)
        m3[i][j] = scalar_product(row(m1,i),column(m2,j)) ;
    }
    return m3 ;

}

int main (int argc , char* argv[]) {

    std::vector<std::vector<double>> m1 = Read_Matrix(argv[1]);
    std::vector<std::vector<double>> m2 = Read_Matrix(argv[2]);

    std::vector<std::vector<double>> m3 = Matrix_product(m1, m2);
    
    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "x" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}

