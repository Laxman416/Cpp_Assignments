// PHYS 30762 Programming in C++
// Assignment 5
// ElectronNeutrino Class implementation

#include<iostream>
#include "ElectronNeutrino.h"

void ElectronNeutrino::print_data() const
{
  // // need to use getters from Lepton and Charged Lepton
  std::cout<<"Print Data for "<<this->get_name()<<": "<<std::endl;
  std::cout<<"\tCharge is: "<<this->get_charge()<<std::endl;
  std::cout<<"\tRest Mass is: "<<this->get_rest_mass()<<" MeV"<<std::endl;
  std::cout<<"\tThe particle "<<(m_has_interacted ? "has" : "has not")<<" interacted"<<std::endl;
  // Call print_data() function on the four_momentum_ptr object
  if(four_momentum_ptr != nullptr) 
  {
    four_momentum_ptr->print_data();
  } 
  else 
  {
    std::cout<<"Four Momentum Data not available"<<std::endl;
  }
}
void ElectronNeutrino::set_rest_mass(double particle_mass)
{
  // Particle mass can't be changed in Muon neutrino
  std::cerr<<"Error: Electron neutrino has a fixed mass and cannot be changed."<<std::endl;
  std::cerr<<"Create a ChargedLepton object if u want an object with mass that can be modified"<<std::endl;
  std::cerr<<"Error: Rest mass of particle not updated."<<std::endl;    
}

void ElectronNeutrino::set_name(std::string particle_name)
{
  // Particle mass can't be changed in Muon neutrino
  std::cerr<<"Error: Electron neutrino particle can not be changed."<<std::endl;
  std::cerr<<"Create a ChargedLepton object if u want an object with a name that can be modified"<<std::endl;
  std::cerr<<"Error: Name of particle not updated."<<std::endl;    
}

void ElectronNeutrino::set_is_antiparticle(bool is_antiparticle)
{
  if(this->m_is_antiparticle == is_antiparticle)
  {
    std::cerr<<"Error: Electron neutrino is already in desired state."<<std::endl;
    std::cerr<<"Error: Particle not updated."<<std::endl;    
  }
  else
  {
    this->m_is_antiparticle = is_antiparticle;
    this->name = (m_is_antiparticle ? "Electron Antineutrino":"Electron neutrino");
    std::cerr<<"Particle updated. The name, and boolean data members are modified."<<std::endl;    
  }
}
