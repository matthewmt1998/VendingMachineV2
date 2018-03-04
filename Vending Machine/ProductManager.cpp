#include "stdafx.h"
#include "ProductManager.h"


ProductManager::ProductManager()
{
	Product P1 = Product().ProdId("Coca_Cola_ID").ProdName("Coca Cola").ProdVal(150).ProdDesc("A Classic Refreshing Taste");
	Products.push_back(P1);
	Product P2 = Product().ProdId("Sprite_ID").ProdName("Sprite").ProdVal(130).ProdDesc("A Refreshing Lemonade");
	Products.push_back(P2);
	Product P3 = Product().ProdId("Pespi_ID").ProdName("Pepsi").ProdVal(150).ProdDesc("Great Tasting Refreshment");
	Products.push_back(P3);
	Product P4 = Product().ProdId("Diet_Coke_ID").ProdName("Diet Coke").ProdVal(125).ProdDesc("Coke... But Diet..");
	Products.push_back(P4);
	Product P5 = Product().ProdId("Pespi_Max_ID").ProdName("Pespi Max").ProdVal(175).ProdDesc("Better than Normal");
	Products.push_back(P5);
	Product P6 = Product().ProdId("Diet_Sprite_ID").ProdName("Diet Sprite").ProdVal(0).ProdDesc("Sprite Diet...");
	Products.push_back(P6);
}


ProductManager::~ProductManager()
{
}