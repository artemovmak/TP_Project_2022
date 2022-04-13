#include "TextureLoad.h"

TextureLoad::TextureLoad() {
  farmer_graphics.loadFromFile("../Texture/man0_low.png");
  spearman_graphics.loadFromFile("../Texture/man0_low.png");
  knight_graphics.loadFromFile("../Texture/man0_low.png");
  advanced_knight_graphics.loadFromFile("../Texture/man0_low.png");
}

sf::Texture &TextureLoad::GetFarmerTexture() {
  return farmer_graphics;
}

sf::Texture &TextureLoad::GetSpearmanTexture() {
  return spearman_graphics;
}

sf::Texture &TextureLoad::GetKnightTexture() {
  return knight_graphics;
}

sf::Texture &TextureLoad::GetAdvancedKnightTexture() {
  return advanced_knight_graphics;
}