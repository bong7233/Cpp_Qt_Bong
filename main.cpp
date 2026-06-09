#include <iostream>

int main() {
    // 컴파일러가 빌드 시점에 직접 주입하는 버전 매크로 출력
    std::cout << "=========================================" << std::endl;
    std::cout << "실제 컴파일 수행 엔진 버전: " 
              << __GNUC__ << "." 
              << __GNUC_MINOR__ << "." 
              << __GNUC_PATCHLEVEL__ << std::endl;
    std::cout << "=========================================" << std::endl;
    return 0;
}