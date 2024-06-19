const binarySearch = (values: number[], target: number) => {

    let lower = 0;
    let upper = values.length-1;

    while (lower<=upper) {
        const middle = Math.floor(lower + ( upper - lower ) / 2);

        // if the midpoint value exceeds our target it means we need to search in the lower bound -> move upper to below midpoint
        if (values[middle] > target) upper = middle-1;
        // if the midpoint value is less than our target is means we need to search in the upper bound -> move lower to above midpoint
        else if (values[middle] < target) lower = middle+1;
        // otherwise we found our boi
        else return middle;
    }

    return -1;
}