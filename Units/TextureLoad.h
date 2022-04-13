#include "Unit.h"

class TextureLoad {
private:
  sf::Texture farmer_graphics;
  sf::Texture spearman_graphics;
  sf::Texture knight_graphics;
  sf::Texture advanced_knight_graphics;
public:
  TextureLoad();
  ~TextureLoad() = default;
  sf::Texture& GetFarmerTexture();
  sf::Texture& GetSpearmanTexture();
  sf::Texture& GetKnightTexture();
  sf::Texture& GetAdvancedKnightTexture();
};