/**
 * 本文件不引用任何头文件
 * 不涉及可编译
 */

 /*随机访问数组*/
 int randomAccess(int *nums, int size){
    int randomIndex = rand() % size;
    int randomNum = nums[randomIndex];
    return randomNum;
 }