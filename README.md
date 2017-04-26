# zbash
A fork of Bash with handy features

**Modified Feature - Completion**
![Completion](/res/zbash-completion.gif)

## Introduction
Currently only the Completion feature is modified to be faster and more friendly (see [Usage](#Usage)). Other features will be added/enhanced. Ideas, code, issue reports are welcome.

## Installation
1. Build and install zbash

If you are OK with the default installation place /usr/local, then just:
```shell
./configure; make; sudo make install
```

Otherwise:
```shell
./configure --prefix=/your/preferred/dir; make; make install
```

2. Make sure the installed `bash` can be found ahead of the default or other `bash`. Type the following to verify:

```shell
which bash
```
or:
```shell
bash --version
```
Otherwise you'll need to adjust the environment variable $PATH or choose a different installation place.

3. Add settings in ~/.bashrc

```shell
[ ! -z "$PS1" ] && {
	# Menu-completion: cycle forward
	bind '"\ej":menu-complete'
	# Menu-completion: cycle backward
	bind '"\ek":menu-complete-backward'
	# Map TAB to complete
	bind "TAB:complete"
	# Turn off "list all possibilities as menu (if ambiguous)"
	bind "set show-all-if-ambiguous off"
	# Turn off "list all possibilities before cycling through the list"
	bind "set menu-complete-display-prefix off"

	# If using the hacked version (zbash)
	if [[ "${BASH_VERSION%zbash}" != "${BASH_VERSION}" ]]; then
		# The TAB complete (not menu-complete) will do the same
		# thing as show-all-if-ambiguous, and this only affects
		# TAB complete (not menu-complete), which is good (the
		# entries won't be listed a second time when doing menu
		# complete by Alt+J/Alt+K after a complete by TAB).
		export COMP_SHOW_ALL_IF_AMBIGUOUS=1
		# Highlight the common part when it is 1 char or longer.
		bind "set completion-prefix-display-length 1"
		# Grey background for the common part
		export COMP_PREFIX_COLOR_ESC_SEQ="ESC[48;5;251m"
	fi
}
```

## <a name="Usage"></a>Usage
The Completion:
* When there are only few items, it's convenient to use Alt+J (forward) and Alt+K (backward) to navigate to the wanted one. For example, if you want the last item, type Alt+K once. That's it! You don't need to type the first (few) char(s) and then hit Tab. Also, Alt is under the thumb of left hand, j/k are on the right-hand side - hopefully you find it convenient :-)
* If the items have a common part at the beginning, it will be highlighted so that you can quickly find the next char to type. Note that typing the next char is optional, you can still use Alt+J and Alt+K.
* In case you want to change the (background) color of the common part, you can modify the escape sequence of COMP\_PREFIX\_COLOR\_ESC\_SEQ (see above). You can find a quick reference to the color definitions by searching "SGR sequence" in `man grep`.

Enjoy!

Deng-Cheng Zhu

dengcheng(DOT)zhu(AT)gmail(DOT)com

## License
This software (zbash) is distributed under the [GPLv3 license](/LICENSE).
