#pragma once

#include <functional>
#include <unordered_map>
#include <vector>
#include <string>

class EventBus
{
	using Callback = std::function<void(void*)>;
public: 

	template<typename T>
	void subscribe(const std::string& eventName, std::function<void(const T&)> callback)
	{
		subscribers[eventName].push_back(
			[callback](void* data) {
				callback(*static_cast<const T*>(data));
			}
		);
	}

	template <typename T>
	void publish(const std::string eventName, const T& data)
	{
		auto it = subscribers.find(eventName);
		if (it != subscribers.end())
		{
			for (auto& cb : it->second)
			{
				cb((void*)&data);
			}
		}
	}

private:
	std::unordered_map<std::string, std::vector<Callback>> subscribers;
	
	
};