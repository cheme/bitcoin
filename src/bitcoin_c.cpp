

#include "bitcoin_c.h"
#include "base58.h"

#include <string>


extern "C" {

//struct string_t { std::string rep; };

/*string_t EncodeBase58_c (const unsigned char* pbegin, const unsigned char* pend){
    string_t* result = new string_t;
    result->rep = EncodeBase58 (pbegin, pend);
    return result;
}*/

const char * EncodeBase58_c (const char* data, int size){
    const unsigned char * start = (const unsigned char*) data;
    const unsigned char * end = (const unsigned char*) data + size;
    return (EncodeBase58 (start, end)).c_str();
}

}
