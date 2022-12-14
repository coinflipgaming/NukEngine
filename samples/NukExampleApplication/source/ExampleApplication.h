#pragma once

#include <NukEngine/Application/NukApplication.h>

class ExampleApplication: public Nuk::NukApplication
{
public:
	ExampleApplication();
	~ExampleApplication();

	virtual void onInit();
	virtual void onQuit();
};