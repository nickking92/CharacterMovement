#include <iostream>
#include "Vector.h"

int main()
{

    ///////////////////////////////////////////////////////////////////////
	//"Move player"
	//Player::Point p;
	//p.x = 1; //(1,0)
	//p.y = 0;

	//Player::Vector v;//(2,3)
	//v.x = 2;
	//v.y = 3;
	//Player::Point p2 = p.AddVector(v);
	//std::cout << "Result are x is (" << p2.x <<" and y is " << p2.y << ")\n";
	///////////////////////////////////////////////////////////////////
	// Move enemy to player
	//Player::Point player; //(0,-1)
	//player.x = 0;
	//player.y = -1;
	//Player::Point enemy{}; //(1,1)
	//enemy.x = 1;
	//enemy.y = 1;

	//Player::Point enemy2{}; //(2,-1)
	//enemy2.x = 2;
	//enemy2.y = -1;
	//Player::Vector vDistance = player - enemy;
	//Player::Vector vDistance2 = player - enemy2;
	////Distance between player and enemy
	//float distanceBetween = vDistance.LengthSqrt();
	//float distanceBetween2 = vDistance2.LengthSqrt();
	//std::cout << "Enemy need to move  on x by" << vDistance.x << "and onb the y by" << vDistance.y <<
	//" to reach player and distance between them is "<<distanceBetween<< std::endl;
	//std::cout << "Enemy2 need to move  on x by" << vDistance2.x << "and onb the y by" << vDistance2.y <<
	//	" to reach player and distance between them is " << distanceBetween2 << std::endl;
	/////////////////////////////////////////////////////////////////////////////////
	//Player speed increase and decrease
	/*Player::Vector v(3, 4);
	std::cout << "Player initial speed" << v.Length() << std::endl;
	Player::Vector doubled;
	doubled = v * 2;
	std::cout << "Player doubled speed" << doubled.Length() << std::endl;
	Player::Vector halved;
	halved = v / 2;
	std::cout << "Player halved speed" << halved.Length() << std::endl;*/
	/////////////////////////////////////////////////////////////////////////
	//where is player looking
	/*Player::Point e(3, 4);
	Player::Point p(1, 2);
	Player::Vector pe = e - p;
	Player::Vector normalized = pe.Normalized();
	std::cout << "Players view vector" << normalized.x << ", " << normalized.y << ")\n";
	std::cout << "Players view vector length" << normalized.Length()<<"\n";*/
	//////////
	//Move player diagonally
	Player::Vector r(4, 0);
	Player::Vector d(0, -5);

	Player::Vector dg = r + d;
	std::cout<<"Players new velocity is" <<dg.x <<" and" <<dg.y<<std::endl;


	

}