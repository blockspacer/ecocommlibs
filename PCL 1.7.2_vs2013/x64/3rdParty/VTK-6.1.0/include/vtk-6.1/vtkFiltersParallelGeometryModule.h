
#ifndef VTKFILTERSPARALLELGEOMETRY_EXPORT_H
#define VTKFILTERSPARALLELGEOMETRY_EXPORT_H

#ifdef VTKFILTERSPARALLELGEOMETRY_STATIC_DEFINE
#  define VTKFILTERSPARALLELGEOMETRY_EXPORT
#  define VTKFILTERSPARALLELGEOMETRY_NO_EXPORT
#else
#  ifndef VTKFILTERSPARALLELGEOMETRY_EXPORT
#    ifdef vtkFiltersParallelGeometry_EXPORTS
        /* We are building this library */
#      define VTKFILTERSPARALLELGEOMETRY_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKFILTERSPARALLELGEOMETRY_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKFILTERSPARALLELGEOMETRY_NO_EXPORT
#    define VTKFILTERSPARALLELGEOMETRY_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSPARALLELGEOMETRY_DEPRECATED
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED __declspec(deprecated)
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED_EXPORT VTKFILTERSPARALLELGEOMETRY_EXPORT __declspec(deprecated)
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED_NO_EXPORT VTKFILTERSPARALLELGEOMETRY_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSPARALLELGEOMETRY_NO_DEPRECATED
#endif



#endif
