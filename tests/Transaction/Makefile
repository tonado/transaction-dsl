include $(HOME)/project/trans-dsl/shared/ut.mk

test-filter=#-f "safe?mode:*stop*"
tags=-t "throw > seq"

extra-srcs = trans-dsl/sched/action/Procedure.cc \
             trans-dsl/sched/action/Finally.cc \
             trans-dsl/sched/action/NilFinalAction.cc \
             trans-dsl/sched/action/LinkedSchedAction.cc \
             trans-dsl/sched/action/SchedSequentialAction.cc \
             trans-dsl/sched/action/SchedThrowAction.cc \
             trans-dsl/sched/action/SchedActionAdapter.cc \
             trans-dsl/sched/action/SchedVoidAction.cc \
             trans-dsl/sched/action/SchedWaitAction.cc \
             trans-dsl/sched/action/SchedPeekAction.cc \
             trans-dsl/sched/action/SchedSwitchCaseAction.cc \
             trans-dsl/sched/action/SchedConcurrentAction.cc \
             trans-dsl/sched/action/SchedLoopAction.cc \
             trans-dsl/sched/action/SchedSafeAction.cc \
             trans-dsl/sched/action/SchedSafeModeAction.cc \
             trans-dsl/sched/action/SchedWithIdAction.cc \
             trans-dsl/sched/action/ActionThread.cc \
             trans-dsl/sched/action/SchedTimerProtAction.cc \
             trans-dsl/sched/trans/SimpleRuntimeContextInfo.cc \
             trans-dsl/sched/trans/SimpleTransactionInfo.cc \
             trans-dsl/sched/trans/SimpleTransactionMode.cc \
             trans-dsl/sched/trans/SchedTransaction.cc \
             trans-dsl/sched/trans/BaseTransactionScheduler.cc \
             trans-dsl/sched/trans/SimpleTransactionScheduler.cc \
             trans-dsl/sched/trans/SimpleTransactionContext.cc \
             trans-dsl/sched/trans/TransactionListenerProxy.cc \
             trans-dsl/sched/trans/TransMutexSchedulerAdapter.cc \
             trans-dsl/action/SimpleAsyncAction.cc \
             trans-dsl/action/SyncActionAdapter.cc \
             trans-dsl/utils/ActionStatus.cc  \
             trans-dsl/utils/RelativeTimer.cc  \
             trans-dsl/utils/RuntimeContextAutoSwitch.cc \
             trans-dsl/utils/SimpleRuntimeContext.cc \
             trans-dsl/utils/AdaptedTimerInfo.cc  \
             trans-dsl/utils/StopCause.cc  \
             trans-dsl/utils/EventHandlerRegistry.cc  \
             trans-dsl/sched/port/PlatformSpecifiedRelativeTimer.cc  \
             trans-dsl/ext/mutex/action/SchedLockAction.cc  \
             trans-dsl/ext/mutex/impl/AbstractTransMutexScheduler.cc  \
             $(event-src)/event/concept/Event.cc \
             $(event-src)/event/impl/BaseEventInfo.cc \
             $(event-src)/event/impl/ConsecutiveEventInfo.cc \
             $(event-src)/event/impl/SimpleEventInfo.cc 
             

include $(HOME)/project/trans-dsl/shared/rules.mk
