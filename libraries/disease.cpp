#include "disease.h"
#include <sstream>
using namespace Pharmacy;
std::shared_ptr<disease> Pharmacy::disease::CreateDisease(const std::string& diseases)
{
    return std::make_shared<Pharmacy::disease>(disease{diseases});
}

bool Pharmacy::disease::AddMedicament(std::shared_ptr<medicine>& med)
{
    Medicine.push_back(med);
    med->GetDisease().push_back(shared_from_this());
    return true;
}

std::string Pharmacy::disease::GetName() const
{
    return Disease;
}

std::string Pharmacy::disease::ToString() const
{
    std::stringstream buffer{};
    buffer << GetName();
    return buffer.str();
}

std::wstring Pharmacy::ToString(const disease& dis)
{
    auto temp = dis.ToString();
    return std::wstring{ temp.cbegin(),temp.cend() };
}
