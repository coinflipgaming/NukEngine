#include "NukEngine/Application/NukApplication.h"
#include <stdexcept>
using namespace Nuk;

NukApplication* NukApplication::m_instance = nullptr;

Nuk::NukApplication::NukApplication() {
	if (!m_instance) {
		m_instance = this;
	}
	else {
		throw std::runtime_error("NukApplication already created");
	}
}
Nuk::NukApplication::~NukApplication() {

}
void NukApplication::run() {

}
void NukApplication::quit() {

}
NukApplication* Nuk::NukApplication::get() {
	return m_instance;
}