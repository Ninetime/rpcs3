#pragma once

#ifdef HAVE_SDL3

#include <mutex>

struct sdl_instance
{
public:
	sdl_instance() = default;
	~sdl_instance();

	static sdl_instance& get_instance();

	bool initialize();
	void pump_events();

private:
	void set_hint(const char* name, const char* value);

	bool m_initialized = false;
	std::mutex m_instance_mutex;
};

#endif
