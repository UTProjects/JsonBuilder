#ifndef JSON_CONTAINER_HPP
#define JSON_CONTAINER_HPP

#include <vector>
#include "Json_Data.hpp"

typedef std::vector<Json_Data*> data;

class Json_Container :public Json_Data{

public:

    Json_Container(int id);
    void print(int depth_=0);
    void add_element(Json_Data* json_data);

private:

    int id;

protected:

    data content;
    std::string key;
    char start;
    char stop;

};


#endif