// stdafx.h 
#pragma once


#define WIN32_LEAN_AND_MEAN		
#include <windows.h>
#include <share.h>
#include <stdio.h>
#include <direct.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include "d3d12.h"
#include "dxgi1_6.h"

using namespace std;

vector<byte> disassembler(vector<byte> buffer);