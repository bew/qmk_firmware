# Bew's Preonic layout - based on the default one for now

## Note when building with Nix

Build and flash are coupled together, it does not currently work to build _without_ sudo and flash with sudo.

This works:
```sh
sudo make distclean
sudo TERM=linux nix-shell
# then
make preonic/rev2:default:flash
```
Or without interactive shell:
```sh
sudo make distclean
sudo nix-shell --run "make preonic/rev2:default:flash"
```

Note: `sudo make distclean` is only necessary between non-sudo/sudo build trial, otherwise you'll get a build error, saying that `avr/io.h` is not found (for some odd reason..).
