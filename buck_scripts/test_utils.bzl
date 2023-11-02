def assert_output(name, command, output):
    return native.genrule(
        name = name,
        bash = command + " | grep \"" + output + "\" && touch \"$OUT\"",
        cmd_exe = command + " | findstr \"" + output + "\" && type nul > \"$OUT\"",
        out = "out.txt",
    )