#include <plog\Log.h>
#include <plog\Appenders\ColorConsoleAppender.h>
#include <plog\Appenders\DebugOutputAppender.h>

int main()
{
	static plog::ColorConsoleAppender<plog::TxtFormatter> console_appender;
	plog::init(plog::verbose, &console_appender);

	static plog::DebugOutputAppender<plog::TxtFormatter> dbgview_appender;
	plog::init(plog::verbose, &dbgview_appender);

	LOG_VERBOSE << "This is a VERBOSE message";
	LOG_DEBUG << "This is a DEBUG message";
	LOG_INFO << "This is an INFO message";
	LOG_WARNING << "This is a WARNING message";
	LOG_ERROR << "This is an ERROR message";
	LOG_FATAL << "This is a FATAL message";

	return 0;
}
