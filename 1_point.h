
#ifndef CHAPTER_7_1_POINT_H
#define CHAPTER_7_1_POINT_H
class Point{
public:
	Point(float x, float y);

	void deplacer(float MoveX, float MoveY);
	void afficher() const;

private:
	float coordonneeX;
	float coordonneeY;
};
#endif //CHAPTER_7_1_POINT_H
