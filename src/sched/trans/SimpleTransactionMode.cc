/*
 * SimpleTransactionMode.cc
 *
 * Created on: Jun 11, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#include <trans-dsl/sched/trans/SimpleTransactionMode.h>

TSL_NS_BEGIN

/////////////////////////////////////////////////////////////////////
SimpleTransactionMode::SimpleTransactionMode()
   : safeMode(false)
{}

/////////////////////////////////////////////////////////////////////
void SimpleTransactionMode::enterSafeMode()
{
   safeMode = true;
}

/////////////////////////////////////////////////////////////////////
void SimpleTransactionMode::leaveSafeMode()
{
   safeMode = false;
}

/////////////////////////////////////////////////////////////////////
bool SimpleTransactionMode::inSafeMode() const
{
   return safeMode;
}

TSL_NS_END

