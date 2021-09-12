#include <bangtal>
using namespace bangtal;

bool door1_mouseCallback(ObjectPtr object, int x, int y, MouseAction action)
{
	endGame();
	return true;
}

int main()
{
	auto scene1 = Scene::create("룸1", "Images/배경-1.png");
	auto scene2 = Scene::create("룸2", "Images/배경-2.png");

	auto door1 = Object::create("Images/문-오른쪽-열림.png", scene1, 800, 270);

	door1->setOnMouseCallback(door1_mouseCallback);
	scene2->enter();

	startGame(scene1);

	return 0;
}