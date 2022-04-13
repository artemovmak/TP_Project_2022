#include "Window.h"
Window::Window() {
  resolution = Vector2f(static_cast<float>(sf::VideoMode::getDesktopMode().width), static_cast<float>(sf::VideoMode::getDesktopMode().height));
  window.create(sf::VideoMode(static_cast<int>(resolution.GetX()), static_cast<int>(resolution.GetY())),
                            "Super Mega Game");
  window.setVerticalSyncEnabled(true);
  window.setKeyRepeatEnabled(false);
}
sf::RenderWindow& Window::GetWindow() {
  return window;
}

void Window::Clear() {
  window.clear(sf::Color::White);
}

void Window::DrawHex(Hex& obj, int i, int j) {
  HexGraphics graph(obj);
  graph.SetDrawPosition(i, j);
  window.draw(graph.GetHexTexture());
}

void Window::DrawUnit(Hex& obj, int i, int j) {
  if (obj.GetHexInterior() == Units) {
    UnitGraphics unit_graph(obj.GetUnit());
    unit_graph.SetPosition(static_cast<float>(j % 2 == 1 ? 75 : 50) + static_cast<float>(i) * 50.f,
                           50 + static_cast<float>(j) * 40.f);
    window.draw(unit_graph.GetSprite());
  }
}

void Window::Draw(const sf::Sprite &odj) {
  window.draw(odj);
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