#pragma once
#include <string>
#include <vector>

struct Status
{
	int mLevel{};
	int mHP{};
	int mMP{};

};

struct Item
{
	std::string mName{};
	int mGold;
};

class Monster
{
private:
	std::string mName{};
	Status mStatus{};
	std::vector<Item> mItems{};

public:
	void SetName(std::string name) { mName = name; }
	void SetStatus(const Status& status) { mStatus = status; }
	void AddDropItem(const Item& item) { mItems.push_back(item); }

	std::string GetName() const { return mName; }
	Status& GetStatus() { return mStatus; }

	std::vector<Item>& GetDropItems() { return mItems; }
};