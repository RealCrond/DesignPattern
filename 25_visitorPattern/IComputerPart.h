
#pragma once

class IComputerPartVisitor;

class IComputerPart
{
public:
	virtual void Accept( IComputerPartVisitor* computerPartVisitor ) = 0;
	virtual char* ToString() = 0;
};


class IComputerPartVisitor
{
public:
	virtual void Visit(IComputerPart* computerpart) = 0;

};