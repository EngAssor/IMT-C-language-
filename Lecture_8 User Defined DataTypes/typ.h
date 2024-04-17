typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long  double f128; 
typedef enum {
	ok =0,
	nok=-1,
	Null_ptr=1,
	div_0=2,
	out_of_rang=5
}error_states;
typedef enum {
	True=1,
	False=0
}Bool;
