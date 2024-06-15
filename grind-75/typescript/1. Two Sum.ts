function twoSum(nums: number[], target: number): number[] {
    
    const numPosMap = new Map<number, number>();

    for (let i=0; i<nums.length; i++) {
        const num = nums[i]; // 2 | 7
        const numTargetDelta = target-num; // 9-2 -> 7 | 9-7 -> 2
        const mapEntry = numPosMap.get(numTargetDelta); // undefined | 0

        if (mapEntry !== undefined) return [ mapEntry, i ]; // ! | [ 0, 1 ]
        numPosMap.set(num, i); // add [2, 0]
    }

    return [];
};