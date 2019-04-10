#include <crowdsale.hpp>
ACTION crowdsale::hi( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO main();
ACTION crowdsale::main( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO transfer();
ACTION crowdsale::transfer( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO init();
ACTION crowdsale::init( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO setstart();
ACTION crowdsale::setstart( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO setfinish();
ACTION crowdsale::setfinish( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO white();
ACTION crowdsale::white( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO unwhite();
ACTION crowdsale::unwhite( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO whitemany();
ACTION crowdsale::whitemany( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO unwhitemany();
ACTION crowdsale::unwhitemany( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO finalize();
ACTION crowdsale::finalize( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO withdraw();
ACTION crowdsale::withdraw( name nm ) {
  print_f("Name : %\n", nm);
}

// TODO refund();
ACTION crowdsale::refund( name nm ) {
  print_f("Name : %\n", nm);
}

// FIXME
ACTION crowdsale::check( name nm ) {
  print_f("Name : %\n", nm);
  eosio::check(nm == "crowdsale"_n, "check name not equal to `crowdsale`");
}
