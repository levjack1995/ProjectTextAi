#include <iostream>
#include <string>
#include <stdio.h>

#include <stdlib.h>
#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>
#include <boost/variant.hpp>
#include <mysql.h>
#include <mysql_connection.h>

#include "getdb.h"

using namespace std;
using namespace cgicc;

double antiPlagiarism(string text, string fragment);

int main()
{
    Cgicc form;
    string name;

    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Ggi Server</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<p>";

    name = form("name");
    if (!name.empty())
    {
        string text = "Experiments show how product pathways can be controlled by irradiation with one or more laser beams during individual bimolecular collisions or during unimolecular decompositions.For bimolecular collisions, control has been achieved by selective excitation of reagent vibrational modes, by control of reagent approach geometry, and by control of orbital alignment.For unimolecular reactions, control has been achieved by quantum interference between different reaction pathways connecting the same initial and final states and by adjusting the temporal shape and spectral content of ultrashort, chirped pulses of radiation.These collision-control experiments deeply enrich the understanding of how chemical reactions occur. The calculation of absolute reaction rates is formulated in terms of quantities which are available from the potential surfaces which can be constructed at the present time.The probability of the activated state is calculated using ordinary statistical mechanics.This probability multiplied by the rate of decomposition gives the specific rate of reaction.The occurrence of quantized vibrations in the activated complex, in degrees of freedom which are unquantized in the original molecules, leads to relative reaction rates for isotopes quite different from the rates predicted using simple kinetic theory.The necessary conditions for the general statistical treatment to reduce to the usual kinetic treatment are given. The main objective of the current study was to introduce a Deep Learning Neural Network (DLNN) model in landslide susceptibility assessments and compare its predictive performance with state-of-the-art machine learning modelsThe efficiency of the DLNN model was estimated for the Kon Tum Province, Viet Nam, an area characterized by the presence of landslide phenomena.Nine landslide related variables, elevation, slope angle, aspect, land use, normalized difference vegetation index, soil type, distance to faults, distance to geology boundaries,lithology cover, and 1,657 landslide locations, were used so as to produce the training and validation datasets during the landslide susceptibility assessment.The Frequency Ratio method was used so as to estimate the existing relation between the landslide-related variables and the presence of landslides, assigning to each variable class a weight value.Based on the results concerning the predictive ability of the landslide related variables which was evaluated using the Information ration method, all variables were further processed since they appear as highly predictive.The learning ability of the DLNN model has been evaluated and compared with a Multi Layer Preceptron Neural Network, a Support Vector Machine,a C4.5-Decision Tree model and a Random Forest model using the training dataset, whereas the predictive performance of each model has been evaluated and compared using the validation datasets.In order to evaluate their learning and predictive capacity of each model the classification accuracy, the sensitivity, the specificity and the area under the success and predictive rate curves (AUC) were calculated.Results showed that the proposed DLNN model had a higher performance than the four benchmark models. Although DLNN has been used seldom in landslide susceptibility assessmentthe study highlights that the usage of deep learning approach could be considered as a satisfactory alternative approach for landslide susceptibility mapping. Solar energy can be harnessed by direct conversion of solar energy to electrical energy by using photovoltaic (PV) technology or with the help of thermodynamic cycle by using concentrated solar power (CSP) technologies.The goal of this paper is to perform detailed comparative analysis for the two solar technologies namely: PV and dish Stirling engine (DSE).In order to ensure a fair comparison, the two systems are designed for the same rated capacity of 1 MW for Tabuk, Saudi Arabia.The average values of direct normal irradiance (DNI) and global horizontal irradiance (GHI) in Tabuk are 7.43 kWh/m2/day and 6.31 kWh/m2/day, respectively.The two technologies are analyzed based on several performance indicator factors such as capacity factor (CF), solar to electric efficiency, energy output, levelized electricity cost (LEC), and net present value (NPV).The comparative analysis of the two technologies shows that PV system has 6.9% better CF and 54% more energy output compared to DSE system.The LEC of PV systems is 3.39 �/kWh which is much better than the 11.74 �/kWh from the DSE system.The NPV of the PV system is positive while DSE system has negative NPV.\"This paper present useful insight of the two technologies which is helpful to choose a solar power technology for a power project.";

        cout << antiPlagiarism(text, name) << "\n";
    }
    else
    {
        cout << "Text is not provided!\n";
    }

    cout << "</p>\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}