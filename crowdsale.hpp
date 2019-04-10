#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT crowdsale : public contract {
 public:
  using contract::contract;

  ACTION hi( name nm );
  ACTION main( name nm );
  ACTION transfer( name nm );
  ACTION init( name nm );
  ACTION setstart( name nm );
  ACTION setfinish( name nm );
  ACTION white( name nm );
  ACTION unwhite( name nm );
  ACTION whitemany( name nm );
  ACTION unwhitemany( name nm );
  ACTION finalize( name nm );
  ACTION withdraw( name nm );
  ACTION refund( name nm );

  ACTION check( name nm );

  using hi_action = action_wrapper<"hi"_n, &crowdsale::hi>;
  using main_action = action_wrapper<"main"_n, &crowdsale::main>;
  using transfer_action = action_wrapper<"transfer"_n, &crowdsale::transfer>;
  using init_action = action_wrapper<"init"_n, &crowdsale::init>;
  using setstart_action = action_wrapper<"setstart"_n, &crowdsale::setstart>;
  using setfinish_action = action_wrapper<"setfinish"_n, &crowdsale::setfinish>;
  using white_action = action_wrapper<"white"_n, &crowdsale::white>;
  using unwhite_action = action_wrapper<"unwhite"_n, &crowdsale::unwhite>;
  using whitemany_action = action_wrapper<"whitemany"_n, &crowdsale::whitemany>;
  using unwhitemany_action = action_wrapper<"unwhitemany"_n, &crowdsale::unwhitemany>;
  using finalize_action = action_wrapper<"finalize"_n, &crowdsale::finalize>;
  using withdraw_action = action_wrapper<"withdraw"_n, &crowdsale::withdraw>;
  using refund_action = action_wrapper<"refund"_n, &crowdsale::refund>;

  using check_action = action_wrapper<"check"_n, &crowdsale::check>;
};
