PYRAMID\_GRID\
Grid of Points Inside a Pyramid in 3D {#pyramid_grid-grid-of-points-inside-a-pyramid-in-3d align="center"}
=====================================

------------------------------------------------------------------------

**PYRAMID\_GRID** is a C++ library which generates a grid of points over
the interior of a pyramid in 3D.

The pyramid has a square base. As it rises, the square cross section
smoothly shrinks to a point. Thus there are five vertices, of which four
are on the square base, and one is the apex. There are 8 edges,
consisting of the four edges of the square, and an edge joining each
base vertex to the apex vertex.

The unit pyramid is the set of points (X,Y,Z) such that:

           - ( 1 - Z ) <= X <= 1 - Z
           - ( 1 - Z ) <= Y <= 1 - Z
                     0 <= Z <= 1.
           

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PYRAMID\_GRID** is available in [a C
version](../../c_src/pyramid_grid/pyramid_grid.md) and [a C++
version](../../master/pyramid_grid/pyramid_grid.md) and [a FORTRAN77
version](../../f77_src/pyramid_grid/pyramid_grid.md) and [a FORTRAN90
version](../../f_src/pyramid_grid/pyramid_grid.md) and [a MATLAB
version](../../m_src/pyramid_grid/pyramid_grid.md) and [a Python
version](../../py_src/pyramid_grid/pyramid_grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes a grid of points over the length of a
circular arc in 2D;

[CUBE\_GRID](../../master/cube_grid/cube_grid.md), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[DISK\_GRID](../../master/disk_grid/disk_grid.md), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_GRID](../../master/ellipse_grid/ellipse_grid.md), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_GRID](../../master/ellipsoid_grid/ellipsoid_grid.md), a
C++ library which computes grid points over the interior of an ellipsoid
in 3D.

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[LINE\_GRID](../../master/line_grid/line_grid.md), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../master/polygon_grid/polygon_grid.md), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_EXACTNESS](../../master/pyramid_exactness/pyramid_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule for the pyramid.

[PYRAMID\_INTEGRALS](../../master/pyramid_integrals/pyramid_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[PYRAMID\_RULE](../../master/pyramid_rule/pyramid_rule.md), a C++
program which computes a quadrature rule over the interior of the unit
pyramid in 3D;

[SIMPLEX\_GRID](../../master/simplex_grid/simplex_grid.md), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../master/sphere_fibonacci_grid/sphere_fibonacci_grid.md),
a C++ library which uses a Fibonacci spiral to create a grid of points
on the surface of the unit sphere in 3D.

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[SPHERE\_LLQ\_GRID](../../master/sphere_llq_grid/sphere_llq_grid.md),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and quadrilaterals on the surface of the unit sphere in
3D.

[SPHERE\_LLT\_GRID](../../master/sphere_llt_grid/sphere_llt_grid.md),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and triangles on the surface of the unit sphere in 3D.

[SQUARE\_GRID](../../master/square_grid/square_grid.md), a C++
library which computes a grid of points over the interior of a square in
2D.

[TETRAHEDRON\_GRID](../../master/tetrahedron_grid/tetrahedron_grid.md),
a C++ library which computes a grid of points over the interior of a
tetrahedron in 3D.

[TRIANGLE\_GRID](../../master/triangle_grid/triangle_grid.md), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../master/wedge_grid/wedge_grid.md), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [pyramid\_grid.cpp](pyramid_grid.cpp), the source code.
-   [pyramid\_grid.hpp](pyramid_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pyramid\_grid\_prb.cpp](pyramid_grid_prb.cpp), a sample calling
    program.
-   [pyramid\_grid\_prb\_output.txt](pyramid_grid_prb_output.txt), the
    output file.

PYRAMID\_UNIT is a set of data defining a GNUPLOT image of a grid on a
unit pyramid.

-   [pyramid\_unit\_commands.txt](pyramid_unit_commands.txt), a file of
    commands to be input to gnuplot.
-   [pyramid\_unit\_nodes.txt](pyramid_unit_nodes.txt), a file
    containing the coordinates of the grid points.
-   [pyramid\_unit\_vertices.txt](pyramid_unit_vertices.txt), a file
    containing the coordinates of the pyramid vertices.
-   [pyramid\_unit.png](pyramid_unit.png), an image of the grid.

### List of Routines: {#list-of-routines align="center"}

-   **PYRAMID\_GRID\_SIZE** sizes a pyramid grid.
-   **PYRAMID\_UNIT\_GRID** computes grid points in the unit pyramid.
-   **PYRAMID\_UNIT\_GRID\_PLOT** sets up a GNUPLOT plot of a unit
    pyramid grid.
-   **PYRAMID\_UNIT\_VERTICES** returns the vertices of the unit
    pyramid.
-   **R8\_PRINT** prints an R8.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 August 2014.*
