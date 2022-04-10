#include "Window.h"
Window::Window() {
  resolution = Vector2f(static_cast<float>(sf::VideoMode::getDesktopMode().width), static_cast<float>(sf::VideoMode::getDesktopMode().height));
  window.create(sf::VideoMode(static_cast<int>(resolution.GetX()), static_cast<int>(resolution.GetY())),
                            "Super Mega Game");
}
sf::RenderWindow& Window::GetWindow() {
  return window;
}

void Window::Clear() {
  window.clear(sf::Color::White);
}

void Window::Draw(const sf::CircleShape& obj) {
  window.draw(obj);
}

void Window::Display() {
  window.display();
}

bool Window::IsOpen() {
  return window.isOpen();
}

void Window::Close() {
  window.close();
}