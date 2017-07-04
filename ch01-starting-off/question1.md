### Expressions and types they evaluate to

`17` => `17: type int`

`1 + 2 * 3 + 4` => `11: type int`

`800 / 80 / 8` => `1: type int`

`400 > 200` => `true: type bool`

`1 != 1` => `false: type bool`

`true || false` => `true: type bool`

`true && false` => `false: type bool`

`if true { false } else { true }` => `false: type bool`

`'%'` => `'%': type char`

`'a' + 'b'` => Will Not Compile, expects int not char.