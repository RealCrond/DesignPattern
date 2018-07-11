
#include "shape.h"
#include "idrawapi.h"

class CCircle : public CShape
{
public:
	CCircle( int x, int y, int radius, IDrawApi* drawApi);
	~CCircle();

	void Draw();


private:
	int m_x;
	int m_y;
	int m_radius;

};

