#include "G_var.h"

Global_var::Global_var()
{
    this->ID =0;
}


Global_var::~Global_var()
{

}
int Global_var::getID(void)
{
    return this->ID;
}

void Global_var::setID(int ID_set)
{
    this->ID = ID_set;
}

