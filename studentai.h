#ifndef STUDENTAI_H
#define STUDENTAI_H

#include <string>
#include <vector>

struct mokinys
{
	std::string vardas;
	std::string pavarde;
	std::vector<double> paz;
	double egz;
	double galBal;
};
double vidurkissk(std::vector<double>&);
double mediana(std::vector<double>&);
void outputcons(std::string, std::string, std::vector<double>&, double);
void outputfile(std::vector<mokinys>&, std::vector<mokinys>&, std::vector<mokinys>&);
void generavimasfailo(int&);
#endif // !STUDENTAI_H
