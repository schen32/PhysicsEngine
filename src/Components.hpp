#pragma once

#include "Animation.hpp"
#include "Assets.hpp"
#include "Vec2.hpp"

class Entity;

class CTransform
{
public:
	Vec2f pos = { 0.0, 0.0 };
	Vec2f prevPos = { 0.0, 0.0 };
	Vec2f scale = { 1.0f, 1.0f };
	Vec2f velocity = { 0.0, 0.0 };
	float angle = 0;

	CTransform() = default;
	CTransform(const Vec2f& p)
		: pos(p) {}
	CTransform(const Vec2f& p, const Vec2f& v)
		: pos(p), velocity(v) {}
	CTransform(const Vec2f& p, const Vec2f& v, float a)
		: pos(p), velocity(v), angle(a) {}
};

class CInput
{
public:
	bool up = false;
	bool left = false;
	bool right = false;
	bool down = false;

	CInput() = default;
};

class CHealth
{
public:
	int health = 0;
	int maxHealth = 0;

	CHealth() = default;
	CHealth(int h) : health(h), maxHealth(h) {}
};

class CDamage
{
public:
	int damage = 0;

	CDamage() = default;
	CDamage(int d) : damage(d) {}
};

class CBoundingBox
{
public:
	Vec2f size;
	Vec2f halfSize;

	CBoundingBox() = default;
	CBoundingBox(const Vec2f& s)
		: size(s), halfSize(s / 2) { }
};

class CAnimation
{
public:
	Animation animation;
	bool repeat = false;

	CAnimation() = default;
	CAnimation(const Animation& a, bool r)
		: animation(a), repeat(r) {}
};

class CState
{
public:
	std::string state = "none";

	CState() = default;
	CState(const std::string& s) : state(s) {}
};