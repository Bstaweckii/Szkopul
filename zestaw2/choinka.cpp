#include <iostream>
#include <string>

int main()
{
 int n;
 std::cin >> n;
    for(int k=1; k<3; k++){
        for (int i=1; i<=n; i++)
        {
            if (k==2 and i==n ){
                std::cout<< std::string(i, '#') << std::endl;
                std::cout<< std::string(i+1, '#') << std::endl;
            }
            else {
                    std::cout<< std::string(i, '#') << std::endl;

            }
        }
    }
}
