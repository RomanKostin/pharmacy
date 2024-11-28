#include "disease.h"
using namespace Pharmacy;
std::shared_ptr<disease> Pharmacy::disease::CreateDisease(const std::string& disease)
{
    return std::make_shared<Pharmacy::disease>(disease);
}

bool Pharmacy::disease::AddMedicament(std::shared_ptr<medicine>& med)
{
    Medicine.push_back(med);
    med->GetDisease().push_back(shared_from_this());
    return true;
}

std::string Pharmacy::disease::GetName()
{
    return Disease;
}
