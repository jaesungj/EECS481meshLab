float threshold = 10.0f;

Point3f findLocalExtrema(Point3f ref, int axis, bool isMax, float threshold) {
	Point3f result = ref;
	for(CMeshO::VertexIterator vi = meshModel->cm.vert.begin(); vi != meshModel->cm.vert.end(); vi++) {
		Point3f curr = (*vi).P();
		if ((curr[0] >= ref[0] - threshold && curr[0] <= ref[0] + threshold) && 
			(curr[1] >= ref[1] - threshold && curr[1] <= ref[1] + threshold) && 
			(curr[2] >= ref[2] - threshold && curr[2] <= ref[2] + threshold)) {
			if (isMax) {
				if (curr[axis] > result[axis]) {
					result = curr;
				}	
			} else {
				if (curr[axis] < result[axis]) {
					result = curr;
				}				
			}
		}
	}	
	return result
}

Point3f maxY1 = findLocalExtrema(freePnt[0], 1, true, 10.0); 
Point3f maxY2 = findLocalExtrema(gluePnt[0], 1, true, 10.0); 
Point3f minY1 = findLocalExtrema(freePnt[1], 1, false, 10.0); 
Point3f minY2 = findLocalExtrema(gluePnt[1], 1, false, 10.0); 
Point3f minX1 = findLocalExtrema(freePnt[2], 0, false, 10.0); 
Point3f minX2 = findLocalExtrema(gluePnt[2], 0, false, 10.0);

freePnt = new std::vec<Point3f>();
freePnt.push(maxY1);
freePnt.push(minY1);
freePnt.push(minX1);
gluePnt = new std::vec<Point3f>(); 
gluePnt.push(maxY2);
gluePnt.push(minX2);
gluePnt.push(minX2);
