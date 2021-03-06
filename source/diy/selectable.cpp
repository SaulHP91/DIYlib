#include <diy/selectable.hpp>
#include <diy/selector.hpp>
#include <diy/camera.hpp>

namespace diy
{

	Selectable::Selectable(void) :
		mSelector(0),
		mCreator(0),
		mEnabled(true),
		mSelected(false),
		mData(0),
		mOnMouseMove(0),
		mOnClick(0),
		mOnDoubleClick(0),
		mOnEnter(0),
		mOnMouseDown(0),
		mOnMouseUp(0),
		mOnExit(0),
		mOnEnterDrag(0),
		mOnDragMove(0),
		mOnDrop(0)
	{
		;
	}

	Selectable::~Selectable(void)
	{
		;
	}

	Selector* Selectable::GetSelector(void)
	{
		return mSelector;
	}

	void Selectable::SetEnabled(bool enabled)
	{
		mEnabled = enabled;
	}

	bool Selectable::GetEnabled(void)
	{
		return mEnabled;
	}

	glm::vec3 Selectable::GetIntersection(void)
	{
		return mIntersection;
	}

	bool Selectable::GetSelected(void)
	{
		return mSelected;
	}

	void Selectable::SetData(void* data)
	{
		mData = data;
	}

	void* Selectable::GetData(void)
	{
		return mData;
	}

	void Selectable::SetOnClick(SELECTABLE_ONCLICK_CALLBACK on_click)
	{
		mOnClick = on_click;
	}

	SELECTABLE_ONCLICK_CALLBACK Selectable::GetOnClick(void)
	{
		return mOnClick;
	}

	void Selectable::SetOnDoubleClick(SELECTABLE_ONDOUBLECLICK_CALLBACK on_double_click)
	{
		mOnDoubleClick = on_double_click;
	}

	SELECTABLE_ONDOUBLECLICK_CALLBACK Selectable::GetOnDoubleClick(void)
	{
		return mOnDoubleClick;
	}

	void Selectable::SetOnEnter(SELECTABLE_ONENTER_CALLBACK on_enter)
	{
		mOnEnter = on_enter;
	}

	SELECTABLE_ONENTER_CALLBACK Selectable::GetOnEnter(void)
	{
		return mOnEnter;
	}

	void Selectable::SetOnExit(SELECTABLE_ONEXIT_CALLBACK on_exit)
	{
		mOnExit = on_exit;
	}

	SELECTABLE_ONEXIT_CALLBACK Selectable::GetOnExit(void)
	{
		return mOnExit;
	}

	void Selectable::SetOnMouseDown(SELECTABLE_ONMOUSEDOWN_CALLBACK on_mouse_down)
	{
		mOnMouseDown = on_mouse_down;
	}

	SELECTABLE_ONMOUSEDOWN_CALLBACK Selectable::GetOnMouseDown(void)
	{
		return mOnMouseDown;
	}

	void Selectable::SetOnMouseMove(SELECTABLE_ONMOUSEMOVE_CALLBACK on_mouse_move)
	{
		mOnMouseMove = on_mouse_move;
	}

	SELECTABLE_ONMOUSEMOVE_CALLBACK Selectable::GetOnMouseMove(void)
	{
		return mOnMouseMove;
	}

	void Selectable::SetOnMouseUp(SELECTABLE_ONMOUSEUP_CALLBACK on_mouse_up)
	{
		mOnMouseUp = on_mouse_up;
	}

	SELECTABLE_ONMOUSEUP_CALLBACK Selectable::GetOnMouseUp(void)
	{
		return mOnMouseUp;
	}

	void Selectable::SetOnEnterDrag(SELECTABLE_ONENTERDRAG_CALLBACK on_enter_drag)
	{
		mOnEnterDrag = on_enter_drag;
	}

	SELECTABLE_ONENTERDRAG_CALLBACK Selectable::GetOnEnterDrag(void)
	{
		return mOnEnterDrag;
	}

	void Selectable::SetOnDragMove(SELECTABLE_ONDRAGMOVE_CALLBACK on_drag_move)
	{
		mOnDragMove = on_drag_move;
	}

	SELECTABLE_ONDRAGMOVE_CALLBACK Selectable::GetOnDragMove(void)
	{
		return mOnDragMove;
	}

	void Selectable::SetOnDrop(SELECTABLE_ONDROP_CALLBACK on_drop)
	{
		mOnDrop = on_drop;
	}

	SELECTABLE_ONDROP_CALLBACK Selectable::GetOnDrop(void)
	{
		return mOnDrop;
	}

}
