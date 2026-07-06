/**
 * 本文件不引用任何头文件
 * 不涉及可编译
 */

/*遍历数组*/
void traverse(int *nums, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        count += nums[i];
    }
}

/*查找数组元素*/
void find(int *nums, int size, int target){
    for(int i = 0; i < size; i++){
        if(nums[i] == target)
            return i;
    }
    return -1;
}