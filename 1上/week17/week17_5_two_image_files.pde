PImage img, img2, imgBG;
void setup()
{
  size(400,400);
  imgBG = loadImage("BG.png");
  img = loadImage("astro.png");
  img2 = loadImage("image.png");
}

void draw()
{
  imageMode(CENTER);
  image(imgBG, 0, 0);
  image(img2, 100, 100);
  image(img, mouseX, mouseY);
}
