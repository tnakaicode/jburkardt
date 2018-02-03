TETRAHEDRON\_GRID\
Tetrahedral Grid of Points {#tetrahedron_grid-tetrahedral-grid-of-points align="center"}
==========================

------------------------------------------------------------------------

**TETRAHEDRON\_GRID** is a C++ library which generates a grid of points
over the interior of a tetrahedron in 3D.

Starting with any 4 points A, B, C and D that define a tetrahedron, we
can divide each edge of the tetrahedron into N subintervals, and create
a tetrahedral grid. This defines ((N+1)\*(N+2)\*(N+3))/6 points that lie
on the intersections of grid lines.

The library includes a routine which allows the user to pick an
arbitrary tetrahedron and an arbitrary number of subdivisions. It then
returns the tetrahedral gridpoints defined by that choice.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_GRID** is available in [a C
version](../../c_src/tetrahedron_grid/tetrahedron_grid.html) and [a C++
version](../../cpp_src/tetrahedron_grid/tetrahedron_grid.html) and [a
FORTRAN77 version](../../f77_src/tetrahedron_grid/tetrahedron_grid.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_grid/tetrahedron_grid.html) and [a
MATLAB version](../../m_src/tetrahedron_grid/tetrahedron_grid.html) and
[a Python version](../../py_src/tetrahedron_grid/tetrahedron_grid.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../cpp_src/ball_grid/ball_grid.html), a C++ library
which computes a grid of points over the interior of the ball in 3D.

[CIRCLE\_ARC\_GRID](../../cpp_src/circle_arc_grid/circle_arc_grid.html),
a C++ program which computes points equally spaced along a circular arc;

[CUBE\_GRID](../../cpp_src/cube_grid/cube_grid.html), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[DISK\_GRID](../../cpp_src/disk_grid/disk_grid.html), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_GRID](../../cpp_src/ellipse_grid/ellipse_grid.html), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_GRID](../../cpp_src/ellipsoid_grid/ellipsoid_grid.html), a
C++ library which computes a grid of points over the interior of an
ellipsoid in 3D.

[HYPERCUBE\_GRID](../../cpp_src/hypercube_grid/hypercube_grid.html), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../cpp_src/polygon_grid/polygon_grid.html), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../cpp_src/pyramid_grid/pyramid_grid.html), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

[SIMPLEX\_GRID](../../cpp_src/simplex_grid/simplex_grid.html), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../cpp_src/sphere_fibonacci_grid/sphere_fibonacci_grid.html),
a C++ library which uses a Fibonacci spiral to create a grid of points
on the surface of the unit sphere in 3D.

[SPHERE\_GRID](../../cpp_src/sphere_grid/sphere_grid.html), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[SPHERE\_LLQ\_GRID](../../cpp_src/sphere_llq_grid/sphere_llq_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and quadrilaterals on the surface of the unit sphere in
3D.

[SPHERE\_LLT\_GRID](../../cpp_src/sphere_llt_grid/sphere_llt_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and triangles on the surface of the unit sphere in 3D.

[SQUARE\_GRID](../../cpp_src/square_grid/square_grid.html), a C++
library which computes a grid of points over the interior of a square in
2D.

[TRIANGLE\_GRID](../../cpp_src/triangle_grid/triangle_grid.html), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_grid.cpp](tetrahedron_grid.cpp), the source code.
-   [tetrahedron\_grid.hpp](tetrahedron_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_grid\_prb.cpp](tetrahedron_grid_prb.cpp), a sample
    calling program.
-   [tetrahedron\_grid\_prb\_output.txt](tetrahedron_grid_prb_output.txt),
    the output file.
-   [tetrahedron\_grid\_test01.xyz](tetrahedron_grid_test01.xyz), a grid
    of 286 points, generated by subdividing by 10 each side of the
    (0,0,0), (1,0,0), (0,1,0) and (0,0,1) tetrahedron.
-   [tetrahedron\_grid\_test01.png](tetrahedron_grid_test01.png), an
    image of the points.

### List of Routines: {#list-of-routines align="center"}

-   **R83VEC\_PRINT\_PART** prints "part" of an R83VEC.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TETRAHEDRON\_GRID** computes points on a tetrahedral grid.
-   **TETRAHEDRON\_GRID\_COUNT** counts the grid points inside a
    tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 November 2011.*