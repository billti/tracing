# Simple DTrace demo

This app shows how to create a simple DTrace probe and listen to it.

This has been tested to work on macOS (10.14.4).

The Makefile shows how this is built using the DTrace command to generate the
header to include.

Run the app, then start listening with: `sudo dtrace -q -s listener.d`. When
done use `CTRL+C` to stop the listener.

Note: If no app that emits the probes is running yet, the command above will
immediately fail with something like:

 `dtrace: failed to compile script...does not match any probes`

Also note the DTrace in macOS is limited by the system quite a bit compared to
other platforms due to System Integrity Protection. (You'll get lots of warnings
as you run commands). See https://apple.stackexchange.com/questions/193368/what-is-the-rootless-feature-in-el-capitan-really/208185#208185

## Credits
The walkthrough at https://www.objc.io/issues/19-debugging/dtrace/ was helpful
in getting this working.
