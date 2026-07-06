/**
 * 本文件不引用任何头文件
 * 不涉及可编译
 */
/*数组插入*/
void insert(int *nums, int size, int num, int index){
    for(int i = size - 1; i > index; i--){
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
}