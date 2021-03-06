#include <diy/obj/obj.hpp>

namespace diy
{
	namespace obj
	{
		MtlMaterial::MtlMaterial(void) :
			Dissolve(1.0f),
			SpecularExponent(0.0f),
			Diffuse(1.0f)
		{
			;
		}

		MtlMaterial::~MtlMaterial(void)
		{
			;
		}

		bool MtlMaterial::operator==(MtlMaterial mtlMaterial)
		{
			return !_stricmp(Name.c_str(), mtlMaterial.Name.c_str());
		}
	}
}
