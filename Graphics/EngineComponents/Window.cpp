#include "Window.h"
Window::Window() {
  resolution = Vector2f(static_cast<float>(sf::VideoMode::getDesktopMode().width), static_cast<float>(sf::VideoMode::getDesktopMode().height));
  window.create(sf::VideoMode(static_cast<int>(resolution.GetX()), static_cast<int>(resolution.GetY())),
                            "Super Mega Game",
                            sf::Style::Fullscreen);
}
sf::RenderWindow& Window::GetWindow() {
  return window;
}
