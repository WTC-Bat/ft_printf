#include <stdio.h>
#include <inttypes.h>
#include "includes/ft_printf.h"

int		main(void)
{
	/*
	 * String literals
	 */
	//ft_printf("String literals:\n\n");

	ft_printf("Plain string literal\n");
	printf("Plain string literal\n");
	ft_printf("\n\n\n");


	/*
	 * Print Percentage
     */

	ft_printf("Percentage:\n\n");
	ft_printf("Working at %i%%\n", 99);
	printf("Working at %i%%\n", 99);
	ft_printf("\n\n\n");


	/*
	 * s format (char *)
     */
	//ft_printf("'s' format:\n\n");

	ft_printf("'-' Flag, Width & Precision: ||%-16.3s||\n", "Cheese");
	printf("'-' Flag, Width & Precision: ||%-16.3s||\n", "Cheese");
	ft_printf("Width & Precision: ||%16.3s||\n", "Cheese");
	printf("Width & Precision: ||%16.3s||\n", "Cheese");
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*s||\n", 16, 3, "Cheese");
	printf("*Width & *Precision & '-' Flag: ||%-*.*s||\n", 16, 3, "Cheese");
	ft_printf("'-' Flag & Precision: ||%-.3s||\n", "Cheese");
	printf("'-' Flag & Precision: ||%-.3s||\n", "Cheese");
	ft_printf("'-' Flag & Width: ||%-16s||\n", "Cheese");
	printf("'-' Flag & Width: ||%-16s||\n", "Cheese");
	ft_printf("\n\n\n");


	/*
	 * ls length+format (wchar_t *)
	 */
	//ft_printf("'ls' format + length:\n\n");
    /*
	ft_printf("Flag, Width & Precision: %-16.3ls!\n", L"Cheese");
	printf("Flag, Width & Precision: %-16.3ls!\n", L"Cheese");
	ft_printf("Width & Precision: %16.3ls\n", L"Cheese");
	printf("Width & Precision: %16.3ls\n", L"Cheese");
	ft_printf("Flag & Precision: %-.3ls\n", L"Cheese");
	printf("Flag & Precision: %-.3ls\n", L"Cheese");
	ft_printf("Flag & Width: %-16ls!\n", L"Cheese");
	printf("Flag & Width: %-16ls!\n", L"Cheese");
	ft_printf("\n\n\n");
    */

	/*
	 * S format (wchar_t *)
	 * In the standard printf, using precision with the 'S'
	 * 	specifier results in undefined behaviour
	 */
	//ft_printf("'S' format:\n\n");

	ft_printf("Flag, Width & Precision: %-16.3S!\n", L"Cheese");
	//printf("Flag, Width & Precision: %-16.3S!\n", L"Cheese");
	ft_printf("Width & Precision: %16.3S\n", L"Cheese");
	//printf("Width & Precision: %16.3S\n", L"Cheese");
	ft_printf("Flag & Precision: %-.3S\n", L"Cheese");
	//printf("Flag & Precision: %-.3S\n", L"Cheese");
	ft_printf("Flag & Width: %-16S!\n", L"Cheese");
	printf("Flag & Width: %-16S!\n", L"Cheese");
	ft_printf("\n\n\n");


	/*
	 * c format (char)
	 */
	//ft_printf("'c' format:\n\n");

	ft_printf("Flag & Width: %-16c!\n", 'Z');
	printf("Flag & Width: %-16c!\n", 'Z');
	ft_printf("Width: %16c!\n", 'Z');
	printf("Width: %16c!\n", 'Z');
	ft_printf("\n\n\n");


	/*
	 * lc format (wchar_t)
	 */
	//ft_printf("'c' format:\n\n");
    /*
	ft_printf("Flag & Width: %-16lc!\n", L'Z');
	printf("Flag & Width: %-16lc!\n", L'Z');
	ft_printf("Width: %16lc!\n", L'Z');
	printf("Width: %16lc!\n", L'Z');
	ft_printf("\n\n\n");
    */

	/*
	 * C format (wchar_t)
     */
	//ft_printf("'C' format:\n\n");

	ft_printf("Flag & Width: %-16C!\n", L'Z');
	printf("Flag & Width: %-16C!\n", L'Z');
	ft_printf("Width: %16C!\n", L'Z');
	printf("Width: %16C!\n", L'Z');
	ft_printf("\n\n\n");


	/*
	 * p format (pointer address)
	 */
	//ft_printf("'p' format:\n\n");

  	char		*str = "Cheese";
	ft_printf("Pointer: %p\n", "Cheese");
	printf("Pointer: %p\n", "Cheese");
	ft_printf("Pointer & Width: ||%11p||\n", (void *)str);
	printf("Pointer & Width: ||%11p||\n", (void *)str);
	ft_printf("Pointer & Width: ||%11p||\n", &str);
	printf("Pointer & Width: ||%11p||\n", &str);
	ft_printf("Pointer & Width & Flag: ||%-11p||\n", "Cheese");
	printf("Pointer & Width & Flag: ||%-11p||\n", "Cheese");
	ft_printf("\n\n\n");
	/*
	ft_printf("Pointer: %p\n", "Cheese");
	printf("Pointer: %p\n", "Cheese");
	ft_printf("Pointer & Width: ||%11p||\n", str);
	printf("Pointer & Width: ||%11p||\n", str);
	ft_printf("Pointer & Width: ||%11p||\n", &str);
	printf("Pointer & Width: ||%11p||\n", &str);
	ft_printf("Pointer & Width & Flag: ||%-11p||\n", "Cheese");
	printf("Pointer & Width & Flag: ||%-11p||\n", "Cheese");
	ft_printf("\n\n\n");
	*/


	/*
	 * i format (int)
	 */
	//ft_printf("'i' format:\n\n");

	ft_printf("Plain Int: %i\n", 424242);
	printf("Plain Int: %i\n", 424242);
	ft_printf("' ' Flag: ||% i||\n", 42);
	printf("' ' Flag: ||% i||\n", 42);
	ft_printf("'+' Flag: ||%+i||\n", 42);
	printf("'+' Flag: ||%+i||\n", 42);
	ft_printf("Width: ||%10i||\n", 42);
	printf("Width: ||%10i||\n", 42);
	ft_printf("Width & Precision: ||%10.5i||\n", 42);
	printf("Width & Precision: ||%10.5i||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*i||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*i||\n", 10, 5, 42);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*i||\n", 10, 5, 42);
	printf("*Width & *Precision & '-' Flag: ||%-*.*i||\n", 10, 5, 42);
	ft_printf("Width & '0' Flag: %010i\n", 42);
	printf("Width & '0' Flag: %010i\n", 42);
	ft_printf("Width & '-' Flag: ||%-10i||\n", 42);
	printf("Width & '-' Flag: ||%-10i||\n", 42);
	ft_printf("Width & '+' Flag: ||%+10i||\n", 42);
	printf("Width & '+' Flag: ||%+10i||\n", 42);
	ft_printf("Width & ' ' Flag: ||% 10i||\n", 42);
	printf("Width & ' ' Flag: ||% 10i||\n", 42);
	ft_printf("Precision: %.10i\n", 42);
	printf("Precision: %.10i\n", 42);
	ft_printf("Precision & '+' Flag: %+.10i\n", 42);
	printf("Precision & '+' Flag: %+.10i\n", 42);
	ft_printf("Precision & ' ' Flag: % .10i\n", 42);
	printf("Precision & ' ' Flag: % .10i\n", 42);
	ft_printf("\n\n\n");


	/*
	 * zi format (size_t)
	 */
	//ft_printf("'zi' format:\n\n");
    /*
	ft_printf("Plain Size_T: %zi\n", sizeof(1423));
	printf("Plain Size_T: %zi\n", sizeof(1423));
	ft_printf("' ' Flag: ||% zi||\n", sizeof(1423));
	printf("' ' Flag: ||% zi||\n", sizeof(1423));
	ft_printf("'+' Flag: ||%+zi||\n", sizeof(1423));
	printf("'+' Flag: ||%+zi||\n", sizeof(1423));
	ft_printf("Width: ||%10zi||\n", sizeof(1423));
	printf("Width: ||%10zi||\n", sizeof(1423));
	ft_printf("Width & Precision: ||%10.5zi||\n", sizeof(1423));
	printf("Width & Precision: ||%10.5zi||\n", sizeof(1423));
	ft_printf("*Width & *Precision: ||%*.*zi||\n", 10, 5, sizeof(1423));
	printf("*Width & *Precision: ||%*.*zi||\n", 10, 5, sizeof(1423));
	ft_printf("Width & '0' Flag: %010zi\n", sizeof(1423));
	printf("Width & '0' Flag: %010zi\n", sizeof(1423));
	ft_printf("Width & '-' Flag: ||%-10zi||\n", sizeof(1423));
	printf("Width & '-' Flag: ||%-10zi||\n", sizeof(1423));
	ft_printf("Width & '+' Flag: ||%+10zi||\n", sizeof(1423));
	printf("Width & '+' Flag: ||%+10zi||\n", sizeof(1423));
	ft_printf("Width & ' ' Flag: ||% 10zi||\n", sizeof(1423));
	printf("Width & ' ' Flag: ||% 10zi||\n", sizeof(1423));
	ft_printf("Precision: %.10zi\n", sizeof(1423));
	printf("Precision: %.10zi\n", sizeof(1423));
	ft_printf("Precision & '+' Flag: %+.10zi\n", sizeof(1423));
	printf("Precision & '+' Flag: %+.10zi\n", sizeof(1423));
	ft_printf("Precision & ' ' Flag: % .10zi\n", sizeof(1423));
	printf("Precision & ' ' Flag: % .10zi\n", sizeof(1423));
	f t_printf("\n\n\n");
    */

	/*
	 * ji format (intmax_t)
	 */
	//ft_printf("'ji' format:\n\n");
    /*
	ft_printf("Plain Intmax_T: %ji\n", (intmax_t)1423);
	printf("Plain Intmax_T: %ji\n", (intmax_t)1423);
	ft_printf("' ' Flag: ||% ji||\n", (intmax_t)1423);
	printf("' ' Flag: ||% ji||\n", (intmax_t)1423);
	ft_printf("'+' Flag: ||%+ji||\n", (intmax_t)1423);
	printf("'+' Flag: ||%+ji||\n", (intmax_t)1423);
	ft_printf("Width: ||%10ji||\n", (intmax_t)1423);
	printf("Width: ||%10ji||\n", (intmax_t)1423);
	ft_printf("Width & Precision: ||%10.5ji||\n", (intmax_t)1423);
	printf("Width & Precision: ||%10.5ji||\n", (intmax_t)1423);
	ft_printf("*Width & *Precision: ||%*.*ji||\n", 10, 5, (intmax_t)1423);
	printf("*Width & *Precision: ||%*.*ji||\n", 10, 5, (intmax_t)1423);
	ft_printf("Width & '0' Flag: %010ji\n", (intmax_t)1423);
	printf("Width & '0' Flag: %010ji\n", (intmax_t)1423);
	ft_printf("Width & '-' Flag: ||%-10ji||\n", (intmax_t)1423);
	printf("Width & '-' Flag: ||%-10ji||\n", (intmax_t)1423);
	ft_printf("Width & '+' Flag: ||%+10ji||\n", (intmax_t)1423);
	printf("Width & '+' Flag: ||%+10ji||\n", (intmax_t)1423);
	ft_printf("Width & ' ' Flag: ||% 10ji||\n", (intmax_t)1423);
	printf("Width & ' ' Flag: ||% 10ji||\n", (intmax_t)1423);
	ft_printf("Precision: %.10ji\n", (intmax_t)1423);
	printf("Precision: %.10ji\n", (intmax_t)1423);
	ft_printf("Precision & '+' Flag: %+.10ji\n", (intmax_t)1423);
	printf("Precision & '+' Flag: %+.10ji\n", (intmax_t)1423);
	ft_printf("Precision & ' ' Flag: % .10ji\n", (intmax_t)1423);
	printf("Precision & ' ' Flag: % .10ji\n", (intmax_t)1423);
	ft_printf("\n\n\n");
    */

	/*
	 * hi format (short int)
	 */
	//ft_printf("'hi' format:\n\n");
    /*
	ft_printf("Plain Short Int: %hi\n", 32767);
	printf("Plain Short Int: %hi\n", 32767);
	ft_printf("Plain Short Int (32769): %hi\n", 32769);
	printf("Plain Short Int (32769): %hi\n", 32769);
	ft_printf("Plain Short Int (-32768): %hi\n", -32769);
	printf("Plain Short Int (-32768): %hi\n", -32769);
	ft_printf("' ' Flag: ||% hi||\n", 42);
	printf("' ' Flag: ||% hi||\n", 42);
	ft_printf("'+' Flag: ||%+hi||\n", 42);
	printf("'+' Flag: ||%+hi||\n", 42);
	ft_printf("Width: ||%10hi||\n", 42);
	printf("Width: ||%10hi||\n", 42);
	ft_printf("Width & Precision: ||%10.5hi||\n", 42);
	printf("Width & Precision: ||%10.5hi||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*hi||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*hi||\n", 10, 5, 42);
	ft_printf("Width & '0' Flag: %010hi\n", 42);
	printf("Width & '0' Flag: %010hi\n", 42);
	ft_printf("Width & '-' Flag: ||%-10hi||\n", 42);
	printf("Width & '-' Flag: ||%-10hi||\n", 42);
	ft_printf("Width & '+' Flag: ||%+10hi||\n", 42);
	printf("Width & '+' Flag: ||%+10hi||\n", 42);
	ft_printf("Width & ' ' Flag: ||% 10hi||\n", 42);
	printf("Width & ' ' Flag: ||% 10hi||\n", 42);
	ft_printf("Precision: %.10hi\n", 42);
	printf("Precision: %.10hi\n", 42);
	ft_printf("Precision & '+' Flag: %+.10hi\n", 42);
	printf("Precision & '+' Flag: %+.10hi\n", 42);
	ft_printf("Precision & ' ' Flag: % .10hi\n", 42);
	printf("Precision & ' ' Flag: % .10hi\n", 42);
	ft_printf("\n\n\n");
    */

	/*
	 * hhi format (signed char)
	 */
	//ft_printf("'hhi' format:\n\n");
    /*
	ft_printf("Plain Signed Char: %hhi\n", 129);				//Errors
	printf("Plain Signed Char: %hhi\n", 129);
	ft_printf("' ' Flag: ||% hhi||\n", 42);
	printf("' ' Flag: ||% hhi||\n", 42);
	ft_printf("'+' Flag: ||%+hhi||\n", 42);
	printf("'+' Flag: ||%+hhi||\n", 42);
	ft_printf("Width: ||%10hhi||\n", 42);
	printf("Width: ||%10hhi||\n", 42);
	ft_printf("Width & Precision: ||%10.5hhi||\n", 42);
	printf("Width & Precision: ||%10.5hhi||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*hhi||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*hhi||\n", 10, 5, 42);
	ft_printf("Width & '0' Flag: %010hhi\n", 42);
	printf("Width & '0' Flag: %010hhi\n", 42);
	ft_printf("Width & '-' Flag: ||%-10hhi||\n", 42);
	printf("Width & '-' Flag: ||%-10hhi||\n", 42);
	ft_printf("Width & '+' Flag: ||%+10hhi||\n", 42);
	printf("Width & '+' Flag: ||%+10hhi||\n", 42);
	ft_printf("Width & ' ' Flag: ||% 10hhi||\n", 42);
	printf("Width & ' ' Flag: ||% 10hhi||\n", 42);
	ft_printf("Precision: %.10hhi\n", 42);
	printf("Precision: %.10hhi\n", 42);
	ft_printf("Precision & '+' Flag: %+.10hhi\n", 42);
	printf("Precision & '+' Flag: %+.10hhi\n", 42);
	ft_printf("Precision & ' ' Flag: % .10hhi\n", 42);
	printf("Precision & ' ' Flag: % .10hhi\n", 42);
	ft_printf("\n\n\n");
    */

	/*
	 * li format (long int)
	 */
	//ft_printf("'li' format:\n\n");
    /*
	ft_printf("Plain Long Int: %D\n", 88888888l);
	printf("Plain Long Int: %D\n", 88888888l);
	ft_printf("' ' Flag: ||% li||\n", 42l);
	printf("' ' Flag: ||% li||\n", 42l);
	ft_printf("'+' Flag: ||%+li||\n", 42l);
	printf("'+' Flag: ||%+li||\n", 42l);
	ft_printf("Width: ||%10li||\n", 42l);
	printf("Width: ||%10li||\n", 42l);
	ft_printf("Width & Precision: ||%10.5li||\n", 42l);
	printf("Width & Precision: ||%10.5li||\n", 42l);
	ft_printf("*Width & *Precision: ||%*.*li||\n", 10, 5, 42l);
	printf("*Width & *Precision: ||%*.*li||\n", 10, 5, 42l);
	ft_printf("Width & '0' Flag: %010li\n", 42l);
	printf("Width & '0' Flag: %010li\n", 42l);
	ft_printf("Width & '-' Flag: ||%-10li||\n", 42l);
	printf("Width & '-' Flag: ||%-10li||\n", 42l);
	ft_printf("Width & '+' Flag: ||%+10li||\n", 42l);
	printf("Width & '+' Flag: ||%+10li||\n", 42l);
	ft_printf("Width & ' ' Flag: ||% 10li||\n", 42l);
	printf("Width & ' ' Flag: ||% 10li||\n", 42l);
	ft_printf("Precision: %.10li\n", 42l);
	printf("Precision: %.10li\n", 42l);
	ft_printf("Precision & '+' Flag: %+.10li\n", 42l);
	printf("Precision & '+' Flag: %+.10li\n", 42l);
	ft_printf("Precision & ' ' Flag: % .10li\n", 42l);
	printf("Precision & ' ' Flag: % .10li\n", 42l);
	ft_printf("\n\n\n");
    */

	/*
	 * lli format (long long int)
	 */
	//ft_printf("'lli' format:\n\n");
    /*
	ft_printf("Plain Long Long Int: %lli\n", 8888888888ll);	//Errors
	printf("Plain Long Long Int: %lli\n", 8888888888ll);
	ft_printf("' ' Flag: ||% lli||\n", 42ll);
	printf("' ' Flag: ||% lli||\n", 42ll);
	ft_printf("'+' Flag: ||%+lli||\n", 42ll);
	printf("'+' Flag: ||%+lli||\n", 42ll);
	ft_printf("Width: ||%10lli||\n", 42ll);
	printf("Width: ||%10lli||\n", 42ll);
	ft_printf("Width & Precision: ||%10.5lli||\n", 42ll);
	printf("Width & Precision: ||%10.5lli||\n", 42ll);
	ft_printf("*Width & *Precision: ||%*.*lli||\n", 10, 5, 42ll);
	printf("*Width & *Precision: ||%*.*lli||\n", 10, 5, 42ll);
	ft_printf("Width & '0' Flag: %010lli\n", 42ll);
	printf("Width & '0' Flag: %010lli\n", 42ll);
	ft_printf("Width & '-' Flag: ||%-10lli||\n", 42ll);
	printf("Width & '-' Flag: ||%-10lli||\n", 42ll);
	ft_printf("Width & '+' Flag: ||%+10lli||\n", 42ll);
	printf("Width & '+' Flag: ||%+10lli||\n", 42ll);
	ft_printf("Width & ' ' Flag: ||% 10lli||\n", 42ll);
	printf("Width & ' ' Flag: ||% 10lli||\n", 42ll);
	ft_printf("Precision: %.10lli\n", 42ll);
	printf("Precision: %.10lli\n", 42ll);
	ft_printf("Precision & '+' Flag: %+.10lli\n", 42ll);
	printf("Precision & '+' Flag: %+.10lli\n", 42ll);
	ft_printf("Precision & ' ' Flag: % .10lli\n", 42ll);
	printf("Precision & ' ' Flag: % .10lli\n", 42ll);
	ft_printf("\n\n\n");
    */

	/*
	 * D format (long int)
	 */
	//ft_printf("'D' format:\n\n");
	/*
	ft_printf("Plain Long Int: %D\n", 88888888l);
	ft_printf("' ' Flag: ||% D||\n", 42l);
	ft_printf("'+' Flag: ||%+D||\n", 42l);
	ft_printf("Width: ||%10D||\n", 42l);
	ft_printf("Width & Precision: ||%10.5D||\n", 42l);
	ft_printf("*Width & *Precision: ||%*.*D||\n", 10, 5, 42l);
	ft_printf("Width & '0' Flag: %010D\n", 42l);
	ft_printf("Width & '-' Flag: ||%-10D||\n", 42l);
	ft_printf("Width & '+' Flag: ||%+10D||\n", 42l);
	ft_printf("Width & ' ' Flag: ||% 10D||\n", 42l);
	ft_printf("Precision: %.10D\n", 42l);
	ft_printf("Precision & '+' Flag: %+.10D\n", 42l);
	ft_printf("Precision & ' ' Flag: % .10D\n", 42l);
	ft_printf("\n\n\n");
	*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*
	 * u format (uint)
	 */
	//ft_printf("'u' format:\n\n");

	ft_printf("Plain UInt: %u\n", 424242);
	printf("Plain UInt: %u\n", 424242);
	ft_printf("Width: ||%10u||\n", 42);
	printf("Width: ||%10u||\n", 42);
	ft_printf("Width & Precision: ||%10.5u||\n", 42);
	printf("Width & Precision: ||%10.5u||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*u||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*u||\n", 10, 5, 42);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*u||\n", 10, 5, 42);
	printf("*Width & *Precision & '-' Flag: ||%-*.*u||\n", 10, 5, 42);
	ft_printf("Width & '-' Flag: ||%-10u||\n", 42);
	printf("Width & '-' Flag: ||%-10u||\n", 42);
	ft_printf("Width & '0' Flag: %010i\n", 42);
	printf("Width & '0' Flag: %010i\n", 42);
	ft_printf("Precision: %.10u\n", 42);
	printf("Precision: %.10u\n", 42);
	ft_printf("\n\n\n");


	/*
	 * zu format (size_t)
	 */
    //ft_printf("'zu' format:\n\n");

	ft_printf("Plain Size_T: %zu\n", sizeof(1423));
	printf("Plain Size_T: %zu\n", sizeof(1423));
	ft_printf("Width: ||%10zu||\n", sizeof(1423));
	printf("Width: ||%10zu||\n", sizeof(1423));
	ft_printf("Width & Precision: ||%10.5zu||\n", sizeof(1423));
	printf("Width & Precision: ||%10.5zu||\n", sizeof(1423));
	ft_printf("*Width & *Precision: ||%*.*zu||\n", 10, 5, sizeof(1423));
	printf("*Width & *Precision: ||%*.*zu||\n", 10, 5, sizeof(1423));
	ft_printf("Width & '-' Flag: ||%-10zu||\n", sizeof(1423));
	printf("Width & '-' Flag: ||%-10zu||\n", sizeof(1423));
	ft_printf("Precision: %.10zu\n", sizeof(1423));
	printf("Precision: %.10zu\n", sizeof(1423));
	ft_printf("\n\n\n");


	/*
	 * ju format (intmax_t)
	 */
	//ft_printf("'ju' format:\n\n");
    /*
	ft_printf("Plain Intmax_T: %ju\n", (intmax_t)1423);
	printf("Plain Intmax_T: %ju\n", (intmax_t)1423);
	ft_printf("Width: ||%10ju||\n", (intmax_t)1423);
	printf("Width: ||%10ju||\n", (intmax_t)1423);
	ft_printf("Width & Precision: ||%10.5ju||\n", (intmax_t)1423);
	printf("Width & Precision: ||%10.5ju||\n", (intmax_t)1423);
	ft_printf("*Width & *Precision: ||%*.*ju||\n", 10, 5, (intmax_t)1423);
	printf("*Width & *Precision: ||%*.*ju||\n", 10, 5, (intmax_t)1423);
	ft_printf("Width & '-' Flag: ||%-10ju||\n", (intmax_t)1423);
	printf("Width & '-' Flag: ||%-10ju||\n", (intmax_t)1423);
	ft_printf("Precision: %.10ju\n", (intmax_t)1423);
	printf("Precision: %.10ju\n", (intmax_t)1423);
	ft_printf("\n\n\n");
    */

	/*
	 * hu format (unsigned short int)
	 */
    //ft_printf("'hi' format:\n\n");
    /*
	ft_printf("Plain UShort Int: %hu\n", 32767);
	printf("Plain UShort Int: %hu\n", 32767);
	ft_printf("Plain UShort Int (32769): %hu\n", 32769);
	printf("Plain UShort Int (32769): %hu\n", 32769);
	ft_printf("Plain UShort Int (-32768): %hu\n", -32769);
	printf("Plain UShort Int (-32768): %hu\n", -32769);
	ft_printf("Width: ||%10hu||\n", 42);
	printf("Width: ||%10hu||\n", 42);
	ft_printf("Width & Precision: ||%10.5hu||\n", 42);
	printf("Width & Precision: ||%10.5hu||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*hu||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*hu||\n", 10, 5, 42);;
	ft_printf("Width & '-' Flag: ||%-10hu||\n", 42);
	printf("Width & '-' Flag: ||%-10hu||\n", 42);
	ft_printf("Precision: %.10hu\n", 42);
	printf("Precision: %.10hu\n", 42);
	ft_printf("\n\n\n");
    */

	/*
	 * hhu format (unsigned char)
	 */
	//ft_printf("'hhu' format:\n\n");
    /*
	ft_printf("Plain Unsigned Char: %hhu\n", 129);				//Errors
	printf("Plain Unsigned Char: %hhu\n", 129);
	ft_printf("Width: ||%10hhu||\n", 42);
	printf("Width: ||%10hhu||\n", 42);
	ft_printf("Width & Precision: ||%10.5hhu||\n", 42);
	printf("Width & Precision: ||%10.5hhu||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*hhu||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*hhu||\n", 10, 5, 42);
	ft_printf("Width & '-' Flag: ||%-10hhu||\n", 42);
	printf("Width & '-' Flag: ||%-10hhu||\n", 42);;
	ft_printf("Precision: %.10hhu\n", 42);
	printf("Precision: %.10hhu\n", 42);
	ft_printf("\n\n\n");
    */

	/*
	 * lu format (unsigned long int)
	 */
	//ft_printf("'lu' format:\n\n");
    /*
	ft_printf("Plain ULong Int: %lu\n", 88888888l);
	printf("Plain ULong Int: %lu\n", 88888888l);
	ft_printf("Width: ||%10lu||\n", 42l);
	printf("Width: ||%10lu||\n", 42l);
	ft_printf("Width & Precision: ||%10.5lu||\n", 42l);
	printf("Width & Precision: ||%10.5lu||\n", 42l);
	ft_printf("*Width & *Precision: ||%*.*lu||\n", 10, 5, 42l);
	printf("*Width & *Precision: ||%*.*lu||\n", 10, 5, 42l);
	ft_printf("Width & '0' Flag: %010lu\n", 42l);
	printf("Width & '0' Flag: %010lu\n", 42l);
	ft_printf("Width & '-' Flag: ||%-10lu||\n", 42l);
	printf("Width & '-' Flag: ||%-10lu||\n", 42l);
	ft_printf("Precision: %.10lu\n", 42l);
	printf("Precision: %.10lu\n", 42l);
	ft_printf("\n\n\n");
    */

	/*
	 * llu format (unsigned long long int)
	 */
	//ft_printf("'llu' format:\n\n");
    /*
	ft_printf("Plain Unsigned Long Long Int: %llu\n", 8888888888ll);	//Errors
	printf("Plain Unsigned Long Long Int: %llu\n", 8888888888ll);
	ft_printf("Width: ||%10llu||\n", 42ll);
	printf("Width: ||%10llu||\n", 42ll);
	ft_printf("Width & Precision: ||%10.5llu||\n", 42ll);
	printf("Width & Precision: ||%10.5llu||\n", 42ll);
	ft_printf("*Width & *Precision: ||%*.*llu||\n", 10, 5, 42ll);
	printf("*Width & *Precision: ||%*.*llu||\n", 10, 5, 42ll);
	ft_printf("Width & '0' Flag: %010llu\n", 42ll);
	printf("Width & '0' Flag: %010llu\n", 42ll);
	ft_printf("Width & '-' Flag: ||%-10llu||\n", 42ll);
	printf("Width & '-' Flag: ||%-10llu||\n", 42ll);
	ft_printf("Precision: %.10llu\n", 42ll);
	printf("Precision: %.10llu\n", 42ll);
	ft_printf("\n\n\n");
	*/

	/*
	 * U format (unsigned long int)
	 */
	//ft_printf("'U' format:\n\n");
    /*
	ft_printf("Plain Long Int: %U\n", 88888888l);
	ft_printf("Width: ||%10U||\n", 42l);
	ft_printf("Width & Precision: ||%10.5U||\n", 42l);
	ft_printf("*Width & *Precision: ||%*.*U||\n", 10, 5, 42l);
	ft_printf("Width & '-' Flag: ||%-10U||\n", 42l);
	ft_printf("Precision: %.10U\n", 42l);
	ft_printf("\n\n\n");
    */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*
	 * o format (octal)
	 */
	//ft_printf("'o' format:\n\n");

	ft_printf("Plain Octal: %o\n", 1988);
	printf("Plain Octal: %o\n", 1988);
	ft_printf("'#' Flag: %#o\n", 1988);
	printf("'#' Flag: %#o\n", 1988);
	ft_printf("Width: ||%10o||\n", 42);
	printf("Width: ||%10o||\n", 42);
	ft_printf("Width & Precision: ||%10.5o||\n", 42);
	printf("Width & Precision: ||%10.5o||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*o||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*o||\n", 10, 5, 42);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*o||\n", 10, 5, 42);
	printf("*Width & *Precision & '-' Flag: ||%-*.*o||\n", 10, 5, 42);
	ft_printf("Width & '-' Flag: ||%-10o||\n", 42);
	printf("Width & '-' Flag: ||%-10o||\n", 42);
	ft_printf("Width & '0' Flag: %010o\n", 42);
	printf("Width & '0' Flag: %010o\n", 42);
	ft_printf("Precision: %.10o\n", 42);
	printf("Precision: %.10o\n", 42);
	ft_printf("Precision & '#' Flag: %#.10o\n", 1988);
	printf("Precision & '#' Flag: %#.10o\n", 1988);
	ft_printf("\n\n\n");


	/*
	 * lo format (ulong octal)
	 */
	//ft_printf("'lo' format:\n\n";

	ft_printf("Plain ULong Octal: %lo\n", 1988lu);
	printf("Plain Ulong Octal: %lo\n", 1988lu);
	ft_printf("'#' Flag: %#lo\n", 1988lu);
	printf("'#' Flag: %#lo\n", 1988lu);
	ft_printf("Width: ||%10lo||\n", 42lu);
	printf("Width: ||%10lo||\n", 42lu);
	ft_printf("Width & Precision: ||%10.5lo||\n", 42lu);
	printf("Width & Precision: ||%10.5lo||\n", 42lu);
	ft_printf("*Width & *Precision: ||%*.*lo||\n", 10, 5, 42lu);
	printf("*Width & *Precision: ||%*.*lo||\n", 10, 5, 42lu);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*lo||\n", 10, 5, 42lu);
	printf("*Width & *Precision & '-' Flag: ||%-*.*lo||\n", 10, 5, 42lu);
	ft_printf("Width & '-' Flag: ||%-10lo||\n", 42lu);
	printf("Width & '-' Flag: ||%-10lo||\n", 42lu);
	ft_printf("Width & '0' Flag: %010lo\n", 42lu);
	printf("Width & '0' Flag: %010lo\n", 42lu);
	ft_printf("Precision: %.10lo\n", 42lu);
	printf("Precision: %.10lo\n", 42lu);
	ft_printf("Precision & '#' Flag: %#.10lo\n", 1988lu);
	printf("Precision & '#' Flag: %#.10lo\n", 1988lu);
	ft_printf("\n\n\n");



	/*
	 * O format (ulong octal)
	 */
	//ft_printf("'O' format:\n\n");

	ft_printf("Plain ULong Octal: %O\n", 1988lu);
	printf("Plain Ulong Octal: %lo\n", 1988lu);
	ft_printf("'#' Flag: %#O\n", 1988lu);
	printf("'#' Flag: %#lo\n", 1988lu);
	ft_printf("Width: ||%10O||\n", 42lu);
	printf("Width: ||%10lo||\n", 42lu);
	ft_printf("Width & Precision: ||%10.5O||\n", 42lu);
	printf("Width & Precision: ||%10.5lo||\n", 42lu);
	ft_printf("*Width & *Precision: ||%*.*O||\n", 10, 5, 42lu);
	printf("*Width & *Precision: ||%*.*lo||\n", 10, 5, 42lu);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*O||\n", 10, 5, 42lu);
	printf("*Width & *Precision & '-' Flag: ||%-*.*lo||\n", 10, 5, 42lu);
	ft_printf("Width & '-' Flag: ||%-10O||\n", 42lu);
	printf("Width & '-' Flag: ||%-10lo||\n", 42lu);
	ft_printf("Width & '0' Flag: %010O\n", 42lu);
	printf("Width & '0' Flag: %010lo\n", 42lu);
	ft_printf("Precision: %.10O\n", 42lu);
	printf("Precision: %.10lo\n", 42lu);
	ft_printf("Precision & '#' Flag: %#.10O\n", 1988lu);
	printf("Precision & '#' Flag: %#.10lo\n", 1988lu);
	ft_printf("\n\n\n");


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*
	 * x format (hex)
	 */
	//ft_printf("'x' format:\n\n");

	ft_printf("Plain Hex (x): %x\n", 1988);
	printf("Plain Hex (x): %x\n", 1988);
	ft_printf("'#' Flag: %#x\n", 1988);
	printf("'#' Flag: %#x\n", 1988);
	ft_printf("Width: ||%10x||\n", 42);
	printf("Width: ||%10x||\n", 42);
	ft_printf("Width & Precision: ||%10.5x||\n", 42);
	printf("Width & Precision: ||%10.5x||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*x||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*x||\n", 10, 5, 42);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*x||\n", 10, 5, 42);
	printf("*Width & *Precision & '-' Flag: ||%-*.*x||\n", 10, 5, 42);
	ft_printf("Width & '-' Flag: ||%-10x||\n", 42);
	printf("Width & '-' Flag: ||%-10x||\n", 42);
	ft_printf("Width & '0' Flag: %010x\n", 42);
	printf("Width & '0' Flag: %010x\n", 42);
	ft_printf("Precision: %.10x\n", 42);
	printf("Precision: %.10x\n", 42);
	ft_printf("Precision & '#' Flag: %#.10x\n", 1988);
	printf("Precision & '#' Flag: %#.10x\n", 1988);
	ft_printf("\n\n\n");


	/*
	 * X format (hex)
	 */
	//ft_printf("'X' format:\n\n");

	ft_printf("Plain Hex (X): %X\n", 1988);
	printf("Plain Hex (X): %X\n", 1988);
	ft_printf("'#' Flag: %#X\n", 1988);
	printf("'#' Flag: %#X\n", 1988);
	ft_printf("Width: ||%10X||\n", 42);
	printf("Width: ||%10X||\n", 42);
	ft_printf("Width & Precision: ||%10.5X||\n", 42);
	printf("Width & Precision: ||%10.5X||\n", 42);
	ft_printf("*Width & *Precision: ||%*.*X||\n", 10, 5, 42);
	printf("*Width & *Precision: ||%*.*X||\n", 10, 5, 42);
	ft_printf("*Width & *Precision & '-' Flag: ||%-*.*X||\n", 10, 5, 42);
	printf("*Width & *Precision & '-' Flag: ||%-*.*X||\n", 10, 5, 42);
	ft_printf("Width & '-' Flag: ||%-10X||\n", 42);
	printf("Width & '-' Flag: ||%-10X||\n", 42);
	ft_printf("Width & '0' Flag: %010X\n", 42);
	printf("Width & '0' Flag: %010X\n", 42);
	ft_printf("Precision: %.10X\n", 42);
	printf("Precision: %.10X\n", 42);
	ft_printf("Precision & '#' Flag: %#.10X\n", 1988);
	printf("Precision & '#' Flag: %#.10X\n", 1988);
	ft_printf("\n\n\n");


	//printf("x: %#x\n", 42);
	//printf("X: %#X\n", 42);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*std printf tests*/

	//char *sptr1 = "Cheese";
	//printf("Int: |%.3i|\n", 42);
	//printf("Int: |%03i|\n", 42);

	/*
	printf("Printf Tests:\n\n");
	printf("Print the first 5 characters (Hello) of \"Hello World\": %.*s\n", 5, "Hello World");
	printf("No less than n character must be printed\nIf input is less than n, left will be ' ' padded with the excess: %*s\n", 10, "Hello");
	printf("Cheese without padding: %s\n", str);
	printf("Cheese with specified left padding of 10: %*s!\n", 16, "Cheese");
	printf("Cheese with explicit left padding of 10: %16s!\n", "Cheese");
	printf("Cheese with specified right padding of 10: %-*s!\n", 16, "Cheese");
	printf("Cheese with explicit right padding of 10: %-16s!\n", "Cheese");

	printf("42 with specified 0 left padding of 10: %0*i!\n", 12, 42);
	printf("42 with explicit 0 left padding of 10: %012i!\n", 42);
	//printf("42 with specified 0 right padding of 10: %-0*i!\n", 12, 42);
	//printf("42 with explicit 0 right padding of 10: %-012i!\n", 42);

	printf("Value as hex (lower case): %x\n", 42);
	printf("Value as hex (upper case): %X\n", 42);
	printf("Value as hex (lower case) preceded by 0x: %#x\n", 42);
	printf("Value as hex (upper case) preceded by 0X: %#X\n", 42);
	printf("Value as octal: %o\n", 42);
	printf("Value as octal preceded by 0: %#o\n", 42);
	//printf("Print the first ! characters (Hello) of \"Hello World\": %*.*s\n", 7, 5, "Hello World");
	*/
	return (0);
}
