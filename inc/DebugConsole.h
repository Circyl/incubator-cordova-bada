/*
 * DebugConsole.h
 *
 *  Created on: Mar 24, 2011
 *      Author: Anis Kadri
 */

#ifndef DEBUGCONSOLE_H_
#define DEBUGCONSOLE_H_

#include "CordovaCommand.h"

class DebugConsole: public CordovaCommand {
public:
	DebugConsole(Web* pWeb);
	virtual ~DebugConsole();
public:
	void Run(const String& command);
private:
	void CleanUp(String& str);
	void Log(String& statement, String& logLevel);
};

#endif /* DEBUGCONSOLE_H_ */
