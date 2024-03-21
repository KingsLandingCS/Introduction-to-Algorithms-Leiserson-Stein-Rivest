function convexHull(points) {

    if (points.length < 3) return null;

    let hull = [];

    let minIdx = 0;

    for (let i = 1; i < points.length; i++) {

        if (points[i].x < points[minIdx].x) minIdx = i;
    }

    let p = minIdx, q;

    do {

        hull.push(points[p]);
        q = (p + 1) % points.length;
        for (let i = 0; i < points.length; i++) {
            if (orientation(points[p], points[i], points[q] === 2)) {

                q = i;
            }
        }

        p = q;

    } while (p !== minIdx);

    return hull;

}

function orientation(p, q, r) {

    let val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val === 0) return 0;
    return (val > 0) ? 1 : 0;
}

let obstacles = [

    { x: 1, y: 1 },
    { x: 2, y: 5 },
    { x: 4, y: 3 },
    { x: 5, y: 2 },
    { x: 6, y: 4 },
    { x: 7, y: 1 },
    { x: 8, y: 5 },
    { x: 9, y: 3 }
];

let convexHullPoints = convexHull(obstacles);


console.log("Convex Hull Points:");

convexHullPoints.forEach(point => {

    console.log(`(${point.x}, ${point.y})`);
})





