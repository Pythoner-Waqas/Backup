#include <iostream>
using namespace std;

class Scene
{
	private:
	
	public:
		Scene()
		{
		cout << "Scene Feature Called"<<endl;	
		}	
};

class TitleScene
{

	private:
		Scene scene;
	public:
		TitleScene()
		{
		cout << "Title Scene Feature Called"<<endl;	
		}	
	
};

class StartScene
{

	private:
		Scene scene;
	public:
		StartScene()
		{
		cout << "Start Scene Feature Called"<<endl;	
		}	
};

class GameScene
{

	private:
		Scene scene;
	public:
		GameScene()
		{
		cout << "Game Scene Feature Called"<<endl;	
		}	
};

class EndScene
{

	private:
		Scene scene;
	public:
		EndScene()
		{
		cout << "End Scene Feature Called"<<endl;	
		}	
};

class GUIScene
{

	private:
		GameScene scene;
	public:
		GUIScene()
		{
		cout << "GUI Scene Feature Called"<<endl;	
		}	
};

class CUIScene
{

	private:
		GameScene scene;
	public:
		CUIScene()
		{
		cout << "CUI Scene Feature Called"<<endl;	
		}	
};

class UserInputScene
{

	private:
		GameScene scene;
	public:
		UserInputScene()
		{
		cout << "User Input Scene Feature Called"<<endl;	
		}	
};

class AllInputScene
{

	private:
		GameScene scene;
	public:
		AllInputScene()
		{
		cout << "All Input Scene Feature Called"<<endl;	
		}	
};


main()
{
	Scene s;
	cout << endl;
	TitleScene ts;
	cout << endl;
	StartScene ss;
	cout << endl;
	GameScene gs;
	cout << endl;
	EndScene es;
	cout << endl;
	GUIScene guis;
	cout << endl;
	CUIScene cs;
	cout << endl;
	UserInputScene us;
	cout << endl;
	AllInputScene aS;
	
}

