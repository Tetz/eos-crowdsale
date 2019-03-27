#include <eosiolib/eosio.hpp>

using namespace eosio;

class [[eosio::contract("crowdsale")]] crowdsale : public contract {
 public:
  using contract::contract;

  [[eosio::action]]
    void init( name user ) {
    print( "Crowdsale, ", user);
  }

  [[eosio::action]]
    void check( name user ) {
    print( "Check, ", user);
  }

};

EOSIO_DISPATCH( crowdsale, (init)(check) )

