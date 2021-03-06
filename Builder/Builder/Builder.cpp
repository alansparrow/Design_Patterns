// Builder.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <list>
#include <string>

using namespace std;

class MovieBuilderBase
{
public:

	enum Scene { OPENING, EVENT, TWIST, ENDING };

	MovieBuilderBase() : __completeMovie(new list<string>), __eventCount(0), __twistCount(0) 
	{
		cout << __FUNCTION__ << endl;
	}

	virtual void MakeOpening() {}
	virtual void MakeEvent() {}
	virtual void MakeTwist() {}
	virtual void MakeEnding() {}

	const list<string>* GetMovie() const
	{
		return __completeMovie;
	}

	virtual ~MovieBuilderBase()
	{
		delete __completeMovie;
		cout << __FUNCTION__ << endl;
	}

protected:
	void _Make(const string& movieType, const Scene scene)
	{
		string script(movieType);

		switch (scene)
		{
		case Scene::OPENING:
			script += ": Opening";
			break;
		case Scene::EVENT:
			script += ": Event " + to_string(__eventCount++);
			break;
		case Scene::TWIST:
			script += ": Twist " + to_string(__twistCount++);
			break;
		case Scene::ENDING:
			script += ": Ending";
			break;
		default:
			break;
		}

		__completeMovie->push_back(script);
	}
private:
	list<string>* __completeMovie;
	int __eventCount;
	int __twistCount;
	
};

class ActionMovieBuilder : public MovieBuilderBase
{
public:
	ActionMovieBuilder() {}
	void MakeOpening() override
	{
		_Make("Action Movie", MovieBuilderBase::OPENING);
	}
	void MakeEvent() override
	{
		_Make("Action Movie", MovieBuilderBase::EVENT);
	}
	void MakeTwist() override
	{
		_Make("Action Movie", MovieBuilderBase::TWIST);
	}
	void MakeEnding() override
	{
		_Make("Action Movie", MovieBuilderBase::ENDING);
	}

};

class RomanticMovieBuilder : public MovieBuilderBase
{
public:
	RomanticMovieBuilder() {}
	void MakeOpening() override
	{
		_Make("Romantic Movie", MovieBuilderBase::OPENING);
	}
	void MakeEvent() override
	{
		_Make("Romantic Movie", MovieBuilderBase::EVENT);
	}
	void MakeTwist() override
	{
		_Make("Romantic Movie", MovieBuilderBase::TWIST);
	}
	void MakeEnding() override
	{
		_Make("Romantic Movie", MovieBuilderBase::ENDING);
	}
};

class MovieDirector
{
public:
	MovieDirector(MovieBuilderBase& movieBuilder) : _movieBuilder(movieBuilder) {}
	void Construct()
	{
		_movieBuilder.MakeOpening();
		_movieBuilder.MakeEvent();
		_movieBuilder.MakeEvent();
		_movieBuilder.MakeTwist();
		_movieBuilder.MakeEvent();
		_movieBuilder.MakeEnding();
	}
private:
	MovieBuilderBase& _movieBuilder;
};

static void Show(const list<string>* movie)
{
	for (const string str : *movie)
	{
		cout << str << endl;
	}

	cout << "----------" << endl;
}

static void Run()
{
	ActionMovieBuilder actionMovieBuilder;
	MovieDirector actionDirector(actionMovieBuilder);
	actionDirector.Construct();
	Show(actionMovieBuilder.GetMovie());

	RomanticMovieBuilder romanticMovieBuilder;
	MovieDirector romanticDirector(romanticMovieBuilder);
	romanticDirector.Construct();
	Show(romanticMovieBuilder.GetMovie());
}

int main()
{
	Run();

    return 0;
}

