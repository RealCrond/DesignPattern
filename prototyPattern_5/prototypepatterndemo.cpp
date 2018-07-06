/*****************************************************************************
 模块名      : 原型模式（Prototype Pattern）
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、资源优化场景。 
               2、类初始化需要消化非常多的资源，这个资源包括数据、硬件资源等。 
			   3、性能和安全要求的场景。 
			   4、通过 new 产生一个对象需要非常繁琐的数据准备或访问权限，则可以使用原型模式。 
			   5、一个对象多个修改者的场景。 
			   6、一个对象需要提供给其他对象访问，而且各个调用者可能都需要修改其值时，可以考虑使用原型模式拷贝多个对象供调用者使用。 
			   7、在实际项目中，原型模式很少单独出现，一般是和工厂方法模式一起出现，通过 clone 的方法创建一个对象，然后由工厂方法提供给调用者。原型模式已经与 Java 融为浑然一体，大家可以随手拿来使用。 
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/

#include <Windows.h>
#include "shapecache.h"
#include "shape.h"

int main(int argc,char* argv[])
{
	CShapeCache shapeCache;
	shapeCache.LoadCache();

	CShape* clonedShape = &shapeCache.GetShape("circle");
	if ( clonedShape != NULL )
	{
		printf("Shape: %s",clonedShape->GetId());
	}
	else
	{
		printf("clonedShape == NULL");
	}
	

	char a;
	a = getchar();
}