#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:AForm(0, 145, 137, "ShrubberyCreationForm")
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

bool	ShrubberyCreationForm::executeTheForm() const
{
	std::ofstream out((char *)(&(this->getTarget() + "_shrubbery")[0]), std::ofstream::out | std::ofstream::app);
	if (out.fail())
	{
		std::cerr << "Failed to execute the AForm\n";
		return (0);
	}
	out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠟⠻⢶⣀⣠⣽⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣠⡀⠀⠀⠀⢿⣅⠀⠀⠀⠀⠉⠉⠹⣧⠀⠀⣀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠟⠉⠉⠛⣷⡤⠴⢾⣁⡀⠀⠀⠀⠀⠀⠀⠹⡧⠛⠉⠛⠛⢷⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠉⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠈⢻⣆⣤⣀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢶⡟⢹⣧⣀⡄⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⢀⣠⡴⠟⠈⠉⠙⠷⠶⣶⣆⠀⣠⣽⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣠⣤⣤⠶⣶⡟⢁⣼⠁⠉⠓⠚⠉⣿⣀⠀⠀⠀⠀⠀⠀⠀\n⢀⣾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠈⠛⠚⠁⠀⠀⠀⠀⠀⠀⣀⠀⠀⢀⡼⠋⠀⠀⠁⠀⠀⠀⠙⠉⠀⠀⠀⠀⠀⠀⢀⡽⠀⠀⠀⠀⠀⠀⠀\n⢾⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⢸⣳⣼⣿⢠⣰⡟⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⢴⣖⠀⠀⠀⠀⠀\n⢀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠋⠿⢾⡆⠀⢳⣿⠈⡷⢯⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀\n⢸⣿⡀⠀⢀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣾⠿⡄⢀⠎⢘⠛⡿⢧⣤⣤⣦⠄⠀⣤⡄⠀⠀⠀⠀⢠⣤⢤⡤⣞⡥⣶⣄⣀⠀⠀\n⠀⠸⣷⣤⣾⣷⣀⣀⣿⣷⣠⣴⣤⡀⠀⠐⠒⠋⠀⠈⠳⣷⢤⡀⡎⢸⠁⠀⠈⡇⡍⠀⢠⣷⣷⣂⡤⠄⠀⠈⠛⠳⠷⠟⠀⠀⠀⠘⠋⣿\n⠀⠀⠀⠀⠀⠈⠛⢿⣯⡉⠉⣠⠏⠀⠐⣶⠆⠀⢀⣠⣤⡌⢲⠙⠃⣾⠀⠀⡼⣰⠓⢊⣡⠷⢯⡑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿\n⠀⠀⠀⠀⢀⣀⣠⡼⠉⠙⠷⠃⠀⠀⡴⢡⠔⠚⠉⠀⠘⣿⡠⠖⢻⢮⠀⠀⠀⠀⣾⣩⣀⣄⣀⡱⠘⠓⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸\n⠀⠀⠀⠰⡿⠍⠁⠀⠀⠀⠀⠀⠀⠈⠴⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⢛⡆⢸⢨⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⠉\n⠀⠀⠀⠀⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣠⠞⠁⠃⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⣶⢞⠛⠛⠃⠀⠀\n⠀⠀⠀⠀⠈⠙⠛⣷⣠⠀⠀⠀⢀⣷⣀⠀⠀⠀⠀⢠⣤⠾⠚⠛⣧⠀⠀⢀⡼⢦⣴⠛⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢛⡿⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠈⠿⠷⠶⠾⠻⡭⠟⠀⠀⠀⠀⢠⣉⣷⠀⠀⡏⠀⠀⣞⠀⠀⠀⠸⣏⡀⠀⠀⠀⠀⠀⠀⡶⠶⠶⠒⠾⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠴⠶⠴⠴⠷⠾⠉⠁⠀⢠⡇⠀⠀⢸⠀⠀⠀⠀⠈⠙⠛⣦⣠⠤⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠋⠀⠀⠀⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠟⠻⢶⣀⣠⣽⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣠⡀⠀⠀⠀⢿⣅⠀⠀⠀⠀⠉⠉⠹⣧⠀⠀⣀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠟⠉⠉⠛⣷⡤⠴⢾⣁⡀⠀⠀⠀⠀⠀⠀⠹⡧⠛⠉⠛⠛⢷⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠉⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠈⢻⣆⣤⣀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢶⡟⢹⣧⣀⡄⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⢀⣠⡴⠟⠈⠉⠙⠷⠶⣶⣆⠀⣠⣽⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣠⣤⣤⠶⣶⡟⢁⣼⠁⠉⠓⠚⠉⣿⣀⠀⠀⠀⠀⠀⠀⠀\n⢀⣾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠈⠛⠚⠁⠀⠀⠀⠀⠀⠀⣀⠀⠀⢀⡼⠋⠀⠀⠁⠀⠀⠀⠙⠉⠀⠀⠀⠀⠀⠀⢀⡽⠀⠀⠀⠀⠀⠀⠀\n⢾⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⢸⣳⣼⣿⢠⣰⡟⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⢴⣖⠀⠀⠀⠀⠀\n⢀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠋⠿⢾⡆⠀⢳⣿⠈⡷⢯⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀\n⢸⣿⡀⠀⢀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣾⠿⡄⢀⠎⢘⠛⡿⢧⣤⣤⣦⠄⠀⣤⡄⠀⠀⠀⠀⢠⣤⢤⡤⣞⡥⣶⣄⣀⠀⠀\n⠀⠸⣷⣤⣾⣷⣀⣀⣿⣷⣠⣴⣤⡀⠀⠐⠒⠋⠀⠈⠳⣷⢤⡀⡎⢸⠁⠀⠈⡇⡍⠀⢠⣷⣷⣂⡤⠄⠀⠈⠛⠳⠷⠟⠀⠀⠀⠘⠋⣿\n⠀⠀⠀⠀⠀⠈⠛⢿⣯⡉⠉⣠⠏⠀⠐⣶⠆⠀⢀⣠⣤⡌⢲⠙⠃⣾⠀⠀⡼⣰⠓⢊⣡⠷⢯⡑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿\n⠀⠀⠀⠀⢀⣀⣠⡼⠉⠙⠷⠃⠀⠀⡴⢡⠔⠚⠉⠀⠘⣿⡠⠖⢻⢮⠀⠀⠀⠀⣾⣩⣀⣄⣀⡱⠘⠓⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸\n⠀⠀⠀⠰⡿⠍⠁⠀⠀⠀⠀⠀⠀⠈⠴⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⢛⡆⢸⢨⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⠉\n⠀⠀⠀⠀⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣠⠞⠁⠃⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⣶⢞⠛⠛⠃⠀⠀\n⠀⠀⠀⠀⠈⠙⠛⣷⣠⠀⠀⠀⢀⣷⣀⠀⠀⠀⠀⢠⣤⠾⠚⠛⣧⠀⠀⢀⡼⢦⣴⠛⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢛⡿⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠈⠿⠷⠶⠾⠻⡭⠟⠀⠀⠀⠀⢠⣉⣷⠀⠀⡏⠀⠀⣞⠀⠀⠀⠸⣏⡀⠀⠀⠀⠀⠀⠀⡶⠶⠶⠒⠾⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠴⠶⠴⠴⠷⠾⠉⠁⠀⢠⡇⠀⠀⢸⠀⠀⠀⠀⠈⠙⠛⣦⣠⠤⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠋⠀⠀⠀⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠟⠻⢶⣀⣠⣽⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣠⡀⠀⠀⠀⢿⣅⠀⠀⠀⠀⠉⠉⠹⣧⠀⠀⣀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠟⠉⠉⠛⣷⡤⠴⢾⣁⡀⠀⠀⠀⠀⠀⠀⠹⡧⠛⠉⠛⠛⢷⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠉⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠈⢻⣆⣤⣀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢶⡟⢹⣧⣀⡄⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⢀⣠⡴⠟⠈⠉⠙⠷⠶⣶⣆⠀⣠⣽⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣠⣤⣤⠶⣶⡟⢁⣼⠁⠉⠓⠚⠉⣿⣀⠀⠀⠀⠀⠀⠀⠀\n⢀⣾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠈⠛⠚⠁⠀⠀⠀⠀⠀⠀⣀⠀⠀⢀⡼⠋⠀⠀⠁⠀⠀⠀⠙⠉⠀⠀⠀⠀⠀⠀⢀⡽⠀⠀⠀⠀⠀⠀⠀\n⢾⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⢸⣳⣼⣿⢠⣰⡟⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⢴⣖⠀⠀⠀⠀⠀\n⢀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠋⠿⢾⡆⠀⢳⣿⠈⡷⢯⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀\n⢸⣿⡀⠀⢀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣾⠿⡄⢀⠎⢘⠛⡿⢧⣤⣤⣦⠄⠀⣤⡄⠀⠀⠀⠀⢠⣤⢤⡤⣞⡥⣶⣄⣀⠀⠀\n⠀⠸⣷⣤⣾⣷⣀⣀⣿⣷⣠⣴⣤⡀⠀⠐⠒⠋⠀⠈⠳⣷⢤⡀⡎⢸⠁⠀⠈⡇⡍⠀⢠⣷⣷⣂⡤⠄⠀⠈⠛⠳⠷⠟⠀⠀⠀⠘⠋⣿\n⠀⠀⠀⠀⠀⠈⠛⢿⣯⡉⠉⣠⠏⠀⠐⣶⠆⠀⢀⣠⣤⡌⢲⠙⠃⣾⠀⠀⡼⣰⠓⢊⣡⠷⢯⡑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿\n⠀⠀⠀⠀⢀⣀⣠⡼⠉⠙⠷⠃⠀⠀⡴⢡⠔⠚⠉⠀⠘⣿⡠⠖⢻⢮⠀⠀⠀⠀⣾⣩⣀⣄⣀⡱⠘⠓⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸\n⠀⠀⠀⠰⡿⠍⠁⠀⠀⠀⠀⠀⠀⠈⠴⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⢛⡆⢸⢨⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⠉\n⠀⠀⠀⠀⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣠⠞⠁⠃⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⣶⢞⠛⠛⠃⠀⠀\n⠀⠀⠀⠀⠈⠙⠛⣷⣠⠀⠀⠀⢀⣷⣀⠀⠀⠀⠀⢠⣤⠾⠚⠛⣧⠀⠀⢀⡼⢦⣴⠛⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢛⡿⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠈⠿⠷⠶⠾⠻⡭⠟⠀⠀⠀⠀⢠⣉⣷⠀⠀⡏⠀⠀⣞⠀⠀⠀⠸⣏⡀⠀⠀⠀⠀⠀⠀⡶⠶⠶⠒⠾⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠴⠶⠴⠴⠷⠾⠉⠁⠀⢠⡇⠀⠀⢸⠀⠀⠀⠀⠈⠙⠛⣦⣠⠤⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠋⠀⠀⠀⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	return (1);
};

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}