//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	return 0;
}

Action()
{
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/#/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on SPEAKERS", "snapshot=Action_2.inf");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	truclient_step("4", "Click on ADD TO CART button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on CHECKOUT ($200.00) button", "snapshot=Action_5.inf");
	truclient_step("7", "Click on button (1) button", "snapshot=Action_7.inf");
	truclient_step("9", "Click on REMOVE", "snapshot=Action_9.inf");
	truclient_step("10", "Click on CONTINUE SHOPPING link", "snapshot=Action_10.inf");

	return 0;
}

vuser_end()
{
	return 0;
}
