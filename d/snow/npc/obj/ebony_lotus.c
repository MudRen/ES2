// ebony_lotus.c

inherit ITEM;
inherit F_FOOD;

int eat_tonic()
{
	// todo 吃补品的实现
	return 1;
}

void create()
{
	set_name("乌雪莲", ({ "ebony lotus", "lotus" }) );
	set_weight(90);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",
			"这是一种生长在高山冰雪之中的珍贵药材，据说对修炼内功的\n"
			"武林人士颇有帮助。\n");
		set("unit", "块");
		set("value", 30000);
		set("food_remaining", 1);
		set("eat_func", (: eat_tonic :) );
		set("tonic", ([ "force": 60, "max_force": 2000 ]) );
		set("food_supply", 100);
	}
}
