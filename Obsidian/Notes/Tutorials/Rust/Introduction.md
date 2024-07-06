
Let's get straight to the point:

# Functions:

```rust
fn stuff()->i32{
	return 0;
}
```

There are many return types: `i32`, `i64`, `f32`, `f64`, `String`, etc.

# Variables
```rust
let variable1 = 9;
let mut variableMut = 10;
```
`variable1` cannot be changed by default, and `variableMut` can be changed.

To assign actual data types,
```rust
let variable:i32 = 9;
let mut variableMut:i32 = 10;
```

# Inputting data
```rust
use io::std;
let mut input = String:new();
io::stdin()
	.read_line(&mut input)
```

# Displaying data
```rust
println!("This is some text with {} data", additiveData);
```
