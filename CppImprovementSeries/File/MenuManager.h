#pragma once

#include "AbstractLevel.h"
#include "File.h"

namespace Menu {

class MenuManager
{
public:
	MenuManager();
public:
	void run();
private:
	void open();
	void close();
	void seek();
	void readInt();
	void readString();
	void readType();
	void writeInt();
	void writeString();
	void writeType();
	void getPosition();
	void getLength();
private:
	void createMenu();
	File::PositionType getPositionInput(const std::string& message);
	int getIntInput(const std::string& message);
	std::string getStringInput(const std::string& message);
	double getDoubleInput(const std::string& message);
	bool isFileNull() const;
private:
	AbstractLevelPtr mRoot;
	FilePtr mFile;
};

}