// #include "Serializer.hpp"

// int main(){
//     Data *data = new Data;
// 	data->dataInt = 423;
// 	data->dataString = "Ricky";
// 	Data *testing;

// 	size_t raw = Serializer::serialize(data);

// 	std::cout << data->dataInt << " " << data->dataString << std::endl;
// 	std::cout << "Adress of Data Struct: " << data << std::endl;
// 	std::cout << "Serialized Adress of Data Struct: " << raw << std::endl;
// 	std::cout << "Deserialized Adress of Data Struct: " << Serializer::deserialize(raw) << std::endl;
	
    
//     testing = Serializer::deserialize(raw);
// 	std::cout << "Testing Adress of Data Struct: " << testing << std::endl;
// 	std::cout << "Data Adress of Data Struct: " << data << std::endl;
	
// 	std::cout << data->dataInt << " " << data->dataString << std::endl;
	
// 	delete data;
// }


#include "Serializer.hpp"

int main() {
    // Create a new Data object and populate it with data
    Data *data = new Data;
    data->dataInt = 423;
    data->dataString = "Ricky";

    // Declare a Data pointer for testing
    Data *testing;

    // Serialize the address of the Data object
    uintptr_t raw = Serializer::serialize(data);

    // Output the original data
    std::cout << "Original Data: " << data->dataInt << " " << data->dataString << std::endl;

    // Output the address of the Data object
    std::cout << "Address of Data Struct: " << data << std::endl;

    // Output the serialized address of the Data object
    std::cout << "Serialized Address of Data Struct: " << raw << std::endl;

    // Deserialize the address to get a pointer to Data
    testing = Serializer::deserialize(raw);

    // Output the deserialized address of the Data object
    std::cout << "Deserialized Address of Data Struct: " << testing << std::endl;

    // Output the address of the Data object for comparison
    std::cout << "Original Data Address: " << data << std::endl;

    // Output the data again to show it's the same as the original
    std::cout << "Data after Deserialization: " << data->dataInt << " " << data->dataString << std::endl;
    std::cout << "Testing after Deserialization: " << testing->dataInt << " " << testing->dataString << std::endl;


    // Clean up by deleting the Data object
    delete data;

    return 0;
}
