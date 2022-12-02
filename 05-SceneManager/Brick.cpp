#include "Brick.h"
#include "Utils.h"

void CBrick::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + BRICK_BBOX_WIDTH;
	b = y + BRICK_BBOX_HEIGHT;

}
void CBrick::Render()
{
	animation_set->at(BRICK_ANI_IDLE)->Render(x, y);
	//RenderBoundingBox();
}