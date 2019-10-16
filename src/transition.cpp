#include <map>

Transition::Transition(State source, State target, Event trigger){
  source_ = source;
  target_ = target;
  trigger_ = trigger;
}
