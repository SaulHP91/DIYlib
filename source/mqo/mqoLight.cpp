#include "mqoLight.hpp"

namespace diy
{

	MqoLight::MqoLight(void) :
		Direction(0.0f, 0.0f, 1.0f),
		Color(1.0f)
	{
		;
	}

	MqoLight::~MqoLight(void)
	{
		;
	}

	bool MqoLight::ParseFromFStream(std::ifstream& in)
	{
		static char buffer[256];

		std::streampos pos = in.tellg();

		char token;
		in >> token;
		if (token != '{' || !in.good())
		{
			in.clear();
			in.seekg(pos);
			return false;
		}

		while (true)
		{
			std::streampos alter_p = in.tellg();

			in >> token;
			if (!in.good())
			{
				in.clear();
				in.seekg(pos);
				return false;
			}
			if (token == '}')
			{
				break;
			}

			in.clear();
			in.seekg(alter_p);

			in >> buffer;
			if (!in.good())
			{
				in.clear();
				in.seekg(pos);
				return false;
			}
			if (!stricmp(buffer, "dir"))
			{
				if (!Direction.ParseFromFStream(in))
				{
					in.clear();
					in.seekg(pos);
					return false;
				}
			}
			else if (!stricmp(buffer, "color"))
			{
				if (!Color.ParseFromFStream(in))
				{
					in.clear();
					in.seekg(pos);
					return false;
				}
			}
			else
			{
				in.getline(buffer, 255);
			}
		}

		return true;
	}

}