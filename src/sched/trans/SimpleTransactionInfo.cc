/*
 * SimpleTransactionInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include <trans-dsl/sched/trans/SimpleTransactionInfo.h>
#include "trans-dsl/sched/concept/RuntimeContext.h"
#include "trans-dsl/sched/concept/RuntimeContextInfo.h"
#include "trans-dsl/utils/ActionStatus.h"

TSL_NS_BEGIN

/////////////////////////////////////////////////////////////////
SimpleTransactionInfo::SimpleTransactionInfo(InstanceId iid)
  : iid(iid)
  , userContext(0)
{
}

/////////////////////////////////////////////////////////////////
InstanceId SimpleTransactionInfo::getInstanceId() const
{
   return iid;
}

void SimpleTransactionInfo::updateInstanceId(InstanceId iid)
{
   this->iid = iid;
}

/////////////////////////////////////////////////////////////////
cub::Status SimpleTransactionInfo::getStatus() const
{
   RuntimeContext* context = ROLE(RuntimeContextInfo).getRuntimeContext();
   if(context == 0)
   {
      return TSL_SUCCESS;
   }

   if(ActionStatus(context->getStatus()).isFailed())
   {
      return context->getStatus();
   }

   return TSL_SUCCESS;
}

/////////////////////////////////////////////////////////////////
UserContext* SimpleTransactionInfo::getUserContext() const
{
   return userContext;
}

/////////////////////////////////////////////////////////////////
void SimpleTransactionInfo::updateUserContext(UserContext* userContext)
{
   this->userContext = userContext;
}

TSL_NS_END

