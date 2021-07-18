#pragma once
// Include functions to calculate distance between different geometric promitives
#include "Primitives\Point.h"
#include "Primitives\Line.h"

namespace jmk {

	/// <summary>
	/// Returns the distance to the point C from line [AB]. Return value > 0 
	/// Not the sign distance.</summary>
	/// <param name="A"> One end point of the segment</param>
	/// <param name="B"> Other end point of the segment</param>
	/// <param name="C"> Point we need to find the distance from the segment</param>
	/// <returns>void</returns>
	float distance(Point3d& A, Point3d& B, Point3d& C);

	float distance(Line& line, Point3d& C);
}