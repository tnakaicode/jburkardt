PYRAMID\_MONTE\_CARLO\
Monte Carlo Estimate of Integrals in Unit Pyramid {#pyramid_monte_carlo-monte-carlo-estimate-of-integrals-in-unit-pyramid align="center"}
=================================================

------------------------------------------------------------------------

**PYRAMID\_MONTE\_CARLO** is a C++ library which estimates the integral
of a function F(X,Y,Z) over the interior of the unit pyramid in 3D.

The unit pyramid has a square base of area 4, and a height of 1.
Specifically, the integration region is:

            - ( 1 - Z ) <= X <= 1 - Z
            - ( 1 - Z ) <= Y <= 1 - Z
                      0 <= Z <= 1.
          

The volume of the unit pyramid is 4/3.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PYRAMID\_MONTE\_CARLO** is available in [a C
version](../../c_src/pyramid_monte_carlo/pyramid_monte_carlo.html) and
[a C++
version](../../cpp_src/pyramid_monte_carlo/pyramid_monte_carlo.html) and
[a FORTRAN77
version](../../f77_src/pyramid_monte_carlo/pyramid_monte_carlo.html) and
[a FORTRAN90
version](../../f_src/pyramid_monte_carlo/pyramid_monte_carlo.html) and
[a MATLAB
version](../../m_src/pyramid_monte_carlo/pyramid_monte_carlo.html) and
[a Python
version](../../py_src/pyramid_monte_carlo/pyramid_monte_carlo.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../cpp_src/ball_monte_carlo/ball_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../cpp_src/circle_monte_carlo/circle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the circumference of the unit circle in 2D.

[CUBE\_MONTE\_CARLO](../../cpp_src/cube_monte_carlo/cube_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../cpp_src/disk_monte_carlo/disk_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../cpp_src/disk_quarter_monte_carlo/disk_quarter_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_MONTE\_CARLO](../../cpp_src/ellipse_monte_carlo/ellipse_monte_carlo.html)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipse in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../cpp_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.html)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../cpp_src/hyperball_monte_carlo/hyperball_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hyperball in M
dimensions;

[HYPERBALL\_VOLUME\_MONTE\_CARLO](../../cpp_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.html),
a C++ program which applies a Monte Carlo method to estimate the volume
of the unit hyperball in M dimensions;

[HYPERCUBE\_MONTE\_CARLO](../../c++_src/hypercube_monte_carlo/hypercube_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions;

[HYPERSPHERE\_MONTE\_CARLO](../../cpp_src/hypersphere_monte_carlo/hypersphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit hypersphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../cpp_src/line_monte_carlo/line_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[PYRAMID\_GRID](../../cpp_src/pyramid_grid/pyramid_grid.html), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

[PYRAMID\_INTEGRALS](../../cpp_src/pyramid_integrals/pyramid_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[PYRAMID\_RULE](../../cpp_src/pyramid_rule/pyramid_rule.html), a C++
library which computes quadrature rules over the interior of the unit
pyramid in 3D.

[SIMPLEX\_MONTE\_CARLO](../../cpp_src/simplex_monte_carlo/simplex_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../cpp_src/sphere_monte_carlo/sphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../cpp_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../cpp_src/square_monte_carlo/square_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D;

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [pyramid\_monte\_carlo.cpp](pyramid_monte_carlo.cpp), the source
    code.
-   [pyramid\_monte\_carlo.hpp](pyramid_monte_carlo.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pyramid\_monte\_carlo\_prb.cpp](pyramid_monte_carlo_prb.cpp), a
    sample calling program.
-   [pyramid\_monte\_carlo\_prb\_output.txt](pyramid_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **PYRAMID01\_INTEGRAL:** monomial integral in a unit pyramid.
-   **PYRAMID01\_SAMPLE:** sample the unit pyramid.
-   **PYRAMID01\_VOLUME:** volume of a unit pyramid with square base.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 August 2014.*